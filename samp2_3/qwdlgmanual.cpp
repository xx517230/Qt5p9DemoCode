#include "qwdlgmanual.h"

QWDlgManual::QWDlgManual(QWidget *parent)
    : QDialog(parent)
{
    initUI();
    initSignalSlots();
    setWindowTitle("Form created manually");
}

QWDlgManual::~QWDlgManual() {}


void QWDlgManual::initUI()
{

}

void QWDlgManual::on_chkBoxUnder(bool checked)
{
    QFont font = txtEdit->font();
    font.setUnderline(checked);
    txtEdit->setFont(font);
}

void QWDlgManual::on_chkBoxItalic(bool checked)
{
    QFont font = txtEdit->font();
    font.setItalic(checked);
    txtEdit->setFont(font);
}

void QWDlgManual::on_chkBoxBold(bool checked)
{
    QFont font = txtEdit->font();
    font.setBold(checked);
    txtEdit->setFont(font);
}

void QWDlgManual::setTextFontColor()
{
    QPalette plet = txtEdit->palette();
    if(rBtnBlack->isChecked())
        plet.setColor(QPalette::Text,Qt::black);
    else if(rBtnRed->isChecked())
        plet.setColor(QPalette::Text,Qt::red);
    else if(rBtnBlue->isChecked())
        plet.setColor(QPalette::Text,Qt::blue);
    else
        plet.setColor(QPalette::Text,Qt::black);
    txtEdit->setPalette(plet);
}
