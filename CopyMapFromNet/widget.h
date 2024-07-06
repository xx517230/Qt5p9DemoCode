#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnAllSelect_clicked();

    void on_btnCancelSelect_clicked();

    void on_btnInvertSelect_clicked();

    void on_btnXHCP_clicked();

    void on_btnXHQTP_clicked();

    void on_btnZCQTP_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
