#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//定义及创建应用程序a（窗口软件的底层）
    Widget w;//定义并创建软件窗口(在内存中，并没显示在桌面)
    w.show();//将初始化的w窗口显示
    return a.exec();//创建的应用程序a运行，等待消息循环和事件处理
}
