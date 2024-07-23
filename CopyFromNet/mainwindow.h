#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_btnAllSelect_clicked();

    void on_btnCancelSelect_clicked();

    void on_btnInvertSelect_clicked();

    void on_btnXHCP_clicked();

    void on_btnXHQTP_clicked();

    void on_btnZCQTP_clicked();
    void on_btnMapDo_clicked();

    void on_rbtnTsKMap_clicked();

    void on_rbtnP12Map_clicked();

    void on_rbtnP8Map_clicked();

    void on_btnExcleDo_clicked();

    void on_btnLogDo_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
