#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_hSliderRed_valueChanged(int value)
{
    Q_UNUSED(value);
    QPalette plet = ui->textEdit->palette();
    QColor color(ui->hSliderRed->value(),ui->hSliderGreen->value(),ui->hSliderBlue->value(),ui->hSliderAlpha->value());
    //或者
    // QColor color;
    // color.setRgb(ui->hSliderRed->value(),ui->hSliderGreen->value(),ui->hSliderBlue->value(),ui->hSliderAlpha->value());
    plet.setColor(QPalette::Base,color);
    ui->textEdit->setPalette(plet);
}


void Widget::on_hSliderGreen_valueChanged(int value)
{
    on_hSliderRed_valueChanged(value);
}


void Widget::on_hSliderBlue_valueChanged(int value)
{
    on_hSliderRed_valueChanged(value);
}


void Widget::on_hSliderAlpha_valueChanged(int value)
{
    on_hSliderRed_valueChanged(value);
}


void Widget::on_hSliderH_valueChanged(int value)
{
    ui->hScrollBar->setValue(value);
    ui->pBarH->setValue(value);
}


void Widget::on_vSlider_valueChanged(int value)
{
    ui->pBarV->setValue(value);
    ui->vScrollBar->setValue(value);
}


void Widget::on_dial_valueChanged(int value)
{
    ui->lcdNum->display(value);
}


void Widget::on_rbtn10_clicked()
{
    ui->lcdNum->setDigitCount(3);
    ui->lcdNum->setDecMode();
}


void Widget::on_rbtn2_clicked()
{
    ui->lcdNum->setDigitCount(8);
    ui->lcdNum->setBinMode();
}


void Widget::on_rbtn8_clicked()
{
    ui->lcdNum->setDigitCount(4);
    ui->lcdNum->setOctMode();
}


void Widget::on_rbtn16_clicked()
{
    ui->lcdNum->setDigitCount(2);
    ui->lcdNum->setHexMode();
}

