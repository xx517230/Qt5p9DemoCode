#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QList>
#include <QString>
#include <QDir>
#include <QFile>
#include <QMessageBox>
#include <QStandardPaths>

QList<QCheckBox*> chkBoxList;
QList<QRadioButton*> rbtnList;

QString mapSavePath = "\\\\172.16.11.3\\测试生产现场数据输入\\MAP-保存\\";
QString tskMapPath  = "\\\\172.16.11.3\\tsk\\MAP\\";
QString p12MapPath  = "\\\\172.16.11.2\\pub\\MAP\\";
QString p8MapPath   = "\\\\172.16.11.2\\tel\\MAP\\";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString desktopPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    ui->editOutPutPath->setText(desktopPath);
    chkBoxList.append(ui->chkBoxCP);
    chkBoxList.append(ui->chkBoxCP1);
    chkBoxList.append(ui->chkBoxCP2);
    chkBoxList.append(ui->chkBoxCP3);
    chkBoxList.append(ui->chkBoxCP4);
    chkBoxList.append(ui->chkBoxQTP);
    chkBoxList.append(ui->chkBoxQTPQ);
    rbtnList.append(ui->rbtnMapSave);
    rbtnList.append(ui->rbtnTsKMap);
    rbtnList.append(ui->rbtnP12Map);
    rbtnList.append(ui->rbtnP8Map);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_btnAllSelect_clicked()
{
    for(int i = 0; i < chkBoxList.size();i++)
    {
        chkBoxList.at(i)->setChecked(true);
    }
}


void MainWindow::on_btnCancelSelect_clicked()
{
    for(int i = 0; i < chkBoxList.size();i++)
    {
        chkBoxList.at(i)->setChecked(false);
    }
}


void MainWindow::on_btnInvertSelect_clicked()
{
    for(int i = 0; i < chkBoxList.size();i++)
    {
        if(chkBoxList.at(i)->isChecked())
            chkBoxList.at(i)->setChecked(false);
        else
            chkBoxList.at(i)->setChecked(true);
    }
}

void MainWindow::on_btnXHCP_clicked()
{
    on_btnCancelSelect_clicked();
    ui->chkBoxCP1->setChecked(true);
    ui->chkBoxCP2->setChecked(true);
    ui->chkBoxCP3->setChecked(true);
    ui->chkBoxCP4->setChecked(true);
}


void MainWindow::on_btnXHQTP_clicked()
{
    on_btnCancelSelect_clicked();
    ui->chkBoxCP1->setChecked(true);
    ui->chkBoxCP2->setChecked(true);
    ui->chkBoxCP3->setChecked(true);
    ui->chkBoxQTP->setChecked(true);
}


void MainWindow::on_btnZCQTP_clicked()
{
    on_btnCancelSelect_clicked();
    ui->chkBoxQTP->setChecked(true);
    ui->chkBoxQTPQ->setChecked(true);
}



void MainWindow::on_btnMapDo_clicked()
{
    if(NULL == ui->editLotId->text())
    {
        QMessageBox::critical(this, tr("警告"), tr("批号为空，请输入批号！"));
        return;
    }
    QString lotId = ui->editLotId->text();
    QString path;

    if(false==lotId.endsWith("-"))
        lotId.append("-");

    ui->editLotId->setText(lotId);

    if(ui->rbtnMapSave->isChecked())
    {
        path =mapSavePath;
        path.append(lotId);
        QDir dir(path);
        if(dir.exists())
        {}
            //QFile::copy();

    }
    else if(ui->rbtnTsKMap->isChecked())    path =tskMapPath;
    else if(ui->rbtnP12Map->isChecked())    path =p12MapPath;
    else if(ui->rbtnP8Map->isChecked())     path =p8MapPath;



}

