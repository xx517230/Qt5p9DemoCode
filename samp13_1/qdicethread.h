#ifndef QDICETHREAD_H
#define QDICETHREAD_H

#include <QThread>
class QDiceThread : public QThread
{
    Q_OBJECT
private:
    int m_seq=0;
    int m_diceVal;
    bool m_paused=true;
    bool m_stop=false;
protected:
    void run() Q_DECL_OVERRIDE;
public:
    QDiceThread();
    void diceBegin();
    void dicePause();
    void stopThread();


signals:
    void newValued(int m_seq,int m_diceVal);

signals:
};

#endif // QDICETHREAD_H
