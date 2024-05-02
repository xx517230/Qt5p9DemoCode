#include "qwdlgmanual.h"
#include <QPushButton>
#include <QCheckBox>
#include <QRadioButton>
#include <QPlainTextEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include <QPushButton>
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
    //1.创建Underline/Italic/Bold三个checkBox，之后并水平布局
    chkBoxUnder = new QCheckBox(tr("UnderLine"));
    chkBoxItalic = new QCheckBox(tr("Italic"));
    chkBoxBold = new QCheckBox(tr("Bold"));
    QHBoxLayout * hLay1 = new QHBoxLayout;
    hLay1->addWidget(chkBoxUnder);
    hLay1->addWidget(chkBoxItalic);
    hLay1->addWidget(chkBoxBold);
    //2.创建Black/Red/Blue三个RadioButton，Black RadioButton默认选中，之后并水平布局
    rBtnBlack = new QRadioButton(tr("Black"));
    rBtnBlack->setChecked(true);
    rBtnRed = new QRadioButton(tr("Red"));
    rBtnBlue= new QRadioButton(tr("Blue"));
    QHBoxLayout * hLay2 = new QHBoxLayout;
    hLay2->addWidget(rBtnBlack);
    hLay2->addWidget(rBtnRed);
    hLay2->addWidget(rBtnBlue);
    //3.创建PlainTextEdit(文本框)
    txtEdit = new QPlainTextEdit;
    txtEdit->setPlainText("Hello World!\nIt is Manual UI Code!");

    QFont font=txtEdit->font(); //获取字体
    font.setPointSize(15);//修改字体大小为15
    txtEdit->setFont(font);//设置字体

    //4.创建确定、取消、退出三个PushButton,并水平布局
    btnOK = new QPushButton(tr("确定"));
    btnCancel = new QPushButton(tr("取消"));
    btnClose = new QPushButton(tr("退出"));
    QHBoxLayout *hLay3 = new QHBoxLayout;
    hLay3->addStretch();//
    hLay3->addWidget(btnOK);
    hLay3->addStretch();//
    hLay3->addWidget(btnCancel);
    hLay3->addStretch();//
    hLay3->addWidget(btnClose);
    hLay3->addStretch();//

    //5.设置整个窗体布局为垂直布局,不用setLayout()的话，窗口出不来
    QVBoxLayout *VLay=new QVBoxLayout;
    VLay->addLayout(hLay1); //添加字体类型组
    VLay->addLayout(hLay2);//添加字体颜色组
    VLay->addWidget(txtEdit);//添加PlainTextEdit
    VLay->addLayout(hLay3);//添加按键组

    setLayout(VLay); //设置为窗体的主布局
}

void QWDlgManual::initSignalSlots()
{
    //1.三个字体设置的CheckBox的Clicked(bool)事件与setTextFontColor()槽函数关联
    connect(chkBoxUnder,SIGNAL( clicked(bool) ), this,SLOT(on_chkBoxUnder(bool)));
    connect(chkBoxItalic,SIGNAL( clicked(bool) ), this,SLOT(on_chkBoxItalic(bool)));
    connect(chkBoxBold,SIGNAL( clicked(bool) ), this,SLOT(on_chkBoxBold(bool)));
    //2.三个颜色色设置的RadioButton的Clicked()事件与相应的槽函数关联
    connect(rBtnBlack,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(rBtnRed,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(rBtnBlue,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    //3.三个窗体操作的PushButton的Clicked()事件与相应的槽函数关联
    connect(btnOK,SIGNAL(clicked()),this,SLOT(accept()));
    connect(btnOK,SIGNAL(clicked()),this,SLOT(reject()));
    connect(btnOK,SIGNAL(clicked()),this,SLOT(close()));
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
