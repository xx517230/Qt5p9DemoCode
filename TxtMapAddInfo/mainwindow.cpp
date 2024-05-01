#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStandardPaths>
#include <QFileDialog>
#include <QString>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString desktopPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    QString tmpStr = desktopPath+"/Map";
    ui->lineSrcMapDir->setText(tmpStr);
    tmpStr = desktopPath+"/Out";
    ui->lineOutputDir->setText(tmpStr);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_rbtnZC_clicked(bool checked)
{
    if(checked)
        this->setWindowTitle("XH TxtMap Add Info");
}


void MainWindow::on_rbtnXH_clicked(bool checked)
{
    if(checked)
        this->setWindowTitle("ZC TxtMap Add Info");
}


void MainWindow::on_tbtnSelectDir_clicked()
{
    QString srcDir=QFileDialog::getExistingDirectory(this,"选择TxtMap目录",QStandardPaths::writableLocation(QStandardPaths::DesktopLocation));
    if(!srcDir.isEmpty())
    {
        ui->lineSrcMapDir->setText(srcDir);
        ui->lineOutputDir->setText(srcDir+"/Out");
    }
}

