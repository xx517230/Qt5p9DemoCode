#include "widget.h"
#include "ui_widget.h"
#include <QList>

QList<QCheckBox*> chkBoxList;
QList<QRadioButton*> rbtnList;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
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

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnAllSelect_clicked()
{
    for(int i = 0; i < chkBoxList.size();i++)
    {
        chkBoxList.at(i)->setChecked(true);
    }
}


void Widget::on_btnCancelSelect_clicked()
{
    for(int i = 0; i < chkBoxList.size();i++)
    {
        chkBoxList.at(i)->setChecked(false);
    }
}


void Widget::on_btnInvertSelect_clicked()
{
    for(int i = 0; i < chkBoxList.size();i++)
    {
        if(chkBoxList.at(i)->isChecked())
            chkBoxList.at(i)->setChecked(false);
        else
            chkBoxList.at(i)->setChecked(true);
    }
}

void Widget::on_btnXHCP_clicked()
{
    on_btnCancelSelect_clicked();
    ui->chkBoxCP1->setChecked(true);
    ui->chkBoxCP2->setChecked(true);
    ui->chkBoxCP3->setChecked(true);
    ui->chkBoxCP4->setChecked(true);
}


void Widget::on_btnXHQTP_clicked()
{
    on_btnCancelSelect_clicked();
    ui->chkBoxCP1->setChecked(true);
    ui->chkBoxCP2->setChecked(true);
    ui->chkBoxCP3->setChecked(true);
    ui->chkBoxQTP->setChecked(true);
}


void Widget::on_btnZCQTP_clicked()
{
    on_btnCancelSelect_clicked();
    ui->chkBoxQTP->setChecked(true);
    ui->chkBoxQTPQ->setChecked(true);
}

