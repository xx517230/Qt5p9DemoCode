#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QList>
#include <QString>
#include <QDir>
#include <QFile>
#include <QMessageBox>
#include <QStandardPaths>
#include <QDesktopServices>
#include <QDebug>
#include <QUrl>
QList<QCheckBox*> chkBoxList;
QList<QRadioButton*> rbtnList;
QList<QRadioButton*> chkBoxExcleList;

QString mapSavePath         = R"(\\172.16.11.3\测试生产现场数据输入\MAP-保存\)";
QString tskMapPath          = R"(\\172.16.11.3\tsk\MAP\)";
QString p12MapPath          = R"(\\172.16.11.2\pub\MAP\)";
QString p8MapPath           = R"(\\172.16.11.2\tel\MAP\)";

QString operPath            = R"(\\172.16.11.3\测试生产现场数据输入\)";
QString checkedDataPath     = R"(\\172.16.11.1\公开共享文件夹\测试部\测试数据\未核对数据\)";
QString uncheckedDataPath   = R"(\\172.16.11.1\公开共享文件夹\测试部\测试数据\已核对数据\)";


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
    chkBoxList.append(ui->chkBoxQTP_CP2);
    rbtnList.append(ui->rbtnMapSave);
    rbtnList.append(ui->rbtnTsKMap);
    rbtnList.append(ui->rbtnP12Map);
    rbtnList.append(ui->rbtnP8Map);
}

void copyDir(QString srcDirStr,QString destDirStr)
{
    QDir srcDir(srcDirStr);
    QDir destDir(destDirStr);
    //获取该文件夹内所有文件除.和..以外
    srcDir.setFilter(QDir::NoDotAndDotDot | QDir::AllEntries);
    QStringList srcDirFileList = srcDir.entryList();

    //遍历源文件夹列表
    for(QString& srcDirFile : srcDirFileList)
    {
        QFileInfo fileInfo(srcDirStr + srcDirFile);
        //判断是否是文件夹
        if(fileInfo.isDir())
        {
            destDir.mkdir(srcDirFile);
            copyDir( srcDirStr + srcDirFile + "\\",destDirStr + srcDirFile + "\\");
        }
        else
        {
            QFile file(srcDirStr + srcDirFile);
            QFile::copy(srcDirStr + srcDirFile,destDirStr + srcDirFile);
        }
    }
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
    ui->rbtnMapSave->setChecked(true);
    on_btnCancelSelect_clicked();
    ui->chkBoxCP1->setChecked(true);
    ui->chkBoxCP2->setChecked(true);
    ui->chkBoxCP3->setChecked(true);
    ui->chkBoxCP4->setChecked(true);
}


void MainWindow::on_btnXHQTP_clicked()
{
    ui->rbtnMapSave->setChecked(true);
    on_btnCancelSelect_clicked();
    ui->chkBoxCP1->setChecked(true);
    ui->chkBoxCP2->setChecked(true);
    ui->chkBoxCP3->setChecked(true);
    ui->chkBoxQTP->setChecked(true);
}


void MainWindow::on_btnZCQTP_clicked()
{
    ui->rbtnMapSave->setChecked(true);
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

    //ui->editLotId->setText(lotId);

    if(ui->rbtnTsKMap->isChecked())
    {

        path =tskMapPath;
        path.append(lotId).append("\\");
        QDir dir(path);
        if(dir.exists())
        {
            QString outputDir = ui->editOutPutPath->text();
            QDir outDir(outputDir);
            outDir.mkdir(lotId);
            copyDir(path,outDir.path()+"/"+lotId+"/");
            //QMessageBox::information(NULL, "复制MAP", "复制完成！");
            QDesktopServices::openUrl(QUrl("file:"+ui->editOutPutPath->text()+'/'+lotId+"/", QUrl::TolerantMode));             //打开
        }
        else
        {
            path += " 目录不存在，请确认!";
            QMessageBox::critical(this, tr("警告"), path);
            return;
        }

    }
    else if(ui->rbtnP12Map->isChecked())
    {
        path =p12MapPath;
        path.append(lotId).append("\\");
        QDir dir(path);
        if(dir.exists())
        {
            QString outputDir = ui->editOutPutPath->text();
            QDir outDir(outputDir);
            outDir.mkdir(lotId);
            copyDir(path,outDir.path()+"/"+lotId+"/");
            //QMessageBox::information(NULL, "复制MAP", "复制完成！");
            QDesktopServices::openUrl(QUrl("file:"+ui->editOutPutPath->text()+'/'+lotId+"/", QUrl::TolerantMode));             //打开
        }
        else
        {
            path += " 目录不存在，请确认!";
            QMessageBox::critical(this, tr("警告"), path);
            return;
        }

    }
    else if(ui->rbtnP8Map->isChecked())
    {
        path =p8MapPath;
        path.append(lotId).append("\\");
        QDir dir(path);
        if(dir.exists())
        {
            QString outputDir = ui->editOutPutPath->text();
            QDir outDir(outputDir);
            outDir.mkdir(lotId);
            copyDir(path,outDir.path()+"/"+lotId+"/");
            //QMessageBox::information(NULL, "复制MAP", "复制完成！");
            QDesktopServices::openUrl(QUrl("file:"+ui->editOutPutPath->text()+'/'+lotId+"/", QUrl::TolerantMode));             //打开
        }
        else
        {
            path += " 目录不存在，请确认!";
            QMessageBox::critical(this, tr("警告"), path);
            return;
        }
    }
    else if(ui->rbtnMapSave->isChecked())
    {
        path =mapSavePath;
        QDir dir(path);
        if(dir.exists()==false)
        {
            path += " 目录不存在，请确认!";
            QMessageBox::critical(this, tr("警告"), path);
            return;
        }


        if(ui->chkBoxCP->isChecked()==false &&
            ui->chkBoxCP1->isChecked()==false &&
            ui->chkBoxCP2->isChecked()==false &&
            ui->chkBoxCP3->isChecked()==false &&
            ui->chkBoxCP4->isChecked()==false &&
            ui->chkBoxQTP->isChecked()==false &&
            ui->chkBoxQTPQ->isChecked()==false )
        {
            QMessageBox::critical(this, tr("警告"), tr("在MAP保存路径至少需要选择一个流程！！！"));
            return;
        }



        if(ui->chkBoxCP->isChecked())
        {
            QString cpPath = path+"CP\\"+lotId+"\\";
            QDir cpDir(cpPath);
            if(cpDir.exists()==false)
            {
                cpPath += " 目录不存在，请确认!";
                QMessageBox::critical(this, tr("警告"), cpPath);
                return;
            }
            QString outputDir = ui->editOutPutPath->text();
            QDir outDir(outputDir);
            outDir.mkdir(lotId);
            QDir outDirCP(outDir.path()+"/"+lotId);
            outDirCP.mkdir("CP");
            //qDebug()<<outDirCP.path()+"/CP/";
            copyDir(cpPath,outDirCP.path()+"/CP/");
        }
        if(ui->chkBoxCP1->isChecked())
        {
            QString cpPath = path+"CP1\\"+lotId+"\\";
            QDir cpDir(cpPath);
            if(cpDir.exists()==false)
            {
                cpPath += " 目录不存在，请确认!";
                QMessageBox::critical(this, tr("警告"), cpPath);
                return;
            }
            QString outputDir = ui->editOutPutPath->text();
            QDir outDir(outputDir);
            outDir.mkdir(lotId);
            QDir outDirCP(outDir.path()+"/"+lotId);
            outDirCP.mkdir("CP1");
            //qDebug()<<outDirCP.path()+"/CP/";
            copyDir(cpPath,outDirCP.path()+"/CP1/");
        }
        if(ui->chkBoxCP2->isChecked())
        {
            QString cpPath = path+"CP2\\"+lotId+"\\";
            QDir cpDir(cpPath);
            if(cpDir.exists()==false)
            {
                cpPath += " 目录不存在，请确认!";
                QMessageBox::critical(this, tr("警告"), cpPath);
                return;
            }
            QString outputDir = ui->editOutPutPath->text();
            QDir outDir(outputDir);
            outDir.mkdir(lotId);
            QDir outDirCP(outDir.path()+"/"+lotId);
            outDirCP.mkdir("CP2");
            //qDebug()<<outDirCP.path()+"/CP/";
            copyDir(cpPath,outDirCP.path()+"/CP2/");
        }
        if(ui->chkBoxCP3->isChecked())
        {
            QString cpPath = path+"CP3\\"+lotId+"\\";
            QDir cpDir(cpPath);
            if(cpDir.exists()==false)
            {
                cpPath += " 目录不存在，请确认!";
                QMessageBox::critical(this, tr("警告"), cpPath);
                return;
            }
            QString outputDir = ui->editOutPutPath->text();
            QDir outDir(outputDir);
            outDir.mkdir(lotId);
            QDir outDirCP(outDir.path()+"/"+lotId);
            outDirCP.mkdir("CP3");
            //qDebug()<<outDirCP.path()+"/CP/";
            copyDir(cpPath,outDirCP.path()+"/CP3/");
        }
        if(ui->chkBoxCP4->isChecked())
        {
            QString cpPath = path+"CP4\\"+lotId+"\\";
            QDir cpDir(cpPath);
            if(cpDir.exists()==false)
            {
                cpPath += " 目录不存在，请确认!";
                QMessageBox::critical(this, tr("警告"), cpPath);
                return;
            }
            QString outputDir = ui->editOutPutPath->text();
            QDir outDir(outputDir);
            outDir.mkdir(lotId);
            QDir outDirCP(outDir.path()+"/"+lotId);
            outDirCP.mkdir("CP4");
            //qDebug()<<outDirCP.path()+"/CP/";
            copyDir(cpPath,outDirCP.path()+"/CP4/");
        }
        if(ui->chkBoxQTP->isChecked())
        {
            QString cpPath = path+"QTP\\"+lotId+"\\";
            QDir cpDir(cpPath);
            if(cpDir.exists()==false)
            {
                cpPath += " 目录不存在，请确认!";
                QMessageBox::critical(this, tr("警告"), cpPath);
                return;
            }
            QString outputDir = ui->editOutPutPath->text();
            QDir outDir(outputDir);
            outDir.mkdir(lotId);
            QDir outDirCP(outDir.path()+"/"+lotId);
            outDirCP.mkdir("QTP");
            //qDebug()<<outDirCP.path()+"/CP/";
            copyDir(cpPath,outDirCP.path()+"/QTP/");
        }
        if(ui->chkBoxQTPQ->isChecked())
        {
            QString cpPath = path+"QTPQ\\"+lotId+"\\";
            QDir cpDir(cpPath);
            if(cpDir.exists()==false)
            {
                cpPath += " 目录不存在，请确认!";
                QMessageBox::critical(this, tr("警告"), cpPath);;
                return;
            }
            QString outputDir = ui->editOutPutPath->text();
            QDir outDir(outputDir);
            outDir.mkdir(lotId);
            QDir outDirCP(outDir.path()+"/"+lotId);
            outDirCP.mkdir("QTPQ");
            //qDebug()<<outDirCP.path()+"/CP/";
            copyDir(cpPath,outDirCP.path()+"/QTPQ/");
        }
        //QMessageBox::information(NULL, "复制MAP", "复制完成！");
        QDesktopServices::openUrl(QUrl("file:"+ui->editOutPutPath->text()+'/'+lotId+"/", QUrl::TolerantMode));             //打开

    }
}


void MainWindow::on_rbtnTsKMap_clicked()
{
    on_btnCancelSelect_clicked();
}


void MainWindow::on_rbtnP12Map_clicked()
{
    on_btnCancelSelect_clicked();
}


void MainWindow::on_rbtnP8Map_clicked()
{
    on_btnCancelSelect_clicked();
}

void MainWindow::on_btnExcleDo_clicked()
{
    if(NULL == ui->editLotId->text())
    {
        QMessageBox::critical(this, tr("警告"), tr("批号为空，请输入批号！"));
        return;
    }
    QString lotId =ui->editLotId->text();
    QDir operDir(operPath);
    QStringList iniFiles = operDir.entryList(QStringList() << "*.xlsx"<<"*.xls", QDir::Files);
    int flag=1;
    for(auto& file:iniFiles)
    {
        if(file.contains(lotId))
        {
            if(flag)
            {
                flag=0;
                QString outputDir = ui->editOutPutPath->text();
                QDir outDir(outputDir);
                outDir.mkdir(lotId);
            }
            QFile::copy(operPath + file,ui->editOutPutPath->text()+'/'+lotId+"/"+file);
        }
    }
    if(!flag)
        QDesktopServices::openUrl(QUrl("file:"+ui->editOutPutPath->text()+'/'+ui->editLotId->text()+"/", QUrl::TolerantMode));             //打开
    else
    {
        QMessageBox::critical(this, tr("警告"), "未找到"+ui->editLotId->text()+"批次测报！");;
    }
}

