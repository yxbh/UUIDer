/********************************************************************************
** Form generated from reading UI file 'UUIDerMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UUIDERMAINWINDOW_H
#define UI_UUIDERMAINWINDOW_H

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

class Ui_UUIDerMainWindow
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *UUIDerMainWindow)
    {
        if (UUIDerMainWindow->objectName().isEmpty())
            UUIDerMainWindow->setObjectName(QStringLiteral("UUIDerMainWindow"));
        UUIDerMainWindow->resize(400, 300);
        menuBar = new QMenuBar(UUIDerMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        UUIDerMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(UUIDerMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        UUIDerMainWindow->addToolBar(mainToolBar);
        centralWidget = new QWidget(UUIDerMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        UUIDerMainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(UUIDerMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        UUIDerMainWindow->setStatusBar(statusBar);

        retranslateUi(UUIDerMainWindow);

        QMetaObject::connectSlotsByName(UUIDerMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UUIDerMainWindow)
    {
        UUIDerMainWindow->setWindowTitle(QApplication::translate("UUIDerMainWindow", "UUIDerMainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class UUIDerMainWindow: public Ui_UUIDerMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UUIDERMAINWINDOW_H
