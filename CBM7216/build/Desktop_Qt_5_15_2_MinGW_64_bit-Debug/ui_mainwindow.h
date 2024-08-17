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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actSelectMap;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *editMapPath;
    QToolButton *tbtnSelectMap;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *tbtnDo;
    QToolButton *tbtnClose;
    QSpacerItem *verticalSpacer;
    QProgressBar *progressBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(426, 359);
        actSelectMap = new QAction(MainWindow);
        actSelectMap->setObjectName(QString::fromUtf8("actSelectMap"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("folder-open");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/icon/icon/open1.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actSelectMap->setIcon(icon);
        actSelectMap->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(16777215, 100));
        QFont font;
        font.setPointSize(9);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        editMapPath = new QLineEdit(groupBox);
        editMapPath->setObjectName(QString::fromUtf8("editMapPath"));

        horizontalLayout_2->addWidget(editMapPath);

        tbtnSelectMap = new QToolButton(groupBox);
        tbtnSelectMap->setObjectName(QString::fromUtf8("tbtnSelectMap"));
        tbtnSelectMap->setMinimumSize(QSize(0, 0));
        tbtnSelectMap->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(tbtnSelectMap);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 50));
        groupBox_3->setMaximumSize(QSize(16777215, 100));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        radioButton = new QRadioButton(groupBox_3);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        gridLayout_2->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(groupBox_3);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_2->addWidget(radioButton_2, 0, 1, 1, 1);

        radioButton_3 = new QRadioButton(groupBox_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        gridLayout_2->addWidget(radioButton_3, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tbtnDo = new QToolButton(centralwidget);
        tbtnDo->setObjectName(QString::fromUtf8("tbtnDo"));
        tbtnDo->setMinimumSize(QSize(30, 25));

        horizontalLayout->addWidget(tbtnDo);

        tbtnClose = new QToolButton(centralwidget);
        tbtnClose->setObjectName(QString::fromUtf8("tbtnClose"));
        tbtnClose->setMinimumSize(QSize(30, 25));

        horizontalLayout->addWidget(tbtnClose);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 75, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setTextVisible(true);
        progressBar->setInvertedAppearance(false);

        verticalLayout->addWidget(progressBar);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CBM7216\347\263\273\345\210\227\345\256\242\344\276\233MAP\350\275\254TXT", nullptr));
        actSelectMap->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251MAP\347\233\256\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        actSelectMap->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251MAP\347\233\256\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actSelectMap->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\345\256\242\344\276\233MAP\347\233\256\345\275\225", nullptr));
        tbtnSelectMap->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\344\272\247\345\223\201\351\200\211\346\213\251", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "CSS38FW20", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "CBM7216", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "CBM7316", nullptr));
        tbtnDo->setText(QCoreApplication::translate("MainWindow", "\346\211\247\350\241\214", nullptr));
        tbtnClose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
