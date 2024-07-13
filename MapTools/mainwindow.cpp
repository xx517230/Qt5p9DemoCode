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

QString chroma3360pLogPath  = R"(\\172.16.14.254\3360Pdata\DATALOG\)";
QString chroma3380dLogPath  = R"(\\172.16.14.254\3380Ddata\DATALOG\)";


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

void copyFile(QString path,QString lotId,QString outPutPath)
{
    path.append(lotId).append("\\");
    QDir dir(path);
    if(dir.exists())
    {
        QDir outDir(outPutPath);
        outDir.mkdir(lotId);
        QDir outDirLotid(outDir.path()+"/"+lotId+"/");
        outDirLotid.mkdir("MAP");
        copyDir(path,outDirLotid.path()+"/"+"MAP"+"/");
        QDesktopServices::openUrl(QUrl("file:"+outPutPath+'/'+lotId+"/", QUrl::TolerantMode));             //打开
    }
    else
    {
        path += " 目录不存在，请确认!";
        QMessageBox::critical(nullptr, "警告", path);
        return;
    }
}
void copyFile(QString path,QString lotId,QString outPutPath,QString cpFlow,QString type)
{
    QString srcPath = path+cpFlow+"\\"+lotId+"\\";
    QDir srcDir(srcPath);
    if(srcDir.exists()==false)
    {
        srcPath += " 目录不存在，请确认!";
        QMessageBox::critical(nullptr, "警告", srcPath);;
        return;
    }
    QDir outDir(outPutPath);
    outDir.mkdir(lotId);
    QDir outDirCP(outDir.path()+"/"+lotId+"/");
    if(!QString::compare("map", type, Qt::CaseInsensitive))
    {
        qDebug()<<outDirCP.path();
        outDirCP.mkdir(type);
        QDir outDirType(outDirCP.path()+"/"+type+"/");
        outDirType.mkdir(cpFlow);
        copyDir(srcPath,outDirCP.path()+"/"+type+"/"+cpFlow+"/");
    }
}
void copyFile(QString path,QString lotId,QString outPutPath,QString cpFlow,QString type,QString logTyep)
{
    QString srcPath = path+cpFlow+"\\"+lotId+"\\";
    QDir srcDir(srcPath);
    if(srcDir.exists()==false)
    {
        srcPath += " 目录不存在，请确认!";
        QMessageBox::critical(nullptr, "警告", srcPath);;
        return;
    }
    QDir outputDir(outPutPath);
    outputDir.mkdir(lotId);
    QDir outputDirLotId(outputDir.path()+"/"+lotId+"/");
    if(!QString::compare("datalog", type, Qt::CaseInsensitive))
    {
        outputDirLotId.mkdir(type);
        QDir outputDirLotIdType(outputDirLotId.path()+"/"+type+"/");
        outputDirLotIdType.mkdir(cpFlow);
        qDebug()<<outputDirLotIdType.path();
    }
    QStringList fileList = srcDir.entryList(QStringList() << "*."+logTyep, QDir::Files);
    for(auto& file:fileList)
    {
        QFile::copy(srcPath + file,outPutPath+'/'+lotId+"/"+type+'/'+cpFlow+'/'+file);
    }
}


void MainWindow::on_btnMapDo_clicked()
{
    if(NULL == ui->editLotId->text())
    {
        QMessageBox::critical(this, tr("警告"), tr("批号为空，请输入批号！"));
        return;
    }
    QString lotId = ui->editLotId->text();
    QString outputPath = ui->editOutPutPath->text();
    QString path;

    if(false==lotId.endsWith("-"))
        lotId.append("-");

    if(ui->rbtnTsKMap->isChecked())
    {
        copyFile(tskMapPath,lotId,outputPath);
    }
    else if(ui->rbtnP12Map->isChecked())
    {
        copyFile(p12MapPath,lotId,outputPath);
    }
    else if(ui->rbtnP8Map->isChecked())
    {
        copyFile(p8MapPath,lotId,outputPath);
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
        if( ui->chkBoxCP->isChecked()      == false     &&
            ui->chkBoxCP1->isChecked()     == false     &&
            ui->chkBoxCP2->isChecked()     == false     &&
            ui->chkBoxCP3->isChecked()     == false     &&
            ui->chkBoxCP4->isChecked()     == false     &&
            ui->chkBoxQTP->isChecked()     == false     &&
            ui->chkBoxQTP_CP2->isChecked() == false     &&
            ui->chkBoxQTPQ->isChecked()==false )
        {
            QMessageBox::critical(this, tr("警告"), tr("在MAP保存路径至少需要选择一个流程！！！"));
            return;
        }

        if(ui->chkBoxCP->isChecked())
        {
            copyFile(path,lotId,outputPath,"CP","MAP");
        }
        if(ui->chkBoxCP1->isChecked())
        {
            copyFile(path,lotId,outputPath,"CP1","MAP");
        }
        if(ui->chkBoxCP2->isChecked())
        {
            copyFile(path,lotId,outputPath,"CP2","MAP");
        }
        if(ui->chkBoxCP3->isChecked())
        {
            copyFile(path,lotId,outputPath,"CP3","MAP");
        }
        if(ui->chkBoxCP4->isChecked())
        {
            copyFile(path,lotId,outputPath,"CP4","MAP");
        }
        if(ui->chkBoxQTP->isChecked())
        {
            copyFile(path,lotId,outputPath,"QTP","MAP");
        }
        if(ui->chkBoxQTPQ->isChecked())
        {
            copyFile(path,lotId,outputPath,"QTPQ","MAP");
        }
        if(ui->chkBoxQTP_CP2->isChecked())
        {
            copyFile(path,lotId,outputPath,"QTP-CP2","MAP");
        }
        QDesktopServices::openUrl(QUrl("file:"+outputPath+'/'+lotId+"/", QUrl::TolerantMode));             //打开
    }
}


void MainWindow::on_rbtnTsKMap_clicked()
{
    //on_btnCancelSelect_clicked();
}


void MainWindow::on_rbtnP12Map_clicked()
{
    //on_btnCancelSelect_clicked();
}


void MainWindow::on_rbtnP8Map_clicked()
{
    //on_btnCancelSelect_clicked();
}

void MainWindow::on_btnExcleDo_clicked()
{
    if(NULL == ui->editLotId->text())
    {
        QMessageBox::critical(this, tr("警告"), tr("批号为空，请输入批号！"));
        return;
    }
    QString lotId =ui->editLotId->text();
    QString lotIdSuffix;
    QString outputPath= ui->editOutPutPath->text();
    if(false==lotId.endsWith("-"))
    {
        lotIdSuffix=lotId+"-";
    }
    else
    {
        lotIdSuffix=lotId;
    }
    QDir operDir(operPath);
    QStringList filesList = operDir.entryList(QStringList() << "*.xlsx"<<"*.xls", QDir::Files);
    int flag=1;
    for(auto& file:filesList)
    {
        if(file.contains(lotId))
        {
            if(flag)
            {
                flag=0;

                QDir outputDir(outputPath);
                outputDir.mkdir(lotIdSuffix);
            }
            QFile::copy(operPath + file,outputPath+'/'+lotIdSuffix+'/'+file);
        }
    }
    if(!flag)
        QDesktopServices::openUrl(QUrl("file:"+outputPath+'/'+lotIdSuffix+'/', QUrl::TolerantMode));
    else
    {
        QMessageBox::critical(this, tr("警告"), "未找到"+lotId+"批次测报！");;
    }

}


void MainWindow::on_btnLogDo_clicked()
{
    if(NULL == ui->editLotId->text())
    {
        QMessageBox::critical(this, tr("警告"), tr("批号为空，请输入批号！"));
        return;
    }

    QString lotId = ui->editLotId->text();
    QString outputPath = ui->editOutPutPath->text();
    QString path;
    if(false==lotId.endsWith("-"))
        lotId.append("-");
    if(ui->rbtn3360pLog->isChecked())
    {
        path=chroma3360pLogPath;
    }
    else if(ui->rbtn3380dLog->isChecked())
    {
        path=chroma3380dLogPath;
    }
    if( ui->chkBoxCP->isChecked()      == false     &&
        ui->chkBoxCP1->isChecked()     == false     &&
        ui->chkBoxCP2->isChecked()     == false     &&
        ui->chkBoxCP3->isChecked()     == false     &&
        ui->chkBoxCP4->isChecked()     == false     &&
        ui->chkBoxQTP->isChecked()     == false     &&
        ui->chkBoxQTP_CP2->isChecked() == false     &&
        ui->chkBoxQTPQ->isChecked()==false )
    {
        QMessageBox::critical(this, tr("警告"), tr("在LOG保存路径至少需要选择一个流程！！！"));
        return;
    }
    if(ui->chkBoxCP->isChecked())
    {
        if(ui->chkBoxCSV->isChecked())
        {
            copyFile(path,lotId,outputPath,"CP","DATALOG","csv");
        }
    }
    if(ui->chkBoxCP1->isChecked())
    {
        if(ui->chkBoxCSV->isChecked())
        {
            copyFile(path,lotId,outputPath,"CP1","DATALOG","csv");
        }
    }
    if(ui->chkBoxCP2->isChecked())
    {
        if(ui->chkBoxCSV->isChecked())
        {
            copyFile(path,lotId,outputPath,"CP2","DATALOG","csv");
        }
    }
    if(ui->chkBoxCP3->isChecked())
    {
        if(ui->chkBoxCSV->isChecked())
        {
            copyFile(path,lotId,outputPath,"CP3","DATALOG","csv");
        }
    }
    if(ui->chkBoxCP4->isChecked())
    {
        if(ui->chkBoxCSV->isChecked())
        {
            copyFile(path,lotId,outputPath,"CP4","DATALOG","csv");
        }
    }
    if(ui->chkBoxQTP->isChecked())
    {
        if(ui->chkBoxCSV->isChecked())
        {
            copyFile(path,lotId,outputPath,"QTP","DATALOG","csv");
        }
    }
    if(ui->chkBoxQTPQ->isChecked())
    {
        if(ui->chkBoxCSV->isChecked())
        {
            copyFile(path,lotId,outputPath,"QTPQ","DATALOG","csv");
        }
    }
    if(ui->chkBoxQTP_CP2->isChecked())
    {
        if(ui->chkBoxCSV->isChecked())
        {
            copyFile(path,lotId,outputPath,"QTP_CP2","DATALOG","csv");
        }
    }
    QDesktopServices::openUrl(QUrl("file:"+outputPath+'/'+lotId+"/DATALOG/", QUrl::TolerantMode));             //打开

}


