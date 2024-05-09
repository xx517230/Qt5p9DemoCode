#include "timelog.h"

#define PHIF_CONNECT 1
//需要设置_cp
int cp = 0;//cp流程选择，见_cpFlow,根据需要选择0-6
char* cpFlow[7]={"CP","CP1","CP2","CP3","CP4","QTP","QTPQ"};

//按需修改
#define SITEMAXNUM 32  //大于32SITE需自行修改
#define DEBUG_TIME
const char* localSavaPath ="D:\\CRAFT_user\\";
//const char* netSavaPath[2]= { "\\\\PC001\\3360Pdata\\summary\\", "\\\\PC001\\3380Ddata\\summary\\" };
//const char* netSavaPath[2]= { "\\\\172.16.14.254\\3360Pdata\\summary\\", "\\\\\172.16.14.254\\3380Ddata\\summary\\" };
std::string netSavaPath[]= { std::string("\\\\172.16.14.254\\3360Pdata\\summary\\"), std::string("\\\\\172.16.14.254\\3380Ddata\\summary\\") };
//不需要修改
const char* fileType = ".CSV";
const char* ateArray[2]={"3362","3382"};//3362->3360P 3382->3380D

int startUPFlag;
int activeSite;
//char ateName[32];
std::string ateName;
char waferId[32];
char lotId[32];
char lastWafetId[32]="";
char lastLotId[32]="";

char timeStr[64];
char command[2048];
std::string tLogNetSavaPath;
std::string tLogLocalSavaPath;
char tLogNetFile[1024];
char tLogLocalFile[1024];

FILE * timeFile =NULL;
struct tm * tm;

struct TimeInfo{
    struct tm *timePtr;
    int testDie;//每次测试SITE数
    long testTotal;//已测试总数
    time_t firstTime;//第一次测试时间
    time_t startTime;//每次测试开始时间
    clock_t start_t;
    clock_t end_t;
    double test_t;//每次测试时间
    double interval_t;//间隔时间，上次结束到下次开始测试时间
    double total_t;//总时间
} timeInfo = {0};

//该PLN将时间LOG保存到本地，每片测完后再将本地LOG复制到网络。
/*
用法：
1.按需设置int cp; cp流程选择，见_cpFlow,根据需要选择0-6,默认为0,CP
2.将timeStart();置于TEST_START()最开始
3.将timeEnd();置于TEST_END()最后
4.确定copyTimeLog2Net()是否需要复制到主PLN中，并注释掉该PLN的DO_WHEN_EOW()

TEST_START()
{
    timeStart();
    ... //其余代码
}

TEST_END()
{
    ... //其余代码
    timeEnd();
}

DO_WHEN_EOW()
{
    copyTimeLog2Net();
}

*/

void READ_WAFER_ID( std::string& waferId,std::string& lotId)
{
    waferId="temp-01";
    lotId="temp-";
}
int GET_ACTIVE_SOCKET()
{
    return 0xffff;
}
void READ_TESTER_MODEL(std::string& ateName)
{
#ifndef _3360P
    ateName = "3382";
#else
    ateName ="3362";
#endif
}
void timeStart()
{
#ifndef DEBUG_TIME
    if(PHIF_CONNECT)    timeStartSub();
#else
    strcpy(lastWafetId,"Debug-1");
    strcpy(lastLotId,"Debug-");
    timeStartSub();
#endif
}

void timeEnd()
{
#ifndef DEBUG_TIME
    if(PHIF_CONNECT)    timeEndSub();
#else
    timeEndSub();
#endif
}

void copyTimeLog2Net()
{
    copyFile2Path(tLogLocalFile,tLogNetSavaPath.c_str());
}

void timeStartSub()
{
    timeInfo.start_t = clock();
    time(&timeInfo.startTime);
    timeInfo.timePtr = localtime (&timeInfo.startTime);

    if(!startUPFlag)
    {
        startUPFlag = 1;

        READ_TESTER_MODEL( ateName );
        if( NULL == ateName.c_str() || "" == ateName || (strcmp(ateName.c_str(),ateArray[0]) == 0))
        {
            //strcpy(tLogNetSavaPath,netSavaPath[0]);//3360P net path
            tLogNetSavaPath=std::string(netSavaPath[0]);
        }else
        {
            //strcpy(tLogNetSavaPath,netSavaPath[1]);//3380D net path
            tLogNetSavaPath=std::string(netSavaPath[1]);
        }
    }
    std::cout<<tLogNetSavaPath<<"\n";
#ifndef DEBUG_TIME
    READ_WAFER_ID( waferId, lotId );
#else
    strcpy(waferId,"DebugTime-1");
    strcpy(lotId,"DebugTime-");
#endif

    //换片或首片测试
    if(strcmp(waferId,lastWafetId))
    {
        std::cout<<tLogLocalSavaPath<<"\n";
        std::cout<<tLogNetSavaPath<<"\n";
        //sprintf( tLogLocalSavaPath, "%s%s\\%s\\", localSavaPath,cpFlow[cp],lotId);
        //sprintf( tLogNetSavaPath, "%s%s\\%s\\", tLogNetSavaPath.c,cpFlow[cp],lotId);
        tLogLocalSavaPath = std::string(localSavaPath)+std::string(cpFlow[cp])+std::string(lotId);
        tLogNetSavaPath = std::string(tLogNetSavaPath)+std::string(cpFlow[cp])+std::string(lotId);

        std::cout<<tLogLocalSavaPath<<"\n";
        std::cout<<tLogNetSavaPath<<"\n";

        //换批次建新批号目录
        if(strcmp(lastLotId,lotId))
        {
            strcpy(lastLotId,lotId);
            sprintf( command, "MD %s", tLogLocalSavaPath );
            system( command );
            sprintf( command, "MD %s", tLogNetSavaPath );
            system( command );
        }
        strcpy(lastWafetId,waferId);
        timeInfo.testDie = 0;
        timeInfo.testTotal = 0;
        timeInfo.firstTime=timeInfo.startTime;
        tm = localtime (&timeInfo.firstTime);
        sprintf( tLogLocalFile, "%s%s_%4d%02d%02d%02d%02d%02d%s", tLogLocalSavaPath,waferId,tm->tm_year+1900, tm->tm_mon+1, tm->tm_mday,tm->tm_hour,tm->tm_min,tm->tm_sec,fileType);
        timeFile = fopen( tLogLocalFile, "at+" );
        fprintf (timeFile,"TotalNum,DieNum,StartTime,TestTime(S),IntervalTime(S),TotalTime(min),SITE,BIN,X,Y,...\n");//XY用于确定是否回收及回收时间，SITE/BIN/X/Y用于MAP还原
        fclose( timeFile );
    }

    activeSite = GET_ACTIVE_SOCKET();
    timeInfo.testDie=0;
    for( int i=0; i<SITEMAXNUM; i++ )
    {
        if( activeSite>>i & 1 ) timeInfo.testDie++;
    }
    timeInfo.testTotal+=timeInfo.testDie;
    timeInfo.interval_t = (double)(timeInfo.start_t - timeInfo.end_t) / CLOCKS_PER_SEC;  //S
}

void timeEndSub()
{
    timeInfo.end_t = clock();
    timeInfo.test_t = (double)(timeInfo.end_t - timeInfo.start_t) / CLOCKS_PER_SEC;  //S
    timeInfo.total_t = (difftime(timeInfo.startTime, timeInfo.firstTime) + timeInfo.test_t)/60; //min

    timeFile = fopen( tLogLocalFile, "at+" );
    fprintf (timeFile,"%d,",timeInfo.testTotal);
    fprintf (timeFile,"%d,",timeInfo.testDie);
    fprintf (timeFile,"%d/%d/%d %d:%d:%d,",timeInfo.timePtr->tm_year+1900, timeInfo.timePtr->tm_mon+1, timeInfo.timePtr->tm_mday,
            timeInfo.timePtr->tm_hour,timeInfo.timePtr->tm_min,timeInfo.timePtr->tm_sec);
    fprintf (timeFile,"%.3f,",timeInfo.test_t);
    fprintf (timeFile,"%f,",timeInfo.interval_t);
    fprintf (timeFile,"%.2f,",timeInfo.total_t);

    for( int i=0; i<SITEMAXNUM; i++ )
    {
        //if( activeSite>>i & 1 ) fprintf (timeFile,"%d,%d,%d,%d",i,HWBIN[i],PHIF_X[i],PHIF_Y[i]);//SITE,BIN,X,Y
    }
    fprintf (timeFile, "\n");
    fclose( timeFile );
}

void copyFile2Path(const char* srcFile,const char* destFilepath)
{
    char  cmd[2048];

    sprintf( cmd, "copy %s %s", srcFile, destFilepath);
#ifdef DEBUG_TIME
    printf( "%s\n", cmd );
#endif
    system( cmd );
}

