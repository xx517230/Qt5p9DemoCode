#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "qdicethread.h"
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT
private:
    QDiceThread threadA;
public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
protected:
    void closeEvent(QCloseEvent *event);
private slots:
    void onthreadA_started();
    void onthreadA_finished();
    void onthreadA_newValue(int seq, int diceValue);


    void on_btnStart_clicked();

    void on_btnBegin_clicked();

    void on_btnEnd_clicked();

    void on_btnFinish_clicked();

    void on_btnClear_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
