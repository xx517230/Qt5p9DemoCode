/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QToolButton *tbtnFileSwitch;
    QSpacerItem *horizontalSpacer;
    QToolButton *tbtnOutput;
    QListView *listView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnClear;
    QPushButton *btnOutputFile;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1032, 558);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 10, 1011, 541));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tbtnFileSwitch = new QToolButton(groupBox);
        tbtnFileSwitch->setObjectName(QString::fromUtf8("tbtnFileSwitch"));

        gridLayout->addWidget(tbtnFileSwitch, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(204, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        tbtnOutput = new QToolButton(groupBox);
        tbtnOutput->setObjectName(QString::fromUtf8("tbtnOutput"));

        gridLayout->addWidget(tbtnOutput, 0, 2, 1, 1);

        listView = new QListView(groupBox);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout->addWidget(listView, 1, 0, 1, 3);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(185, 22, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        btnClear = new QPushButton(groupBox_2);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        gridLayout_2->addWidget(btnClear, 0, 2, 1, 1);

        btnOutputFile = new QPushButton(groupBox_2);
        btnOutputFile->setObjectName(QString::fromUtf8("btnOutputFile"));

        gridLayout_2->addWidget(btnOutputFile, 0, 3, 1, 1);

        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(350, 0));

        gridLayout_2->addWidget(plainTextEdit, 1, 0, 1, 4);

        splitter->addWidget(groupBox_2);
        btnClear->raise();
        plainTextEdit->raise();
        label->raise();
        btnOutputFile->raise();
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        tbtnFileSwitch->setText(QCoreApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        tbtnOutput->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\207\272\347\273\223\346\236\234", nullptr));
        groupBox_2->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\347\273\223\346\236\234\346\230\276\347\244\272:", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        btnOutputFile->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
