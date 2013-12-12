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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UUIDerMainWindow
{
public:
    QAction *action;
    QAction *actionAbout;
    QAction *actionOpen_DB;
    QAction *actionNew;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Label_CurDBHeader;
    QLabel *Label_CurDB;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button_GenNewUUID;
    QSpinBox *SpinBox_NumUUIDToGen;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Button_GetUUIDs;
    QSpinBox *SpinBox_NumUUIDToGet;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *UUIDerMainWindow)
    {
        if (UUIDerMainWindow->objectName().isEmpty())
            UUIDerMainWindow->setObjectName(QStringLiteral("UUIDerMainWindow"));
        UUIDerMainWindow->resize(422, 265);
        action = new QAction(UUIDerMainWindow);
        action->setObjectName(QStringLiteral("action"));
        actionAbout = new QAction(UUIDerMainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionOpen_DB = new QAction(UUIDerMainWindow);
        actionOpen_DB->setObjectName(QStringLiteral("actionOpen_DB"));
        actionNew = new QAction(UUIDerMainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        centralWidget = new QWidget(UUIDerMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Label_CurDBHeader = new QLabel(centralWidget);
        Label_CurDBHeader->setObjectName(QStringLiteral("Label_CurDBHeader"));

        horizontalLayout_4->addWidget(Label_CurDBHeader);

        Label_CurDB = new QLabel(centralWidget);
        Label_CurDB->setObjectName(QStringLiteral("Label_CurDB"));

        horizontalLayout_4->addWidget(Label_CurDB);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        Button_GenNewUUID = new QPushButton(centralWidget);
        Button_GenNewUUID->setObjectName(QStringLiteral("Button_GenNewUUID"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button_GenNewUUID->sizePolicy().hasHeightForWidth());
        Button_GenNewUUID->setSizePolicy(sizePolicy);
        Button_GenNewUUID->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(Button_GenNewUUID);

        SpinBox_NumUUIDToGen = new QSpinBox(centralWidget);
        SpinBox_NumUUIDToGen->setObjectName(QStringLiteral("SpinBox_NumUUIDToGen"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SpinBox_NumUUIDToGen->sizePolicy().hasHeightForWidth());
        SpinBox_NumUUIDToGen->setSizePolicy(sizePolicy1);
        SpinBox_NumUUIDToGen->setMinimumSize(QSize(0, 0));
        SpinBox_NumUUIDToGen->setBaseSize(QSize(0, 0));
        SpinBox_NumUUIDToGen->setMinimum(1);
        SpinBox_NumUUIDToGen->setMaximum(1000);

        horizontalLayout->addWidget(SpinBox_NumUUIDToGen);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Button_GetUUIDs = new QPushButton(centralWidget);
        Button_GetUUIDs->setObjectName(QStringLiteral("Button_GetUUIDs"));
        sizePolicy.setHeightForWidth(Button_GetUUIDs->sizePolicy().hasHeightForWidth());
        Button_GetUUIDs->setSizePolicy(sizePolicy);
        Button_GetUUIDs->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(Button_GetUUIDs);

        SpinBox_NumUUIDToGet = new QSpinBox(centralWidget);
        SpinBox_NumUUIDToGet->setObjectName(QStringLiteral("SpinBox_NumUUIDToGet"));
        sizePolicy1.setHeightForWidth(SpinBox_NumUUIDToGet->sizePolicy().hasHeightForWidth());
        SpinBox_NumUUIDToGet->setSizePolicy(sizePolicy1);
        SpinBox_NumUUIDToGet->setMinimum(1);
        SpinBox_NumUUIDToGet->setMaximum(50);

        horizontalLayout_2->addWidget(SpinBox_NumUUIDToGet);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout);

        UUIDerMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(UUIDerMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 422, 21));
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
        menuFile->addAction(actionOpen_DB);
        menuFile->addAction(actionNew);
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
        actionOpen_DB->setText(QApplication::translate("UUIDerMainWindow", "Open DB", 0));
        actionNew->setText(QApplication::translate("UUIDerMainWindow", "New", 0));
        Label_CurDBHeader->setText(QApplication::translate("UUIDerMainWindow", "Current DB: ", 0));
        Label_CurDB->setText(QApplication::translate("UUIDerMainWindow", "?", 0));
#ifndef QT_NO_TOOLTIP
        Button_GenNewUUID->setToolTip(QApplication::translate("UUIDerMainWindow", "Generate some UUIDs.", 0));
#endif // QT_NO_TOOLTIP
        Button_GenNewUUID->setText(QApplication::translate("UUIDerMainWindow", "Generate", 0));
        label->setText(QApplication::translate("UUIDerMainWindow", "UUID's", 0));
        Button_GetUUIDs->setText(QApplication::translate("UUIDerMainWindow", "Get", 0));
        label_2->setText(QApplication::translate("UUIDerMainWindow", "UUID's", 0));
        label_3->setText(QApplication::translate("UUIDerMainWindow", "TextLabel", 0));
        label_4->setText(QApplication::translate("UUIDerMainWindow", "TextLabel", 0));
        menuFile->setTitle(QApplication::translate("UUIDerMainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("UUIDerMainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class UUIDerMainWindow: public Ui_UUIDerMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UUIDERMAINWINDOW_H
