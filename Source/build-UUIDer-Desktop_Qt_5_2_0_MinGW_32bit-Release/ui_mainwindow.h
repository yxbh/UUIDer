/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UUIDerMainWindow
{
public:
    QAction *action;
    QAction *actionAbout;
    QWidget *centralWidget;
    QPushButton *button_Generate;
    QPushButton *button_GetUUID;
    QPlainTextEdit *plainTextEdit_UUIDs;
    QSpinBox *spinBox_GetUUID;
    QLabel *label;
    QSpinBox *spinBox_NumUUIDToGen;
    QLabel *label_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;

    void setupUi(QMainWindow *UUIDerMainWindow)
    {
        if (UUIDerMainWindow->objectName().isEmpty())
            UUIDerMainWindow->setObjectName(QStringLiteral("UUIDerMainWindow"));
        UUIDerMainWindow->resize(400, 402);
        action = new QAction(UUIDerMainWindow);
        action->setObjectName(QStringLiteral("action"));
        actionAbout = new QAction(UUIDerMainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(UUIDerMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        button_Generate = new QPushButton(centralWidget);
        button_Generate->setObjectName(QStringLiteral("button_Generate"));
        button_Generate->setGeometry(QRect(30, 50, 115, 32));
        button_GetUUID = new QPushButton(centralWidget);
        button_GetUUID->setObjectName(QStringLiteral("button_GetUUID"));
        button_GetUUID->setGeometry(QRect(30, 110, 115, 32));
        plainTextEdit_UUIDs = new QPlainTextEdit(centralWidget);
        plainTextEdit_UUIDs->setObjectName(QStringLiteral("plainTextEdit_UUIDs"));
        plainTextEdit_UUIDs->setGeometry(QRect(90, 170, 221, 141));
        plainTextEdit_UUIDs->setReadOnly(true);
        spinBox_GetUUID = new QSpinBox(centralWidget);
        spinBox_GetUUID->setObjectName(QStringLiteral("spinBox_GetUUID"));
        spinBox_GetUUID->setGeometry(QRect(150, 120, 111, 24));
        spinBox_GetUUID->setMinimum(1);
        spinBox_GetUUID->setMaximum(50);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 50, 62, 19));
        spinBox_NumUUIDToGen = new QSpinBox(centralWidget);
        spinBox_NumUUIDToGen->setObjectName(QStringLiteral("spinBox_NumUUIDToGen"));
        spinBox_NumUUIDToGen->setGeometry(QRect(150, 50, 111, 24));
        spinBox_NumUUIDToGen->setMinimum(1);
        spinBox_NumUUIDToGen->setMaximum(500);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 120, 101, 19));
        UUIDerMainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(UUIDerMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        UUIDerMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(UUIDerMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        UUIDerMainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(UUIDerMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        UUIDerMainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuHelp->addAction(action);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);

        retranslateUi(UUIDerMainWindow);

        QMetaObject::connectSlotsByName(UUIDerMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UUIDerMainWindow)
    {
        UUIDerMainWindow->setWindowTitle(QApplication::translate("UUIDerMainWindow", "MainWindow", 0));
        action->setText(QApplication::translate("UUIDerMainWindow", "???", 0));
        actionAbout->setText(QApplication::translate("UUIDerMainWindow", "About", 0));
        button_Generate->setText(QApplication::translate("UUIDerMainWindow", "Generate", 0));
        button_GetUUID->setText(QApplication::translate("UUIDerMainWindow", "Get", 0));
        label->setText(QApplication::translate("UUIDerMainWindow", "UUID's", 0));
        label_2->setText(QApplication::translate("UUIDerMainWindow", "UUID from DB.", 0));
        menuFile->setTitle(QApplication::translate("UUIDerMainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("UUIDerMainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class UUIDerMainWindow: public Ui_UUIDerMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
