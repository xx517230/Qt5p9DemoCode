#include "qdicethread.h"
#include <QTime>
QDiceThread::QDiceThread()
{

}


void QDiceThread::run()
{
    m_seq = 0;
    m_diceVal = 0;
    qsrand(QTime::currentTime().second());
    while(!m_stop)
    {
        if(!m_paused)
        {
            m_diceVal = qrand()%6+1;
            m_seq++;
            emit newValued(m_seq,m_diceVal);
        }
        msleep(500);
    }
    quit();
}


void QDiceThread::diceBegin()
{
    m_paused=false;
    m_stop=false;
}

void QDiceThread::dicePause()
{
    m_paused=true;
    m_stop=false;
}

void QDiceThread::stopThread()
{
    m_paused=true;
    m_stop=true;
}
