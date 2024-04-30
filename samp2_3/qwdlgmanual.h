#ifndef QWDLGMANUAL_H
#define QWDLGMANUAL_H

#include <QDialog>
#include <QPlainTextEdit>
#include <QPushButton>
#include <QRadioButton>
#include <QCheckBox>


class QWDlgManual : public QDialog
{
    Q_OBJECT
private:
    QCheckBox * chkBoxUnder;
    QCheckBox * chkBoxItalic;
    QCheckBox * chkBoxBold;
    QRadioButton * rBtnBlack;
    QRadioButton * rBtnRed;
    QRadioButton * rBtnBlue;
    QPlainTextEdit * txtEdit;
    QPushButton * btnOK;
    QPushButton * btnCancel;
    QPushButton * btnClose;

    void initUI();//UI创建
    void initSignalSlots();//初始化信号与槽的链接
private slots:
    void on_chkBoxUnder(bool checked);
    void on_chkBoxItalic(bool checked);
    void on_chkBoxBold(bool checked);
    void setTextFontColor();//设置字体颜色
public:
    QWDlgManual(QWidget *parent = nullptr);
    ~QWDlgManual();
};
#endif // QWDLGMANUAL_H
