#include <QDir>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QStringList>
#include <QList>
#include <QDebug>
#include <QMap>
#include "timelogline.h"
#include "sitebinxy.h"

#define TIMETYPE 6
QMap<QString, QList<QStringList>> readCsvFiles(const QString &path);


/*
 * 函数功能:
 *          单个timelog csv文件处理，
 *          time相关信息保存在QList<TimeLogLine> time中，
 *          map相关信息保存在QList<SITEBINXY> map中
*/

void csvFileDeal(QString file,QList<QStringList> &csvData,QList<TimeLogLine>& time,QList<SITEBINXY> &map)
{
    int cnt=0;
    TimeLogLine logLine;
    SITEBINXY td;
    foreach (const QStringList &line, csvData) {//循环处理每行数据，保存在TimeLogLine类中
        ++cnt;
        if(cnt ==1 && line.at(0).compare("TotalNum")==0)
        {
            continue;
        }
        else if(cnt ==1 && line.at(0).compare("TotalNum")!=0)
        {
            qDebug()<< QString::asprintf("%s 文件 %d行 不是表头，请确认！",file.toLocal8Bit().data(),cnt);
            break;
        }
        if(line.size()<TIMETYPE)
        {
            qDebug()<< QString::asprintf("%s 文件 %d行 数据类型过少，保存异常，请确认！",file.toLocal8Bit().data(),cnt);
            break;
        }
        else if ( (line.size()-TIMETYPE) % 4 != 0)
        {
            qDebug()<<QString::asprintf("%s 文件 %d行 SITE/BIN/X/Y数据可能缺少数据，保存异常，请确认！",file.toLocal8Bit().data(),cnt);
            break;
        }
        logLine.setTotalNum(line.at(0).toInt());
        logLine.setDieNum(line.at(1).toInt());
        logLine.setTimeStr(line.at(2));
        logLine.setOneMeastime(line.at(3).toDouble());
        logLine.setIntervalTime(line.at(4).toDouble());
        logLine.setTotalTime(line.at(5).toDouble());
        for(int i = 6;i<line.size();i+=4)
        {
            td.setSite(line.at(i).toShort());
            td.setBin(line.at(i+1).toShort());
            td.setX(line.at(i+2).toShort());
            td.setY(line.at(i+3).toShort());
            map.append(td);//当前td的针卡测试数据
        }
        time.append(logLine);
    }
}

void getReCycleCool(QList<SITEBINXY> &map)
{
    int flag = 0;
    int maxX=0;
    int minX=99999;
    int maxY=0;
    int minY=99999;
    int x=0;
    int y=0;
    foreach (SITEBINXY td, map) {
        x=td.getX();
        y=td.getY();
        if(x>maxX) maxX=x;
        if(x<minX) minX=x;
        if(y>maxY) maxY=y;
        if(y<minY) minY=y;
    }
    int txtMap[maxX][maxY]={0};

    foreach (SITEBINXY td, map) {
        if(txtMap[td.getX()-1][td.getY()-1]==0)
        {
            txtMap[td.getX()-1][td.getY()-1]=td.getBin();
        }
        else
        {

        }

    }

}


int main() {
    QString path = R"(C:\Users\Lenovo\Desktop\A\)";
    QMap<QString, QList<QStringList>> csvFilesContents = readCsvFiles(path);//QMAP中一个文件对应个一个QList

    QList<TimeLogLine> time;
    QList<SITEBINXY> map;

    foreach (const QString &fileName, csvFilesContents.keys()) {//循环处理csv文件
        qDebug() << "Contents of" << fileName << ":";
        QList<QStringList> csvData = csvFilesContents.value(fileName);//获取当前csv的所有行数据
        foreach (const QStringList &line, csvData) {//循环处理每行数据，保存在TimeLogLine类中
            csvFileDeal(fileName,csvData,time,map);

        }



    }

}

// int totalNum;
// int dieNum;
// QString timeStr;
// double oneMeastime;
// double intervalTime;
// double totalTime;
// QList<SITEBINXY> siteBinXY;




//遍历给定路径的所有csv文件，并将文件名保存在QStringList中
QMap<QString, QList<QStringList>> readCsvFiles(const QString &path) {
    QMap<QString, QList<QStringList>> csvFilesContents;
    QDir dir(path);
    QStringList csvFiles = dir.entryList(QStringList() << "*.csv", QDir::Files);

    foreach (QString fileName, csvFiles) {
        QFile file(dir.absoluteFilePath(fileName));
        QList<QStringList> csvContent;
        if (file.open(QIODevice::ReadOnly)) {
            QTextStream in(&file);
            while (!in.atEnd()) {
                QString line = in.readLine();
                csvContent.append(line.split(",",Qt::SkipEmptyParts));
            }
            file.close();
        } else {
            qDebug() << "Could not open file:" << fileName;
        }
        csvFilesContents.insert(fileName, csvContent);
    }
    return csvFilesContents;
}
