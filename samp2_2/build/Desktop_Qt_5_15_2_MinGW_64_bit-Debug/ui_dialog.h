/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QWDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *chkBoxUnder;
    QCheckBox *chkBoxItalic;
    QCheckBox *chkBoxBold;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *rBtnBlack;
    QRadioButton *rBtnRed;
    QRadioButton *rBtnBlue;
    QPlainTextEdit *txtEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnClose;

    void setupUi(QDialog *QWDialog)
    {
        if (QWDialog->objectName().isEmpty())
            QWDialog->setObjectName(QString::fromUtf8("QWDialog"));
        QWDialog->resize(381, 349);
        verticalLayout_2 = new QVBoxLayout(QWDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(QWDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        chkBoxUnder = new QCheckBox(groupBox);
        chkBoxUnder->setObjectName(QString::fromUtf8("chkBoxUnder"));

        horizontalLayout_2->addWidget(chkBoxUnder);

        chkBoxItalic = new QCheckBox(groupBox);
        chkBoxItalic->setObjectName(QString::fromUtf8("chkBoxItalic"));

        horizontalLayout_2->addWidget(chkBoxItalic);

        chkBoxBold = new QCheckBox(groupBox);
        chkBoxBold->setObjectName(QString::fromUtf8("chkBoxBold"));

        horizontalLayout_2->addWidget(chkBoxBold);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(QWDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        rBtnBlack = new QRadioButton(groupBox_2);
        rBtnBlack->setObjectName(QString::fromUtf8("rBtnBlack"));

        horizontalLayout_3->addWidget(rBtnBlack);

        rBtnRed = new QRadioButton(groupBox_2);
        rBtnRed->setObjectName(QString::fromUtf8("rBtnRed"));

        horizontalLayout_3->addWidget(rBtnRed);

        rBtnBlue = new QRadioButton(groupBox_2);
        rBtnBlue->setObjectName(QString::fromUtf8("rBtnBlue"));

        horizontalLayout_3->addWidget(rBtnBlue);


        verticalLayout->addWidget(groupBox_2);

        txtEdit = new QPlainTextEdit(QWDialog);
        txtEdit->setObjectName(QString::fromUtf8("txtEdit"));
        QFont font;
        font.setPointSize(20);
        txtEdit->setFont(font);

        verticalLayout->addWidget(txtEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOK = new QPushButton(QWDialog);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout->addWidget(btnOK);

        btnCancel = new QPushButton(QWDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnClose = new QPushButton(QWDialog);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        QWidget::setTabOrder(chkBoxUnder, chkBoxItalic);
        QWidget::setTabOrder(chkBoxItalic, chkBoxBold);
        QWidget::setTabOrder(chkBoxBold, rBtnBlack);
        QWidget::setTabOrder(rBtnBlack, rBtnRed);
        QWidget::setTabOrder(rBtnRed, rBtnBlue);
        QWidget::setTabOrder(rBtnBlue, txtEdit);
        QWidget::setTabOrder(txtEdit, btnOK);
        QWidget::setTabOrder(btnOK, btnCancel);
        QWidget::setTabOrder(btnCancel, btnClose);

        retranslateUi(QWDialog);
        QObject::connect(btnOK, SIGNAL(clicked()), QWDialog, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), QWDialog, SLOT(reject()));
        QObject::connect(btnClose, SIGNAL(clicked()), QWDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(QWDialog);
    } // setupUi

    void retranslateUi(QDialog *QWDialog)
    {
        QWDialog->setWindowTitle(QCoreApplication::translate("QWDialog", "Dialog by Designer", nullptr));
        groupBox->setTitle(QString());
        chkBoxUnder->setText(QCoreApplication::translate("QWDialog", "Underline", nullptr));
        chkBoxItalic->setText(QCoreApplication::translate("QWDialog", "Italic", nullptr));
        chkBoxBold->setText(QCoreApplication::translate("QWDialog", "Bold", nullptr));
        groupBox_2->setTitle(QString());
        rBtnBlack->setText(QCoreApplication::translate("QWDialog", "Black", nullptr));
        rBtnRed->setText(QCoreApplication::translate("QWDialog", "Red", nullptr));
        rBtnBlue->setText(QCoreApplication::translate("QWDialog", "Blue", nullptr));
        txtEdit->setPlainText(QCoreApplication::translate("QWDialog", "Hello,world!\n"
"It is my demo.\n"
"", nullptr));
        btnOK->setText(QCoreApplication::translate("QWDialog", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("QWDialog", "\345\217\226\346\266\210", nullptr));
        btnClose->setText(QCoreApplication::translate("QWDialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWDialog: public Ui_QWDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
