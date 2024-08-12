#include "timelogline.h"

TimeLogLine::TimeLogLine()
{
}

int TimeLogLine::getTotalNum() const
{
    return totalNum;
}

void TimeLogLine::setTotalNum(int newTotalNum)
{
    totalNum = newTotalNum;
}

int TimeLogLine::getDieNum() const
{
    return dieNum;
}

void TimeLogLine::setDieNum(int newDieNum)
{
    dieNum = newDieNum;
}

QString TimeLogLine::getTimeStr() const
{
    return timeStr;
}

void TimeLogLine::setTimeStr(const QString &newTimeStr)
{
    timeStr = newTimeStr;
}

double TimeLogLine::getOneMeastime() const
{
    return oneMeastime;
}

void TimeLogLine::setOneMeastime(double newOneMeastime)
{
    oneMeastime = newOneMeastime;
}

double TimeLogLine::getTotalTime() const
{
    return totalTime;
}

void TimeLogLine::setTotalTime(double newTotalTime)
{
    totalTime = newTotalTime;
}



double TimeLogLine::getIntervalTime() const
{
    return intervalTime;
}

void TimeLogLine::setIntervalTime(double newIntervalTime)
{
    intervalTime = newIntervalTime;
}



