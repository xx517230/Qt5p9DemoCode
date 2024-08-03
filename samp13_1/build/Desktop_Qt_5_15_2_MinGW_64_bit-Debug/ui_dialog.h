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
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnStart;
    QPushButton *btnBegin;
    QPushButton *btnEnd;
    QPushButton *btnFinish;
    QPushButton *btnClear;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *plainTextEdit;
    QLabel *labPic;
    QLabel *labStatus;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(521, 382);
        gridLayout_2 = new QGridLayout(Dialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnStart = new QPushButton(groupBox);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));

        horizontalLayout->addWidget(btnStart);

        btnBegin = new QPushButton(groupBox);
        btnBegin->setObjectName(QString::fromUtf8("btnBegin"));

        horizontalLayout->addWidget(btnBegin);

        btnEnd = new QPushButton(groupBox);
        btnEnd->setObjectName(QString::fromUtf8("btnEnd"));

        horizontalLayout->addWidget(btnEnd);

        btnFinish = new QPushButton(groupBox);
        btnFinish->setObjectName(QString::fromUtf8("btnFinish"));

        horizontalLayout->addWidget(btnFinish);

        btnClear = new QPushButton(groupBox);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        horizontalLayout->addWidget(btnClear);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        horizontalLayout_2->addWidget(plainTextEdit);

        labPic = new QLabel(groupBox);
        labPic->setObjectName(QString::fromUtf8("labPic"));
        labPic->setMinimumSize(QSize(150, 0));
        labPic->setPixmap(QPixmap(QString::fromUtf8(":/dice/images/d0.jpg")));
        labPic->setScaledContents(false);
        labPic->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(labPic);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        labStatus = new QLabel(groupBox);
        labStatus->setObjectName(QString::fromUtf8("labStatus"));

        gridLayout->addWidget(labStatus, 2, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "\347\272\277\347\250\213", nullptr));
        btnStart->setText(QCoreApplication::translate("Dialog", "\345\220\257\345\212\250\347\272\277\347\250\213", nullptr));
        btnBegin->setText(QCoreApplication::translate("Dialog", "\345\274\200\345\247\213", nullptr));
        btnEnd->setText(QCoreApplication::translate("Dialog", "\347\273\223\346\235\237", nullptr));
        btnFinish->setText(QCoreApplication::translate("Dialog", "\347\273\223\346\235\237\347\272\277\347\250\213", nullptr));
        btnClear->setText(QCoreApplication::translate("Dialog", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        labPic->setText(QString());
        labStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
