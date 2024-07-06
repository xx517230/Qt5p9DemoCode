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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPath;
    QAction *actionExcelPath;
    QWidget *centralwidget;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *editLotId;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbtnMapSave;
    QRadioButton *rbtnTsKMap;
    QRadioButton *rbtnP12Map;
    QRadioButton *rbtnP8Map;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QCheckBox *chkBoxCP;
    QCheckBox *chkBoxCP1;
    QCheckBox *chkBoxQTP;
    QCheckBox *chkBoxCP2;
    QCheckBox *chkBoxQTPQ;
    QCheckBox *chkBoxCP3;
    QCheckBox *chkBoxCP4;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAllSelect;
    QPushButton *btnInvertSelect;
    QPushButton *btnCancelSelect;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QPushButton *btnXHQTP;
    QPushButton *btnZCQTP;
    QPushButton *btnXHCP;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_7;
    QLineEdit *editOutPutPath;
    QPushButton *pbtnSelectPath;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_3;
    QCheckBox *chkOperPath;
    QCheckBox *chkOperCheckedPath;
    QCheckBox *chkOperUncheckedPath;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnMapDo;
    QPushButton *btnExcleDo;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(741, 421);
        actionPath = new QAction(MainWindow);
        actionPath->setObjectName(QString::fromUtf8("actionPath"));
        actionExcelPath = new QAction(MainWindow);
        actionExcelPath->setObjectName(QString::fromUtf8("actionExcelPath"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_8 = new QGridLayout(centralwidget);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groupBox_10 = new QGroupBox(centralwidget);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        verticalLayout_2 = new QVBoxLayout(groupBox_10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(groupBox_10);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        editLotId = new QLineEdit(groupBox);
        editLotId->setObjectName(QString::fromUtf8("editLotId"));

        gridLayout_2->addWidget(editLotId, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_6 = new QGroupBox(groupBox_10);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rbtnMapSave = new QRadioButton(groupBox_6);
        rbtnMapSave->setObjectName(QString::fromUtf8("rbtnMapSave"));
        rbtnMapSave->setChecked(true);

        horizontalLayout_2->addWidget(rbtnMapSave);

        rbtnTsKMap = new QRadioButton(groupBox_6);
        rbtnTsKMap->setObjectName(QString::fromUtf8("rbtnTsKMap"));

        horizontalLayout_2->addWidget(rbtnTsKMap);

        rbtnP12Map = new QRadioButton(groupBox_6);
        rbtnP12Map->setObjectName(QString::fromUtf8("rbtnP12Map"));

        horizontalLayout_2->addWidget(rbtnP12Map);

        rbtnP8Map = new QRadioButton(groupBox_6);
        rbtnP8Map->setObjectName(QString::fromUtf8("rbtnP8Map"));

        horizontalLayout_2->addWidget(rbtnP8Map);


        verticalLayout_2->addWidget(groupBox_6);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        groupBox_4 = new QGroupBox(groupBox_10);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(groupBox_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        chkBoxCP = new QCheckBox(groupBox_2);
        chkBoxCP->setObjectName(QString::fromUtf8("chkBoxCP"));

        gridLayout_4->addWidget(chkBoxCP, 0, 0, 1, 1);

        chkBoxCP1 = new QCheckBox(groupBox_2);
        chkBoxCP1->setObjectName(QString::fromUtf8("chkBoxCP1"));

        gridLayout_4->addWidget(chkBoxCP1, 0, 1, 1, 1);

        chkBoxQTP = new QCheckBox(groupBox_2);
        chkBoxQTP->setObjectName(QString::fromUtf8("chkBoxQTP"));

        gridLayout_4->addWidget(chkBoxQTP, 0, 2, 1, 1);

        chkBoxCP2 = new QCheckBox(groupBox_2);
        chkBoxCP2->setObjectName(QString::fromUtf8("chkBoxCP2"));

        gridLayout_4->addWidget(chkBoxCP2, 1, 1, 1, 1);

        chkBoxQTPQ = new QCheckBox(groupBox_2);
        chkBoxQTPQ->setObjectName(QString::fromUtf8("chkBoxQTPQ"));

        gridLayout_4->addWidget(chkBoxQTPQ, 1, 2, 1, 1);

        chkBoxCP3 = new QCheckBox(groupBox_2);
        chkBoxCP3->setObjectName(QString::fromUtf8("chkBoxCP3"));

        gridLayout_4->addWidget(chkBoxCP3, 2, 1, 1, 1);

        chkBoxCP4 = new QCheckBox(groupBox_2);
        chkBoxCP4->setObjectName(QString::fromUtf8("chkBoxCP4"));

        gridLayout_4->addWidget(chkBoxCP4, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAllSelect = new QPushButton(groupBox_4);
        btnAllSelect->setObjectName(QString::fromUtf8("btnAllSelect"));

        horizontalLayout->addWidget(btnAllSelect);

        btnInvertSelect = new QPushButton(groupBox_4);
        btnInvertSelect->setObjectName(QString::fromUtf8("btnInvertSelect"));

        horizontalLayout->addWidget(btnInvertSelect);

        btnCancelSelect = new QPushButton(groupBox_4);
        btnCancelSelect->setObjectName(QString::fromUtf8("btnCancelSelect"));

        horizontalLayout->addWidget(btnCancelSelect);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_5->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 1, 0, 1, 1);

        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout = new QGridLayout(groupBox_5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnXHQTP = new QPushButton(groupBox_5);
        btnXHQTP->setObjectName(QString::fromUtf8("btnXHQTP"));
        QFont font;
        font.setPointSize(8);
        btnXHQTP->setFont(font);

        gridLayout->addWidget(btnXHQTP, 1, 0, 1, 1);

        btnZCQTP = new QPushButton(groupBox_5);
        btnZCQTP->setObjectName(QString::fromUtf8("btnZCQTP"));
        btnZCQTP->setFont(font);

        gridLayout->addWidget(btnZCQTP, 2, 0, 1, 1);

        btnXHCP = new QPushButton(groupBox_5);
        btnXHCP->setObjectName(QString::fromUtf8("btnXHCP"));
        btnXHCP->setFont(font);

        gridLayout->addWidget(btnXHCP, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_5, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);


        gridLayout_8->addWidget(groupBox_10, 0, 0, 1, 1);

        groupBox_9 = new QGroupBox(centralwidget);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_6 = new QGridLayout(groupBox_9);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox_3 = new QGroupBox(groupBox_9);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_7 = new QGridLayout(groupBox_3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        editOutPutPath = new QLineEdit(groupBox_3);
        editOutPutPath->setObjectName(QString::fromUtf8("editOutPutPath"));

        gridLayout_7->addWidget(editOutPutPath, 0, 0, 1, 1);

        pbtnSelectPath = new QPushButton(groupBox_3);
        pbtnSelectPath->setObjectName(QString::fromUtf8("pbtnSelectPath"));

        gridLayout_7->addWidget(pbtnSelectPath, 0, 1, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 0, 0, 1, 1);

        groupBox_8 = new QGroupBox(groupBox_9);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_3 = new QGridLayout(groupBox_8);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        chkOperPath = new QCheckBox(groupBox_8);
        chkOperPath->setObjectName(QString::fromUtf8("chkOperPath"));
        chkOperPath->setChecked(true);

        gridLayout_3->addWidget(chkOperPath, 0, 0, 1, 1);

        chkOperCheckedPath = new QCheckBox(groupBox_8);
        chkOperCheckedPath->setObjectName(QString::fromUtf8("chkOperCheckedPath"));

        gridLayout_3->addWidget(chkOperCheckedPath, 0, 2, 1, 1);

        chkOperUncheckedPath = new QCheckBox(groupBox_8);
        chkOperUncheckedPath->setObjectName(QString::fromUtf8("chkOperUncheckedPath"));

        gridLayout_3->addWidget(chkOperUncheckedPath, 0, 1, 1, 1);


        gridLayout_6->addWidget(groupBox_8, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 2, 0, 1, 1);

        groupBox_7 = new QGroupBox(groupBox_9);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_7);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnMapDo = new QPushButton(groupBox_7);
        btnMapDo->setObjectName(QString::fromUtf8("btnMapDo"));

        horizontalLayout_3->addWidget(btnMapDo);

        btnExcleDo = new QPushButton(groupBox_7);
        btnExcleDo->setObjectName(QString::fromUtf8("btnExcleDo"));

        horizontalLayout_3->addWidget(btnExcleDo);


        gridLayout_6->addWidget(groupBox_7, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 4, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_9, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 741, 20));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionPath);
        menu->addAction(actionExcelPath);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionPath->setText(QCoreApplication::translate("MainWindow", "MAP\350\267\257\345\276\204", nullptr));
        actionExcelPath->setText(QCoreApplication::translate("MainWindow", "\346\265\213\346\212\245\350\267\257\345\276\204", nullptr));
        groupBox_10->setTitle(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\211\271\345\217\267", nullptr));
        editLotId->setText(QString());
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "map\350\267\257\345\276\204\351\200\211\346\213\251", nullptr));
        rbtnMapSave->setText(QCoreApplication::translate("MainWindow", "MAP\344\277\235\345\255\230", nullptr));
        rbtnTsKMap->setText(QCoreApplication::translate("MainWindow", "TSK-MAP", nullptr));
        rbtnP12Map->setText(QCoreApplication::translate("MainWindow", "P12-MAP", nullptr));
        rbtnP8Map->setText(QCoreApplication::translate("MainWindow", "P8-MAP", nullptr));
        groupBox_4->setTitle(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "MAP\344\277\235\345\255\230\346\265\201\347\250\213\351\200\211\346\213\251", nullptr));
        chkBoxCP->setText(QCoreApplication::translate("MainWindow", "CP", nullptr));
        chkBoxCP1->setText(QCoreApplication::translate("MainWindow", "CP1", nullptr));
        chkBoxQTP->setText(QCoreApplication::translate("MainWindow", "QTP", nullptr));
        chkBoxCP2->setText(QCoreApplication::translate("MainWindow", "CP2", nullptr));
        chkBoxQTPQ->setText(QCoreApplication::translate("MainWindow", "QTPQ", nullptr));
        chkBoxCP3->setText(QCoreApplication::translate("MainWindow", "CP3", nullptr));
        chkBoxCP4->setText(QCoreApplication::translate("MainWindow", "CP4", nullptr));
        btnAllSelect->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        btnInvertSelect->setText(QCoreApplication::translate("MainWindow", "\345\217\215\351\200\211", nullptr));
        btnCancelSelect->setText(QCoreApplication::translate("MainWindow", "\347\251\272\351\200\211", nullptr));
        groupBox_5->setTitle(QString());
        btnXHQTP->setText(QCoreApplication::translate("MainWindow", "XH-QTP", nullptr));
        btnZCQTP->setText(QCoreApplication::translate("MainWindow", "ZC-QTP", nullptr));
        btnXHCP->setText(QCoreApplication::translate("MainWindow", "XH-CP", nullptr));
        groupBox_9->setTitle(QString());
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\347\233\256\346\240\207\350\267\257\345\276\204", nullptr));
        pbtnSelectPath->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "\346\265\213\346\212\245\350\267\257\345\276\204\351\200\211\346\213\251", nullptr));
        chkOperPath->setText(QCoreApplication::translate("MainWindow", "\347\224\237\344\272\247\347\216\260\345\234\272", nullptr));
        chkOperCheckedPath->setText(QCoreApplication::translate("MainWindow", "\345\267\262\346\240\270\345\257\271\346\225\260\346\215\256", nullptr));
        chkOperUncheckedPath->setText(QCoreApplication::translate("MainWindow", "\346\234\252\346\240\270\345\257\271\346\225\260\346\215\256", nullptr));
        groupBox_7->setTitle(QString());
        btnMapDo->setText(QCoreApplication::translate("MainWindow", "\346\211\247\350\241\214MAP\345\244\215\345\210\266", nullptr));
        btnExcleDo->setText(QCoreApplication::translate("MainWindow", "\346\211\247\350\241\214\346\265\213\346\212\245\345\244\215\345\210\266", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
