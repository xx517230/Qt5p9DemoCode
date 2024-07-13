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
    QGridLayout *gridLayout_8;
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
    QCheckBox *chkBoxQTP;
    QCheckBox *chkBoxCP1;
    QCheckBox *chkBoxQTP_CP2;
    QCheckBox *chkBoxCP;
    QCheckBox *chkBoxCP4;
    QCheckBox *chkBoxCP3;
    QCheckBox *chkBoxCP2;
    QCheckBox *chkBoxQTPQ;
    QPushButton *btnAllSelect;
    QPushButton *btnCancelSelect;
    QPushButton *btnInvertSelect;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QPushButton *btnXHQTP;
    QPushButton *btnZCQTP;
    QPushButton *btnXHCP;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_3;
    QCheckBox *chkOperPath;
    QCheckBox *chkOperUncheckedPath;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_7;
    QLineEdit *editOutPutPath;
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
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(823, 433);
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
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 127));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Active, QPalette::Background, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Background, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush6(QColor(127, 127, 127, 127));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Background, brush1);
        tabWidget->setPalette(palette);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_10 = new QGridLayout(tab);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        splitter_3 = new QSplitter(tab);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        groupBox_10 = new QGroupBox(splitter_3);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        gridLayout_8 = new QGridLayout(groupBox_10);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groupBox = new QGroupBox(groupBox_10);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        editLotId = new QLineEdit(groupBox);
        editLotId->setObjectName(QString::fromUtf8("editLotId"));

        gridLayout_2->addWidget(editLotId, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox, 0, 0, 1, 1);

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


        gridLayout_8->addWidget(groupBox_6, 1, 0, 1, 1);

        splitter = new QSplitter(groupBox_10);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        chkBoxQTP = new QCheckBox(groupBox_2);
        chkBoxQTP->setObjectName(QString::fromUtf8("chkBoxQTP"));

        gridLayout_4->addWidget(chkBoxQTP, 0, 2, 1, 1);

        chkBoxCP1 = new QCheckBox(groupBox_2);
        chkBoxCP1->setObjectName(QString::fromUtf8("chkBoxCP1"));

        gridLayout_4->addWidget(chkBoxCP1, 0, 1, 1, 1);

        chkBoxQTP_CP2 = new QCheckBox(groupBox_2);
        chkBoxQTP_CP2->setObjectName(QString::fromUtf8("chkBoxQTP_CP2"));

        gridLayout_4->addWidget(chkBoxQTP_CP2, 2, 2, 1, 1);

        chkBoxCP = new QCheckBox(groupBox_2);
        chkBoxCP->setObjectName(QString::fromUtf8("chkBoxCP"));

        gridLayout_4->addWidget(chkBoxCP, 0, 0, 1, 1);

        chkBoxCP4 = new QCheckBox(groupBox_2);
        chkBoxCP4->setObjectName(QString::fromUtf8("chkBoxCP4"));

        gridLayout_4->addWidget(chkBoxCP4, 3, 1, 1, 1);

        chkBoxCP3 = new QCheckBox(groupBox_2);
        chkBoxCP3->setObjectName(QString::fromUtf8("chkBoxCP3"));

        gridLayout_4->addWidget(chkBoxCP3, 2, 1, 1, 1);

        chkBoxCP2 = new QCheckBox(groupBox_2);
        chkBoxCP2->setObjectName(QString::fromUtf8("chkBoxCP2"));

        gridLayout_4->addWidget(chkBoxCP2, 1, 1, 1, 1);

        chkBoxQTPQ = new QCheckBox(groupBox_2);
        chkBoxQTPQ->setObjectName(QString::fromUtf8("chkBoxQTPQ"));

        gridLayout_4->addWidget(chkBoxQTPQ, 1, 2, 1, 1);

        btnAllSelect = new QPushButton(groupBox_2);
        btnAllSelect->setObjectName(QString::fromUtf8("btnAllSelect"));

        gridLayout_4->addWidget(btnAllSelect, 4, 0, 1, 1);

        btnCancelSelect = new QPushButton(groupBox_2);
        btnCancelSelect->setObjectName(QString::fromUtf8("btnCancelSelect"));

        gridLayout_4->addWidget(btnCancelSelect, 4, 2, 1, 1);

        btnInvertSelect = new QPushButton(groupBox_2);
        btnInvertSelect->setObjectName(QString::fromUtf8("btnInvertSelect"));

        gridLayout_4->addWidget(btnInvertSelect, 4, 1, 1, 1);

        splitter->addWidget(groupBox_2);
        groupBox_5 = new QGroupBox(splitter);
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

        splitter->addWidget(groupBox_5);

        gridLayout_8->addWidget(splitter, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer, 5, 0, 1, 1);

        splitter_3->addWidget(groupBox_10);
        groupBox_9 = new QGroupBox(splitter_3);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_9 = new QGridLayout(groupBox_9);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
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


        gridLayout_9->addWidget(groupBox_8, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(groupBox_9);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_7 = new QGridLayout(groupBox_3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        editOutPutPath = new QLineEdit(groupBox_3);
        editOutPutPath->setObjectName(QString::fromUtf8("editOutPutPath"));

        gridLayout_7->addWidget(editOutPutPath, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_3, 0, 0, 1, 1);

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

        gridLayout_9->addWidget(splitter_2, 2, 0, 1, 1);

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


        gridLayout_9->addWidget(groupBox_7, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_2, 4, 0, 1, 1);

        splitter_3->addWidget(groupBox_9);

        gridLayout_10->addWidget(splitter_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout_11->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 823, 20));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionPath);
        menu->addAction(actionExcelPath);
        menu->addAction(actionLOGPath);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
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
        chkBoxQTP->setText(QCoreApplication::translate("MainWindow", "QTP", nullptr));
        chkBoxCP1->setText(QCoreApplication::translate("MainWindow", "CP1", nullptr));
        chkBoxQTP_CP2->setText(QCoreApplication::translate("MainWindow", "QTP_CP2", nullptr));
        chkBoxCP->setText(QCoreApplication::translate("MainWindow", "CP", nullptr));
        chkBoxCP4->setText(QCoreApplication::translate("MainWindow", "CP4", nullptr));
        chkBoxCP3->setText(QCoreApplication::translate("MainWindow", "CP3", nullptr));
        chkBoxCP2->setText(QCoreApplication::translate("MainWindow", "CP2", nullptr));
        chkBoxQTPQ->setText(QCoreApplication::translate("MainWindow", "QTPQ", nullptr));
        btnAllSelect->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        btnCancelSelect->setText(QCoreApplication::translate("MainWindow", "\347\251\272\351\200\211", nullptr));
        btnInvertSelect->setText(QCoreApplication::translate("MainWindow", "\345\217\215\351\200\211", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\345\270\270\347\224\250\346\265\201\347\250\213", nullptr));
        btnXHQTP->setText(QCoreApplication::translate("MainWindow", "XH-QTP", nullptr));
        btnZCQTP->setText(QCoreApplication::translate("MainWindow", "ZC-QTP", nullptr));
        btnXHCP->setText(QCoreApplication::translate("MainWindow", "XH-CP", nullptr));
        groupBox_9->setTitle(QString());
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "\346\265\213\346\212\245\350\267\257\345\276\204\351\200\211\346\213\251", nullptr));
        chkOperPath->setText(QCoreApplication::translate("MainWindow", "\347\224\237\344\272\247\347\216\260\345\234\272", nullptr));
        chkOperUncheckedPath->setText(QCoreApplication::translate("MainWindow", "\346\234\252\346\240\270\345\257\271\346\225\260\346\215\256", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\350\276\223\345\207\272\350\267\257\345\276\204", nullptr));
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
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
