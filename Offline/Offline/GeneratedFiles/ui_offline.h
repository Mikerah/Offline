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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OfflineClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OfflineClass)
    {
        if (OfflineClass->objectName().isEmpty())
            OfflineClass->setObjectName(QStringLiteral("OfflineClass"));
        OfflineClass->resize(600, 400);
        menuBar = new QMenuBar(OfflineClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        OfflineClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OfflineClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OfflineClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(OfflineClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        OfflineClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(OfflineClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OfflineClass->setStatusBar(statusBar);

        retranslateUi(OfflineClass);

        QMetaObject::connectSlotsByName(OfflineClass);
    } // setupUi

    void retranslateUi(QMainWindow *OfflineClass)
    {
        OfflineClass->setWindowTitle(QApplication::translate("OfflineClass", "Offline", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OfflineClass: public Ui_OfflineClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OFFLINE_H
