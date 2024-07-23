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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actListIni;
    QAction *actListClear;
    QAction *actListInsert;
    QAction *actListAppend;
    QAction *actListDelete;
    QAction *actSelALL;
    QAction *actSelNone;
    QAction *actSelInvs;
    QAction *actQuit;
    QAction *actSelPopMenu;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page_QListWidget;
    QGridLayout *gridLayout_2;
    QToolButton *tBtnListIni;
    QToolButton *tBtnListClear;
    QToolButton *tBtnListInsert;
    QToolButton *tBtnListApped;
    QToolButton *tBtnListDelete;
    QWidget *page_QTreeWidget;
    QWidget *page_QTabWidget;
    QTabWidget *tabWidget;
    QWidget *tabListWidget;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QToolButton *tBtnItemSelect;
    QToolButton *tBtnAllSelect;
    QToolButton *tBtnAllClear;
    QToolButton *tBtnInvertSelect;
    QListWidget *listWidget;
    QWidget *tabTreeWidget;
    QWidget *tabTabWidget;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(719, 564);
        actListIni = new QAction(MainWindow);
        actListIni->setObjectName(QString::fromUtf8("actListIni"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/128.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListIni->setIcon(icon);
        actListClear = new QAction(MainWindow);
        actListClear->setObjectName(QString::fromUtf8("actListClear"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/delete1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListClear->setIcon(icon1);
        actListInsert = new QAction(MainWindow);
        actListInsert->setObjectName(QString::fromUtf8("actListInsert"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/icons/424.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListInsert->setIcon(icon2);
        actListAppend = new QAction(MainWindow);
        actListAppend->setObjectName(QString::fromUtf8("actListAppend"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/icons/316.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListAppend->setIcon(icon3);
        actListDelete = new QAction(MainWindow);
        actListDelete->setObjectName(QString::fromUtf8("actListDelete"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/icons/324.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actListDelete->setIcon(icon4);
        actSelALL = new QAction(MainWindow);
        actSelALL->setObjectName(QString::fromUtf8("actSelALL"));
        actSelNone = new QAction(MainWindow);
        actSelNone->setObjectName(QString::fromUtf8("actSelNone"));
        actSelNone->setMenuRole(QAction::AboutRole);
        actSelInvs = new QAction(MainWindow);
        actSelInvs->setObjectName(QString::fromUtf8("actSelInvs"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/icons/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon5);
        actSelPopMenu = new QAction(MainWindow);
        actSelPopMenu->setObjectName(QString::fromUtf8("actSelPopMenu"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/icons/124.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSelPopMenu->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMinimumSize(QSize(120, 0));
        toolBox->setMaximumSize(QSize(150, 16777215));
        page_QListWidget = new QWidget();
        page_QListWidget->setObjectName(QString::fromUtf8("page_QListWidget"));
        page_QListWidget->setGeometry(QRect(0, 0, 150, 401));
        gridLayout_2 = new QGridLayout(page_QListWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tBtnListIni = new QToolButton(page_QListWidget);
        tBtnListIni->setObjectName(QString::fromUtf8("tBtnListIni"));

        gridLayout_2->addWidget(tBtnListIni, 0, 0, 1, 1);

        tBtnListClear = new QToolButton(page_QListWidget);
        tBtnListClear->setObjectName(QString::fromUtf8("tBtnListClear"));

        gridLayout_2->addWidget(tBtnListClear, 1, 0, 1, 1);

        tBtnListInsert = new QToolButton(page_QListWidget);
        tBtnListInsert->setObjectName(QString::fromUtf8("tBtnListInsert"));

        gridLayout_2->addWidget(tBtnListInsert, 2, 0, 1, 1);

        tBtnListApped = new QToolButton(page_QListWidget);
        tBtnListApped->setObjectName(QString::fromUtf8("tBtnListApped"));

        gridLayout_2->addWidget(tBtnListApped, 3, 0, 1, 1);

        tBtnListDelete = new QToolButton(page_QListWidget);
        tBtnListDelete->setObjectName(QString::fromUtf8("tBtnListDelete"));

        gridLayout_2->addWidget(tBtnListDelete, 4, 0, 1, 1);

        toolBox->addItem(page_QListWidget, QString::fromUtf8("QListWidget \346\223\215\344\275\234"));
        page_QTreeWidget = new QWidget();
        page_QTreeWidget->setObjectName(QString::fromUtf8("page_QTreeWidget"));
        page_QTreeWidget->setGeometry(QRect(0, 0, 150, 323));
        toolBox->addItem(page_QTreeWidget, QString::fromUtf8("QTreeWidget \346\223\215\344\275\234"));
        page_QTabWidget = new QWidget();
        page_QTabWidget->setObjectName(QString::fromUtf8("page_QTabWidget"));
        page_QTabWidget->setGeometry(QRect(0, 0, 150, 323));
        toolBox->addItem(page_QTabWidget, QString::fromUtf8("QTabWidget \346\223\215\344\275\234"));
        splitter->addWidget(toolBox);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabListWidget = new QWidget();
        tabListWidget->setObjectName(QString::fromUtf8("tabListWidget"));
        gridLayout_5 = new QGridLayout(tabListWidget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox = new QGroupBox(tabListWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 0, 1, 1, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_3->addWidget(checkBox, 0, 2, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(tabListWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tBtnItemSelect = new QToolButton(groupBox_2);
        tBtnItemSelect->setObjectName(QString::fromUtf8("tBtnItemSelect"));

        gridLayout_4->addWidget(tBtnItemSelect, 0, 0, 1, 1);

        tBtnAllSelect = new QToolButton(groupBox_2);
        tBtnAllSelect->setObjectName(QString::fromUtf8("tBtnAllSelect"));

        gridLayout_4->addWidget(tBtnAllSelect, 0, 1, 1, 1);

        tBtnAllClear = new QToolButton(groupBox_2);
        tBtnAllClear->setObjectName(QString::fromUtf8("tBtnAllClear"));

        gridLayout_4->addWidget(tBtnAllClear, 0, 2, 1, 1);

        tBtnInvertSelect = new QToolButton(groupBox_2);
        tBtnInvertSelect->setObjectName(QString::fromUtf8("tBtnInvertSelect"));

        gridLayout_4->addWidget(tBtnInvertSelect, 0, 3, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 1, 0, 1, 1);

        listWidget = new QListWidget(tabListWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_5->addWidget(listWidget, 2, 0, 1, 1);

        tabWidget->addTab(tabListWidget, QString());
        tabTreeWidget = new QWidget();
        tabTreeWidget->setObjectName(QString::fromUtf8("tabTreeWidget"));
        tabWidget->addTab(tabTreeWidget, QString());
        tabTabWidget = new QWidget();
        tabTabWidget->setObjectName(QString::fromUtf8("tabTabWidget"));
        tabWidget->addTab(tabTabWidget, QString());
        splitter->addWidget(tabWidget);

        gridLayout->addWidget(splitter, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actListIni);
        toolBar->addAction(actListClear);
        toolBar->addAction(actListInsert);
        toolBar->addAction(actListAppend);
        toolBar->addAction(actListDelete);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actListIni->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(tooltip)
        actListIni->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actListIni->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actListClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(tooltip)
        actListClear->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
        actListInsert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        actListInsert->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actListInsert->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actListAppend->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        actListAppend->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actListAppend->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actListDelete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        actListDelete->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actListDelete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actSelALL->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        actSelALL->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
        actSelNone->setText(QCoreApplication::translate("MainWindow", "\345\205\250\344\270\215\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        actSelNone->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\250\344\270\215\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
        actSelInvs->setText(QCoreApplication::translate("MainWindow", "\345\217\215\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        actSelInvs->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\215\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actSelPopMenu->setText(QCoreApplication::translate("MainWindow", "\351\241\271\351\200\211\346\213\251", nullptr));
#if QT_CONFIG(tooltip)
        actSelPopMenu->setToolTip(QCoreApplication::translate("MainWindow", "\351\241\271\351\200\211\346\213\251", nullptr));
#endif // QT_CONFIG(tooltip)
        tBtnListIni->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tBtnListClear->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tBtnListInsert->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tBtnListApped->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tBtnListDelete->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_QListWidget), QCoreApplication::translate("MainWindow", "QListWidget \346\223\215\344\275\234", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_QTreeWidget), QCoreApplication::translate("MainWindow", "QTreeWidget \346\223\215\344\275\234", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_QTabWidget), QCoreApplication::translate("MainWindow", "QTabWidget \346\223\215\344\275\234", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\351\241\271\345\217\230\345\214\226", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\217\257\347\274\226\350\276\221", nullptr));
        groupBox_2->setTitle(QString());
        tBtnItemSelect->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tBtnAllSelect->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tBtnAllClear->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tBtnInvertSelect->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabListWidget), QCoreApplication::translate("MainWindow", "QListWidget", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTreeWidget), QCoreApplication::translate("MainWindow", "QTreeWidget", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTabWidget), QCoreApplication::translate("MainWindow", "QTabWidget", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
