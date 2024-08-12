#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(&threadA,SIGNAL(started()),this,SLOT(onthreadA_started()));
    connect(&threadA,SIGNAL(finished()),this,SLOT(onthreadA_finished()));
    connect(&threadA,SIGNAL(newValued(int,int)),this,SLOT(onthreadA_newValue(int,int)));
    ui->btnStart->setEnabled(true);
    ui->btnBegin->setEnabled(false);
    ui->btnEnd->setEnabled(false);
    ui->btnFinish->setEnabled(false);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::closeEvent(QCloseEvent *event)
{
    if(thread()->isRunning())
    {
        threadA.stopThread();
        threadA.wait();
    }
    event->accept();
}

void Dialog::onthreadA_started()
{
    ui->labStatus->setText("线程状态: 开启");
    QDiceThread threadA = new QDiceThread();
}

void Dialog::onthreadA_finished()
{
    ui->labStatus->setText("线程状态: 关闭,线程A已销毁，玩不了~");
    ui->btnStart->setEnabled(false);
    ui->btnBegin->setEnabled(false);
    ui->btnEnd->setEnabled(false);
    ui->btnFinish->setEnabled(false);
}

void Dialog::onthreadA_newValue(int seq, int diceValue)
{
    //根据获得的次数及点数显示在界面上，一是显示文本，二是显示点数图片
    QString str= QString::asprintf("第 %d 次掷骰子， 点数为: %d",seq,diceValue);
    ui->plainTextEdit->appendPlainText(str);

    QPixmap pic;
    QString fileName=QString::asprintf(":/dice/images/d%d.jpg",diceValue);
    pic.load(fileName);
    ui->labPic->setPixmap(pic);
}

void Dialog::on_btnStart_clicked()
{
    threadA.start();
    ui->btnStart->setEnabled(false);
    ui->btnBegin->setEnabled(true);
    ui->btnEnd->setEnabled(false);
    ui->btnFinish->setEnabled(true);
}

void Dialog::on_btnBegin_clicked()
{
    ui->labStatus->setText("线程状态: 开始掷骰子");
    threadA.diceBegin();
    ui->btnStart->setEnabled(false);
    ui->btnBegin->setEnabled(false);
    ui->btnEnd->setEnabled(true);
    ui->btnFinish->setEnabled(true);
}


void Dialog::on_btnEnd_clicked()
{
    ui->labStatus->setText("线程状态: 暂停掷骰子");
    threadA.dicePause();
    ui->btnStart->setEnabled(false);
    ui->btnBegin->setEnabled(true);
    ui->btnEnd->setEnabled(false);
    ui->btnFinish->setEnabled(true);
}


void Dialog::on_btnFinish_clicked()
{
    threadA.stopThread();
    threadA.wait();
    ui->btnStart->setEnabled(true);
    ui->btnBegin->setEnabled(false);
    ui->btnEnd->setEnabled(false);
    ui->btnFinish->setEnabled(false);
}


void Dialog::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}

