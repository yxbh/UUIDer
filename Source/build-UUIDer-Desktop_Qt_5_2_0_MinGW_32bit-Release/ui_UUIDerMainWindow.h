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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *UUIDerMainWindow)
    {
        if (UUIDerMainWindow->objectName().isEmpty())
            UUIDerMainWindow->setObjectName(QStringLiteral("UUIDerMainWindow"));
        UUIDerMainWindow->resize(400, 300);
        action = new QAction(UUIDerMainWindow);
        action->setObjectName(QStringLiteral("action"));
        actionAbout = new QAction(UUIDerMainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(UUIDerMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 20, 46, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 60, 46, 13));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 200, 46, 13));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 200, 46, 13));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 20, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 60, 75, 23));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(170, 20, 71, 22));
        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(170, 60, 71, 22));
        UUIDerMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(UUIDerMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        UUIDerMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(UUIDerMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        UUIDerMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(UUIDerMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        UUIDerMainWindow->setStatusBar(statusBar);

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
        UUIDerMainWindow->setWindowTitle(QApplication::translate("UUIDerMainWindow", "UUIDer", 0));
        action->setText(QApplication::translate("UUIDerMainWindow", "???", 0));
        actionAbout->setText(QApplication::translate("UUIDerMainWindow", "About", 0));
        label->setText(QApplication::translate("UUIDerMainWindow", "UUID's", 0));
        label_2->setText(QApplication::translate("UUIDerMainWindow", "UUID's", 0));
        label_3->setText(QApplication::translate("UUIDerMainWindow", "TextLabel", 0));
        label_4->setText(QApplication::translate("UUIDerMainWindow", "TextLabel", 0));
        pushButton->setText(QApplication::translate("UUIDerMainWindow", "Generate", 0));
        pushButton_2->setText(QApplication::translate("UUIDerMainWindow", "Get", 0));
        menuFile->setTitle(QApplication::translate("UUIDerMainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("UUIDerMainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class UUIDerMainWindow: public Ui_UUIDerMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UUIDERMAINWINDOW_H
