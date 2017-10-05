/********************************************************************************
** Form generated from reading UI file 'offline.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OFFLINE_H
#define UI_OFFLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OfflineClass
{
public:
    QWidget *centralWidget;
    QLCDNumber *timerDisplay;
    QPushButton *startButton;
    QSpinBox *timerSpinBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OfflineClass)
    {
        if (OfflineClass->objectName().isEmpty())
            OfflineClass->setObjectName(QStringLiteral("OfflineClass"));
        OfflineClass->resize(600, 400);
        centralWidget = new QWidget(OfflineClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        timerDisplay = new QLCDNumber(centralWidget);
        timerDisplay->setObjectName(QStringLiteral("timerDisplay"));
        timerDisplay->setGeometry(QRect(180, 70, 241, 101));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(260, 270, 91, 51));
        timerSpinBox = new QSpinBox(centralWidget);
        timerSpinBox->setObjectName(QStringLiteral("timerSpinBox"));
        timerSpinBox->setGeometry(QRect(250, 190, 111, 51));
        OfflineClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OfflineClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        OfflineClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OfflineClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OfflineClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OfflineClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OfflineClass->setStatusBar(statusBar);

        retranslateUi(OfflineClass);
        QObject::connect(startButton, SIGNAL(clicked()), timerDisplay, SLOT(show()));

        QMetaObject::connectSlotsByName(OfflineClass);
    } // setupUi

    void retranslateUi(QMainWindow *OfflineClass)
    {
        OfflineClass->setWindowTitle(QApplication::translate("OfflineClass", "Offline", Q_NULLPTR));
        startButton->setText(QApplication::translate("OfflineClass", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OfflineClass: public Ui_OfflineClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OFFLINE_H
