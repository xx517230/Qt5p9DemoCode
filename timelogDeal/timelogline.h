#ifndef TIMELOGLINE_H
#define TIMELOGLINE_H
#include <QString>
#include <QList>
#include "sitebinxy.h"


class TimeLogLine
{
private:
    int totalNum;
    int dieNum;
    QString timeStr;
    double oneMeastime;
    double intervalTime;
    double totalTime;
public:
    TimeLogLine();
    int getTotalNum() const;
    void setTotalNum(int newTotalNum);
    int getDieNum() const;
    void setDieNum(int newDieNum);
    QString getTimeStr() const;
    void setTimeStr(const QString &newTimeStr);
    double getOneMeastime() const;
    void setOneMeastime(double newOneMeastime);
    double getTotalTime() const;
    void setTotalTime(double newTotalTime);
    double getIntervalTime() const;
    void setIntervalTime(double newIntervalTime);

};

#endif // TIMELOGLINE_H
