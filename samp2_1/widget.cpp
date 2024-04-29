#include "widget.h"
#include "ui_widget.h"

/*
    类后面的是：的含义是初始化列表，初始化列表与顺序无关，只有属性在类中的声明先后有关。
    parent调用QWidget的构造函数(QWidget(parent);)，ui=new Ui::Widget();
*/
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    //初始化列表展开
    //QWidget(parent);
    //ui=new Ui::Widget();或ui=new Ui::Widget;
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
