#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

/*
定义了命名空间Ui,里面包含了个Widget类,使用类方式是 Ui::Widget
此处的作用是外部类的声明，因为后面的Widget类(非Ui命名空间的Widget类)用到该类作为属性。
*/
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

/*
    声明了个Widget类，此Widget类与Ui命令空间中的Widget类不是同一个东西只是名字相同。
    Widget类中属性Ui::widget * ui(这个是)
*/
class Widget : public QWidget//Widget类是继承QWidge类
{
    Q_OBJECT//Q_OBJECT是宏，Qt扩展内容，展开就是Qt对C++的扩展代码

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;//声明了一个Ui::Widget对象
};
#endif // WIDGET_H
