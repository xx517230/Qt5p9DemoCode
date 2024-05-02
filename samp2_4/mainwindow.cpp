#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::initUI()
{
    labCurFile = new QLabel;
    labCurFile->setMaximumWidth(150);
    labCurFile->setText("当前文件:");
    ui->statusbar->addWidget(labCurFile);

    pbar = new QProgressBar;
    pbar->setMaximum(200);
    pbar->setMinimum(5);
    pbar->setMaximum(50);
    pbar->setValue(ui->textEdit->font().pointSize());
    ui->statusbar->addWidget(pbar);

}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}
