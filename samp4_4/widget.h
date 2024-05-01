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
    void on_hSliderRed_valueChanged(int value);

    void on_hSliderGreen_valueChanged(int value);

    void on_hSliderBlue_valueChanged(int value);

    void on_hSliderAlpha_valueChanged(int value);

    void on_hSliderH_valueChanged(int value);

    void on_vSlider_valueChanged(int value);

    void on_dial_valueChanged(int value);

    void on_rbtn10_clicked();

    void on_rbtn2_clicked();

    void on_rbtn8_clicked();

    void on_rbtn16_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
