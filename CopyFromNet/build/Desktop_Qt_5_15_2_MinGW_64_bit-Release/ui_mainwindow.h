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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPath;
    QAction *actionExcelPath;
    QAction *actionLOGPath;
    QWidget *centralwidget;
    QGridLayout *gridLayout_11;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_10;
    QSplitter *splitter_3;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *editLotId;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbtnMapSave;
    QRadioButton *rbtnTsKMap;
    QRadioButton *rbtnP12Map;
    QRadioButton *rbtnP8Map;
    QSplitter *splitter;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QCheckBox *chkBoxCP;
    QCheckBox *chkBoxCP1;
    QCheckBox *chkBoxQTP;
    QCheckBox *chkBoxCP2;
    QCheckBox *chkBoxQTPQ;
    QCheckBox *chkBoxCP3;
    QCheckBox *chkBoxQTP_CP2;
    QCheckBox *chkBoxCP4;
    QPushButton *btnAllSelect;
    QPushButton *btnInvertSelect;
    QPushButton *btnCancelSelect;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_8;
    QPushButton *btnXHCP;
    QPushButton *btnXHQTP;
    QPushButton *btnZCQTP;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_7;
    QLineEdit *editOutPutPath;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_3;
    QCheckBox *chkOperPath;
    QCheckBox *chkOperUncheckedPath;
    QSplitter *splitter_2;
    QGroupBox *groupBox_11;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *chkBoxCSV;
    QCheckBox *chkBoxWmpTDO;
    QCheckBox *chkBoxsumryTDO;
    QCheckBox *chkBoxSTDF;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_5;
    QRadioButton *rbtn3360pLog;
    QRadioButton *rbtn3380dLog;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_6;
    QPushButton *btnLogDo;
    QPushButton *btnExcleDo;
    QPushButton *btnMapDo;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_12;
    QProgressBar *progressBar;
    QGroupBox *groupBox_14;
    QCheckBox *checkBox;
    QCheckBox *checkBox_3;
    QSpinBox *spinBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(823, 522);
        actionPath = new QAction(MainWindow);
        actionPath->setObjectName(QString::fromUtf8("actionPath"));
        actionExcelPath = new QAction(MainWindow);
        actionExcelPath->setObjectName(QString::fromUtf8("actionExcelPath"));
        actionLOGPath = new QAction(MainWindow);
        actionLOGPath->setObjectName(QString::fromUtf8("actionLOGPath"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_11 = new QGridLayout(centralwidget);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_10 = new QGridLayout(tab);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        splitter_3 = new QSplitter(tab);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        groupBox_10 = new QGroupBox(splitter_3);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        gridLayout_9 = new QGridLayout(groupBox_10);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        groupBox = new QGroupBox(groupBox_10);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        editLotId = new QLineEdit(groupBox);
        editLotId->setObjectName(QString::fromUtf8("editLotId"));

        gridLayout_2->addWidget(editLotId, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(groupBox_10);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rbtnMapSave = new QRadioButton(groupBox_6);
        rbtnMapSave->setObjectName(QString::fromUtf8("rbtnMapSave"));
        rbtnMapSave->setChecked(false);

        horizontalLayout_2->addWidget(rbtnMapSave);

        rbtnTsKMap = new QRadioButton(groupBox_6);
        rbtnTsKMap->setObjectName(QString::fromUtf8("rbtnTsKMap"));
        rbtnTsKMap->setChecked(true);

        horizontalLayout_2->addWidget(rbtnTsKMap);

        rbtnP12Map = new QRadioButton(groupBox_6);
        rbtnP12Map->setObjectName(QString::fromUtf8("rbtnP12Map"));

        horizontalLayout_2->addWidget(rbtnP12Map);

        rbtnP8Map = new QRadioButton(groupBox_6);
        rbtnP8Map->setObjectName(QString::fromUtf8("rbtnP8Map"));

        horizontalLayout_2->addWidget(rbtnP8Map);


        gridLayout_9->addWidget(groupBox_6, 1, 0, 1, 1);

        splitter = new QSplitter(groupBox_10);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox_2 = new QGroupBox(splitter);
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

        chkBoxQTP_CP2 = new QCheckBox(groupBox_2);
        chkBoxQTP_CP2->setObjectName(QString::fromUtf8("chkBoxQTP_CP2"));

        gridLayout_4->addWidget(chkBoxQTP_CP2, 2, 2, 1, 1);

        chkBoxCP4 = new QCheckBox(groupBox_2);
        chkBoxCP4->setObjectName(QString::fromUtf8("chkBoxCP4"));

        gridLayout_4->addWidget(chkBoxCP4, 3, 1, 1, 1);

        btnAllSelect = new QPushButton(groupBox_2);
        btnAllSelect->setObjectName(QString::fromUtf8("btnAllSelect"));

        gridLayout_4->addWidget(btnAllSelect, 4, 0, 1, 1);

        btnInvertSelect = new QPushButton(groupBox_2);
        btnInvertSelect->setObjectName(QString::fromUtf8("btnInvertSelect"));

        gridLayout_4->addWidget(btnInvertSelect, 4, 1, 1, 1);

        btnCancelSelect = new QPushButton(groupBox_2);
        btnCancelSelect->setObjectName(QString::fromUtf8("btnCancelSelect"));

        gridLayout_4->addWidget(btnCancelSelect, 4, 2, 1, 1);

        splitter->addWidget(groupBox_2);
        groupBox_5 = new QGroupBox(splitter);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_8 = new QGridLayout(groupBox_5);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        btnXHCP = new QPushButton(groupBox_5);
        btnXHCP->setObjectName(QString::fromUtf8("btnXHCP"));
        QFont font;
        font.setPointSize(8);
        btnXHCP->setFont(font);

        gridLayout_8->addWidget(btnXHCP, 0, 0, 1, 1);

        btnXHQTP = new QPushButton(groupBox_5);
        btnXHQTP->setObjectName(QString::fromUtf8("btnXHQTP"));
        btnXHQTP->setFont(font);

        gridLayout_8->addWidget(btnXHQTP, 1, 0, 1, 1);

        btnZCQTP = new QPushButton(groupBox_5);
        btnZCQTP->setObjectName(QString::fromUtf8("btnZCQTP"));
        btnZCQTP->setFont(font);

        gridLayout_8->addWidget(btnZCQTP, 2, 0, 1, 1);

        splitter->addWidget(groupBox_5);

        gridLayout_9->addWidget(splitter, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer, 3, 0, 1, 1);

        splitter_3->addWidget(groupBox_10);
        groupBox_9 = new QGroupBox(splitter_3);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout = new QGridLayout(groupBox_9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_3 = new QGroupBox(groupBox_9);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_7 = new QGridLayout(groupBox_3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        editOutPutPath = new QLineEdit(groupBox_3);
        editOutPutPath->setObjectName(QString::fromUtf8("editOutPutPath"));

        gridLayout_7->addWidget(editOutPutPath, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 0, 0, 1, 1);

        groupBox_8 = new QGroupBox(groupBox_9);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_3 = new QGridLayout(groupBox_8);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        chkOperPath = new QCheckBox(groupBox_8);
        chkOperPath->setObjectName(QString::fromUtf8("chkOperPath"));
        chkOperPath->setCheckable(true);
        chkOperPath->setChecked(true);

        gridLayout_3->addWidget(chkOperPath, 0, 0, 1, 1);

        chkOperUncheckedPath = new QCheckBox(groupBox_8);
        chkOperUncheckedPath->setObjectName(QString::fromUtf8("chkOperUncheckedPath"));
        chkOperUncheckedPath->setCheckable(false);

        gridLayout_3->addWidget(chkOperUncheckedPath, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox_8, 1, 0, 1, 1);

        splitter_2 = new QSplitter(groupBox_9);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        groupBox_11 = new QGroupBox(splitter_2);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        chkBoxCSV = new QCheckBox(groupBox_11);
        chkBoxCSV->setObjectName(QString::fromUtf8("chkBoxCSV"));
        chkBoxCSV->setChecked(true);

        horizontalLayout_3->addWidget(chkBoxCSV);

        chkBoxWmpTDO = new QCheckBox(groupBox_11);
        chkBoxWmpTDO->setObjectName(QString::fromUtf8("chkBoxWmpTDO"));
        chkBoxWmpTDO->setCheckable(false);

        horizontalLayout_3->addWidget(chkBoxWmpTDO);

        chkBoxsumryTDO = new QCheckBox(groupBox_11);
        chkBoxsumryTDO->setObjectName(QString::fromUtf8("chkBoxsumryTDO"));
        chkBoxsumryTDO->setCheckable(false);

        horizontalLayout_3->addWidget(chkBoxsumryTDO);

        chkBoxSTDF = new QCheckBox(groupBox_11);
        chkBoxSTDF->setObjectName(QString::fromUtf8("chkBoxSTDF"));
        chkBoxSTDF->setCheckable(false);

        horizontalLayout_3->addWidget(chkBoxSTDF);

        splitter_2->addWidget(groupBox_11);
        groupBox_13 = new QGroupBox(splitter_2);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        gridLayout_5 = new QGridLayout(groupBox_13);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        rbtn3360pLog = new QRadioButton(groupBox_13);
        rbtn3360pLog->setObjectName(QString::fromUtf8("rbtn3360pLog"));
        rbtn3360pLog->setChecked(true);

        gridLayout_5->addWidget(rbtn3360pLog, 0, 0, 1, 1);

        rbtn3380dLog = new QRadioButton(groupBox_13);
        rbtn3380dLog->setObjectName(QString::fromUtf8("rbtn3380dLog"));

        gridLayout_5->addWidget(rbtn3380dLog, 1, 0, 1, 1);

        splitter_2->addWidget(groupBox_13);

        gridLayout->addWidget(splitter_2, 2, 0, 1, 1);

        groupBox_7 = new QGroupBox(groupBox_9);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_6 = new QGridLayout(groupBox_7);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        btnLogDo = new QPushButton(groupBox_7);
        btnLogDo->setObjectName(QString::fromUtf8("btnLogDo"));

        gridLayout_6->addWidget(btnLogDo, 1, 2, 1, 1);

        btnExcleDo = new QPushButton(groupBox_7);
        btnExcleDo->setObjectName(QString::fromUtf8("btnExcleDo"));

        gridLayout_6->addWidget(btnExcleDo, 1, 1, 1, 1);

        btnMapDo = new QPushButton(groupBox_7);
        btnMapDo->setObjectName(QString::fromUtf8("btnMapDo"));

        gridLayout_6->addWidget(btnMapDo, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox_7, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 1);

        splitter_3->addWidget(groupBox_9);

        gridLayout_10->addWidget(splitter_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 0, 601, 301));
        groupBox_12 = new QGroupBox(tab_2);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setGeometry(QRect(10, 320, 601, 91));
        progressBar = new QProgressBar(tab_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 430, 511, 23));
        progressBar->setValue(24);
        groupBox_14 = new QGroupBox(tab_2);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setGeometry(QRect(620, 0, 171, 301));
        checkBox = new QCheckBox(groupBox_14);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 70, 82, 21));
        checkBox->setChecked(true);
        checkBox_3 = new QCheckBox(groupBox_14);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 40, 82, 21));
        checkBox_3->setChecked(true);
        spinBox = new QSpinBox(groupBox_14);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(120, 50, 42, 24));
        spinBox->setValue(30);
        checkBox_2 = new QCheckBox(groupBox_14);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 20, 111, 21));
        checkBox_2->setChecked(true);
        checkBox_4 = new QCheckBox(groupBox_14);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(10, 100, 151, 21));
        checkBox_4->setChecked(true);
        checkBox_5 = new QCheckBox(groupBox_14);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(10, 120, 151, 21));
        checkBox_5->setChecked(false);
        checkBox_6 = new QCheckBox(groupBox_14);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(10, 140, 151, 21));
        checkBox_6->setChecked(true);
        tabWidget->addTab(tab_2, QString());

        gridLayout_11->addWidget(tabWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 823, 20));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionExcelPath);
        menu->addAction(actionPath);
        menu->addAction(actionLOGPath);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CopyFromNet", nullptr));
        actionPath->setText(QCoreApplication::translate("MainWindow", "MAP\350\267\257\345\276\204", nullptr));
        actionExcelPath->setText(QCoreApplication::translate("MainWindow", "\346\265\213\346\212\245\350\267\257\345\276\204", nullptr));
        actionLOGPath->setText(QCoreApplication::translate("MainWindow", "LOG\350\267\257\345\276\204", nullptr));
#if QT_CONFIG(tooltip)
        actionLOGPath->setToolTip(QCoreApplication::translate("MainWindow", "LOG\350\267\257\345\276\204", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_10->setTitle(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\211\271\345\217\267", nullptr));
        editLotId->setText(QString());
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "map\350\267\257\345\276\204\351\200\211\346\213\251", nullptr));
        rbtnMapSave->setText(QCoreApplication::translate("MainWindow", "MAP\344\277\235\345\255\230", nullptr));
        rbtnTsKMap->setText(QCoreApplication::translate("MainWindow", "TSK-MAP", nullptr));
        rbtnP12Map->setText(QCoreApplication::translate("MainWindow", "P12-MAP", nullptr));
        rbtnP8Map->setText(QCoreApplication::translate("MainWindow", "P8-MAP", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "MAP\344\277\235\345\255\230/LOG\346\265\201\347\250\213\351\200\211\346\213\251", nullptr));
        chkBoxCP->setText(QCoreApplication::translate("MainWindow", "CP", nullptr));
        chkBoxCP1->setText(QCoreApplication::translate("MainWindow", "CP1", nullptr));
        chkBoxQTP->setText(QCoreApplication::translate("MainWindow", "QTP", nullptr));
        chkBoxCP2->setText(QCoreApplication::translate("MainWindow", "CP2", nullptr));
        chkBoxQTPQ->setText(QCoreApplication::translate("MainWindow", "QTPQ", nullptr));
        chkBoxCP3->setText(QCoreApplication::translate("MainWindow", "CP3", nullptr));
        chkBoxQTP_CP2->setText(QCoreApplication::translate("MainWindow", "QTP_CP2", nullptr));
        chkBoxCP4->setText(QCoreApplication::translate("MainWindow", "CP4", nullptr));
        btnAllSelect->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        btnInvertSelect->setText(QCoreApplication::translate("MainWindow", "\345\217\215\351\200\211", nullptr));
        btnCancelSelect->setText(QCoreApplication::translate("MainWindow", "\347\251\272\351\200\211", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\345\270\270\347\224\250\346\265\201\347\250\213", nullptr));
        btnXHCP->setText(QCoreApplication::translate("MainWindow", "XH-CP", nullptr));
        btnXHQTP->setText(QCoreApplication::translate("MainWindow", "XH-QTP", nullptr));
        btnZCQTP->setText(QCoreApplication::translate("MainWindow", "ZC-QTP", nullptr));
        groupBox_9->setTitle(QString());
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\350\276\223\345\207\272\350\267\257\345\276\204", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "\346\265\213\346\212\245\350\267\257\345\276\204\351\200\211\346\213\251", nullptr));
        chkOperPath->setText(QCoreApplication::translate("MainWindow", "\347\224\237\344\272\247\347\216\260\345\234\272", nullptr));
        chkOperUncheckedPath->setText(QCoreApplication::translate("MainWindow", "\346\234\252\346\240\270\345\257\271\346\225\260\346\215\256", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("MainWindow", "LOG\351\200\211\346\213\251", nullptr));
        chkBoxCSV->setText(QCoreApplication::translate("MainWindow", "CSV", nullptr));
        chkBoxWmpTDO->setText(QCoreApplication::translate("MainWindow", "wmp", nullptr));
        chkBoxsumryTDO->setText(QCoreApplication::translate("MainWindow", "sumry", nullptr));
        chkBoxSTDF->setText(QCoreApplication::translate("MainWindow", "STDF", nullptr));
        groupBox_13->setTitle(QCoreApplication::translate("MainWindow", "\346\234\272\345\236\213\351\200\211\346\213\251", nullptr));
        rbtn3360pLog->setText(QCoreApplication::translate("MainWindow", "3360P", nullptr));
        rbtn3380dLog->setText(QCoreApplication::translate("MainWindow", "3380D", nullptr));
        groupBox_7->setTitle(QString());
        btnLogDo->setText(QCoreApplication::translate("MainWindow", "LOG\345\244\215\345\210\266", nullptr));
        btnExcleDo->setText(QCoreApplication::translate("MainWindow", "\346\265\213\346\212\245\345\244\215\345\210\266", nullptr));
        btnMapDo->setText(QCoreApplication::translate("MainWindow", "MAP\345\244\215\345\210\266", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "CopyFromNet", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\347\233\256\345\275\225\346\210\226\346\226\207\344\273\266", nullptr));
        groupBox_12->setTitle(QString());
        groupBox_14->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\346\227\266\351\227\264\347\273\237\350\256\241", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "\351\227\264\351\232\224\346\227\266\351\227\264", nullptr));
#if QT_CONFIG(tooltip)
        spinBox->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\350\256\276\347\275\256\351\227\264\351\232\224\346\227\266\351\227\264\357\274\214\346\200\273\346\227\266\351\227\264\344\274\232\345\207\217\345\216\273\345\274\202\345\270\270\347\232\204\351\227\264\351\232\224\346\227\266\351\227\264\357\274\214\345\246\202\345\201\234\346\255\242\346\227\266\351\227\264\357\274\214\351\273\230\350\256\24430S</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\346\240\274\345\274\217", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_4->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\346\230\257\345\220\246\344\277\235\345\255\230SITE/BIN/X/Y</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "SITE/BIN/X/Y", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_5->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>MAP\345\233\276\345\246\202\346\236\234\345\255\230\345\234\250\345\233\236\346\224\266\357\274\214\345\210\231\350\275\254\346\215\242\346\227\266\346\217\220\344\276\233\346\265\213\350\257\225MAP\345\222\214\345\233\236\346\224\266MAP\357\274\214\344\270\215\345\213\276\351\200\211\345\210\231\350\275\254\346\215\242\344\270\272\345\233\236\346\224\266\345\220\216\347\232\204\345\256\214\346\225\264MAP</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "\345\233\236\346\224\266MAP\345\210\206\347\246\273", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_6->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>MAP\345\233\276\345\246\202\346\236\234\345\255\230\345\234\250\345\233\236\346\224\266\357\274\214\345\210\231\350\275\254\346\215\242\346\227\266\346\217\220\344\276\233\346\265\213\350\257\225MAP\345\222\214\345\233\236\346\224\266MAP\357\274\214\344\270\215\345\213\276\351\200\211\345\210\231\350\275\254\346\215\242\344\270\272\345\233\236\346\224\266\345\220\216\347\232\204\345\256\214\346\225\264MAP</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_6->setText(QCoreApplication::translate("MainWindow", "\351\222\210\345\215\241\346\216\222\345\210\227\346\216\250\346\265\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "timelog\350\275\254\346\215\242", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
