/********************************************************************************
** Form generated from reading UI file 'UUIDerMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UUIDERMAINWINDOW_H
#define UI_UUIDERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
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
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Label_CurDBHeader;
    QLabel *Label_CurDB;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *GroupBox_UUIDGen;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *GroupBox_GenType;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *RadioButton_GenType_Unknown;
    QRadioButton *RadioButton_GenType_V3;
    QRadioButton *RadioButton_GenType_V4;
    QRadioButton *RadioButton_GenType_V5;
    QGroupBox *GroupBox_GenSpecificOptions;
    QGridLayout *gridLayout;
    QFrame *Frame_GenSpecOptions;
    QFormLayout *formLayout;
    QLabel *Label_UUIDGenNamespace;
    QLineEdit *LineEdit_UUIDGen_Namespace;
    QLabel *Label_UUIDGenData;
    QLineEdit *LineEdit_UUIDGen_Data;
    QCheckBox *CheckBox_UseRanDataForUUIDGeneration;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *SpinBox_NumUUIDToGen;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *PushButton_GenNewUUID;
    QPushButton *PushButton_GenNewUUIDForDB;
    QGroupBox *UUIDRetrievalGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *SpinBox_NumUUIDToGet;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *PushButton_GetUUIDs;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *GroupBox_UUIDDisplay;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *CheckBox_DisplayCurlyBraces;
    QCheckBox *CheckBox_DisplayUpperCases;
    QCheckBox *CheckBox_DisplayHypens;
    QSpacerItem *verticalSpacer;
    QTextBrowser *TextBrowser_UUIDs;
    QPushButton *Button_ClearTextBrowser;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *PushButton_ExitUUIDer;
    QSpacerItem *horizontalSpacer_5;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *UUIDerMainWindow)
    {
        if (UUIDerMainWindow->objectName().isEmpty())
            UUIDerMainWindow->setObjectName(QStringLiteral("UUIDerMainWindow"));
        UUIDerMainWindow->setEnabled(true);
        UUIDerMainWindow->resize(500, 756);
        UUIDerMainWindow->setMinimumSize(QSize(500, 756));
        UUIDerMainWindow->setMaximumSize(QSize(500, 16777215));
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
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
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


        verticalLayout_6->addLayout(horizontalLayout_4);

        GroupBox_UUIDGen = new QGroupBox(centralWidget);
        GroupBox_UUIDGen->setObjectName(QStringLiteral("GroupBox_UUIDGen"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GroupBox_UUIDGen->sizePolicy().hasHeightForWidth());
        GroupBox_UUIDGen->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(GroupBox_UUIDGen);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        GroupBox_GenType = new QGroupBox(GroupBox_UUIDGen);
        GroupBox_GenType->setObjectName(QStringLiteral("GroupBox_GenType"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(GroupBox_GenType->sizePolicy().hasHeightForWidth());
        GroupBox_GenType->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(GroupBox_GenType);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        RadioButton_GenType_Unknown = new QRadioButton(GroupBox_GenType);
        RadioButton_GenType_Unknown->setObjectName(QStringLiteral("RadioButton_GenType_Unknown"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(RadioButton_GenType_Unknown->sizePolicy().hasHeightForWidth());
        RadioButton_GenType_Unknown->setSizePolicy(sizePolicy2);
        RadioButton_GenType_Unknown->setChecked(true);

        verticalLayout_4->addWidget(RadioButton_GenType_Unknown);

        RadioButton_GenType_V3 = new QRadioButton(GroupBox_GenType);
        RadioButton_GenType_V3->setObjectName(QStringLiteral("RadioButton_GenType_V3"));
        sizePolicy2.setHeightForWidth(RadioButton_GenType_V3->sizePolicy().hasHeightForWidth());
        RadioButton_GenType_V3->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(RadioButton_GenType_V3);

        RadioButton_GenType_V4 = new QRadioButton(GroupBox_GenType);
        RadioButton_GenType_V4->setObjectName(QStringLiteral("RadioButton_GenType_V4"));
        sizePolicy2.setHeightForWidth(RadioButton_GenType_V4->sizePolicy().hasHeightForWidth());
        RadioButton_GenType_V4->setSizePolicy(sizePolicy2);
        RadioButton_GenType_V4->setChecked(false);

        verticalLayout_4->addWidget(RadioButton_GenType_V4);

        RadioButton_GenType_V5 = new QRadioButton(GroupBox_GenType);
        RadioButton_GenType_V5->setObjectName(QStringLiteral("RadioButton_GenType_V5"));
        sizePolicy2.setHeightForWidth(RadioButton_GenType_V5->sizePolicy().hasHeightForWidth());
        RadioButton_GenType_V5->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(RadioButton_GenType_V5);


        horizontalLayout_7->addWidget(GroupBox_GenType);

        GroupBox_GenSpecificOptions = new QGroupBox(GroupBox_UUIDGen);
        GroupBox_GenSpecificOptions->setObjectName(QStringLiteral("GroupBox_GenSpecificOptions"));
        sizePolicy.setHeightForWidth(GroupBox_GenSpecificOptions->sizePolicy().hasHeightForWidth());
        GroupBox_GenSpecificOptions->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(GroupBox_GenSpecificOptions);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Frame_GenSpecOptions = new QFrame(GroupBox_GenSpecificOptions);
        Frame_GenSpecOptions->setObjectName(QStringLiteral("Frame_GenSpecOptions"));
        Frame_GenSpecOptions->setEnabled(true);
        Frame_GenSpecOptions->setFrameShape(QFrame::StyledPanel);
        Frame_GenSpecOptions->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(Frame_GenSpecOptions);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        Label_UUIDGenNamespace = new QLabel(Frame_GenSpecOptions);
        Label_UUIDGenNamespace->setObjectName(QStringLiteral("Label_UUIDGenNamespace"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Label_UUIDGenNamespace->sizePolicy().hasHeightForWidth());
        Label_UUIDGenNamespace->setSizePolicy(sizePolicy3);

        formLayout->setWidget(0, QFormLayout::LabelRole, Label_UUIDGenNamespace);

        LineEdit_UUIDGen_Namespace = new QLineEdit(Frame_GenSpecOptions);
        LineEdit_UUIDGen_Namespace->setObjectName(QStringLiteral("LineEdit_UUIDGen_Namespace"));

        formLayout->setWidget(0, QFormLayout::FieldRole, LineEdit_UUIDGen_Namespace);

        Label_UUIDGenData = new QLabel(Frame_GenSpecOptions);
        Label_UUIDGenData->setObjectName(QStringLiteral("Label_UUIDGenData"));
        sizePolicy3.setHeightForWidth(Label_UUIDGenData->sizePolicy().hasHeightForWidth());
        Label_UUIDGenData->setSizePolicy(sizePolicy3);

        formLayout->setWidget(1, QFormLayout::LabelRole, Label_UUIDGenData);

        LineEdit_UUIDGen_Data = new QLineEdit(Frame_GenSpecOptions);
        LineEdit_UUIDGen_Data->setObjectName(QStringLiteral("LineEdit_UUIDGen_Data"));

        formLayout->setWidget(1, QFormLayout::FieldRole, LineEdit_UUIDGen_Data);

        CheckBox_UseRanDataForUUIDGeneration = new QCheckBox(Frame_GenSpecOptions);
        CheckBox_UseRanDataForUUIDGeneration->setObjectName(QStringLiteral("CheckBox_UseRanDataForUUIDGeneration"));
        CheckBox_UseRanDataForUUIDGeneration->setChecked(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, CheckBox_UseRanDataForUUIDGeneration);

        label_3 = new QLabel(Frame_GenSpecOptions);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);


        gridLayout->addWidget(Frame_GenSpecOptions, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(GroupBox_GenSpecificOptions);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(GroupBox_UUIDGen);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(label);

        SpinBox_NumUUIDToGen = new QSpinBox(GroupBox_UUIDGen);
        SpinBox_NumUUIDToGen->setObjectName(QStringLiteral("SpinBox_NumUUIDToGen"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(SpinBox_NumUUIDToGen->sizePolicy().hasHeightForWidth());
        SpinBox_NumUUIDToGen->setSizePolicy(sizePolicy5);
        SpinBox_NumUUIDToGen->setMinimumSize(QSize(0, 0));
        SpinBox_NumUUIDToGen->setBaseSize(QSize(0, 0));
        SpinBox_NumUUIDToGen->setMinimum(1);
        SpinBox_NumUUIDToGen->setMaximum(5000);

        horizontalLayout->addWidget(SpinBox_NumUUIDToGen);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        PushButton_GenNewUUID = new QPushButton(GroupBox_UUIDGen);
        PushButton_GenNewUUID->setObjectName(QStringLiteral("PushButton_GenNewUUID"));
        sizePolicy2.setHeightForWidth(PushButton_GenNewUUID->sizePolicy().hasHeightForWidth());
        PushButton_GenNewUUID->setSizePolicy(sizePolicy2);
        PushButton_GenNewUUID->setMinimumSize(QSize(100, 0));

        horizontalLayout_5->addWidget(PushButton_GenNewUUID);

        PushButton_GenNewUUIDForDB = new QPushButton(GroupBox_UUIDGen);
        PushButton_GenNewUUIDForDB->setObjectName(QStringLiteral("PushButton_GenNewUUIDForDB"));
        sizePolicy2.setHeightForWidth(PushButton_GenNewUUIDForDB->sizePolicy().hasHeightForWidth());
        PushButton_GenNewUUIDForDB->setSizePolicy(sizePolicy2);
        PushButton_GenNewUUIDForDB->setMinimumSize(QSize(100, 0));

        horizontalLayout_5->addWidget(PushButton_GenNewUUIDForDB);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_6->addWidget(GroupBox_UUIDGen);

        UUIDRetrievalGroupBox = new QGroupBox(centralWidget);
        UUIDRetrievalGroupBox->setObjectName(QStringLiteral("UUIDRetrievalGroupBox"));
        verticalLayout_2 = new QVBoxLayout(UUIDRetrievalGroupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(UUIDRetrievalGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy6);

        horizontalLayout_2->addWidget(label_2);

        SpinBox_NumUUIDToGet = new QSpinBox(UUIDRetrievalGroupBox);
        SpinBox_NumUUIDToGet->setObjectName(QStringLiteral("SpinBox_NumUUIDToGet"));
        sizePolicy5.setHeightForWidth(SpinBox_NumUUIDToGet->sizePolicy().hasHeightForWidth());
        SpinBox_NumUUIDToGet->setSizePolicy(sizePolicy5);
        SpinBox_NumUUIDToGet->setMinimum(1);
        SpinBox_NumUUIDToGet->setMaximum(50);

        horizontalLayout_2->addWidget(SpinBox_NumUUIDToGet);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        PushButton_GetUUIDs = new QPushButton(UUIDRetrievalGroupBox);
        PushButton_GetUUIDs->setObjectName(QStringLiteral("PushButton_GetUUIDs"));
        sizePolicy2.setHeightForWidth(PushButton_GetUUIDs->sizePolicy().hasHeightForWidth());
        PushButton_GetUUIDs->setSizePolicy(sizePolicy2);
        PushButton_GetUUIDs->setMinimumSize(QSize(100, 0));

        horizontalLayout_6->addWidget(PushButton_GetUUIDs);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout_6->addWidget(UUIDRetrievalGroupBox);

        GroupBox_UUIDDisplay = new QGroupBox(centralWidget);
        GroupBox_UUIDDisplay->setObjectName(QStringLiteral("GroupBox_UUIDDisplay"));
        verticalLayout_3 = new QVBoxLayout(GroupBox_UUIDDisplay);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        CheckBox_DisplayCurlyBraces = new QCheckBox(GroupBox_UUIDDisplay);
        CheckBox_DisplayCurlyBraces->setObjectName(QStringLiteral("CheckBox_DisplayCurlyBraces"));
        sizePolicy3.setHeightForWidth(CheckBox_DisplayCurlyBraces->sizePolicy().hasHeightForWidth());
        CheckBox_DisplayCurlyBraces->setSizePolicy(sizePolicy3);
        CheckBox_DisplayCurlyBraces->setChecked(true);

        verticalLayout_5->addWidget(CheckBox_DisplayCurlyBraces);

        CheckBox_DisplayUpperCases = new QCheckBox(GroupBox_UUIDDisplay);
        CheckBox_DisplayUpperCases->setObjectName(QStringLiteral("CheckBox_DisplayUpperCases"));
        sizePolicy3.setHeightForWidth(CheckBox_DisplayUpperCases->sizePolicy().hasHeightForWidth());
        CheckBox_DisplayUpperCases->setSizePolicy(sizePolicy3);

        verticalLayout_5->addWidget(CheckBox_DisplayUpperCases);

        CheckBox_DisplayHypens = new QCheckBox(GroupBox_UUIDDisplay);
        CheckBox_DisplayHypens->setObjectName(QStringLiteral("CheckBox_DisplayHypens"));
        sizePolicy3.setHeightForWidth(CheckBox_DisplayHypens->sizePolicy().hasHeightForWidth());
        CheckBox_DisplayHypens->setSizePolicy(sizePolicy3);
        CheckBox_DisplayHypens->setChecked(true);

        verticalLayout_5->addWidget(CheckBox_DisplayHypens);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        horizontalLayout_8->addLayout(verticalLayout_5);

        TextBrowser_UUIDs = new QTextBrowser(GroupBox_UUIDDisplay);
        TextBrowser_UUIDs->setObjectName(QStringLiteral("TextBrowser_UUIDs"));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        TextBrowser_UUIDs->setFont(font);
        TextBrowser_UUIDs->setLineWidth(2);
        TextBrowser_UUIDs->setAcceptRichText(false);

        horizontalLayout_8->addWidget(TextBrowser_UUIDs);


        verticalLayout_3->addLayout(horizontalLayout_8);

        Button_ClearTextBrowser = new QPushButton(GroupBox_UUIDDisplay);
        Button_ClearTextBrowser->setObjectName(QStringLiteral("Button_ClearTextBrowser"));

        verticalLayout_3->addWidget(Button_ClearTextBrowser);


        verticalLayout_6->addWidget(GroupBox_UUIDDisplay);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        PushButton_ExitUUIDer = new QPushButton(centralWidget);
        PushButton_ExitUUIDer->setObjectName(QStringLiteral("PushButton_ExitUUIDer"));

        horizontalLayout_3->addWidget(PushButton_ExitUUIDer);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_6->addLayout(horizontalLayout_3);

        UUIDerMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(UUIDerMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 21));
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
        QObject::connect(Button_ClearTextBrowser, SIGNAL(clicked()), TextBrowser_UUIDs, SLOT(clear()));
        QObject::connect(RadioButton_GenType_V4, SIGNAL(clicked()), Frame_GenSpecOptions, SLOT(hide()));
        QObject::connect(RadioButton_GenType_V5, SIGNAL(clicked()), Frame_GenSpecOptions, SLOT(show()));
        QObject::connect(RadioButton_GenType_V3, SIGNAL(clicked()), Frame_GenSpecOptions, SLOT(show()));
        QObject::connect(PushButton_ExitUUIDer, SIGNAL(clicked()), UUIDerMainWindow, SLOT(close()));
        QObject::connect(RadioButton_GenType_Unknown, SIGNAL(clicked()), Frame_GenSpecOptions, SLOT(hide()));

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
        GroupBox_UUIDGen->setTitle(QApplication::translate("UUIDerMainWindow", "UUID Generation", 0));
        GroupBox_GenType->setTitle(QApplication::translate("UUIDerMainWindow", "Generator Type", 0));
        RadioButton_GenType_Unknown->setText(QApplication::translate("UUIDerMainWindow", "?", 0));
        RadioButton_GenType_V3->setText(QApplication::translate("UUIDerMainWindow", "V3 (MDA5)", 0));
        RadioButton_GenType_V4->setText(QApplication::translate("UUIDerMainWindow", "V4(Random)", 0));
        RadioButton_GenType_V5->setText(QApplication::translate("UUIDerMainWindow", "V5 (SHA-1)", 0));
        GroupBox_GenSpecificOptions->setTitle(QApplication::translate("UUIDerMainWindow", "Generator Specific Options", 0));
        Label_UUIDGenNamespace->setText(QApplication::translate("UUIDerMainWindow", "Namespace: ", 0));
        LineEdit_UUIDGen_Namespace->setText(QApplication::translate("UUIDerMainWindow", "{6ba7b810-9dad-11d1-80b4-00c04fd430c8}", 0));
        Label_UUIDGenData->setText(QApplication::translate("UUIDerMainWindow", "Data:", 0));
        LineEdit_UUIDGen_Data->setText(QApplication::translate("UUIDerMainWindow", "?", 0));
        CheckBox_UseRanDataForUUIDGeneration->setText(QApplication::translate("UUIDerMainWindow", "Use random data ('Data' field ignored).", 0));
        label_3->setText(QString());
        label->setText(QApplication::translate("UUIDerMainWindow", "Number of UUID to generate: ", 0));
#ifndef QT_NO_TOOLTIP
        PushButton_GenNewUUID->setToolTip(QApplication::translate("UUIDerMainWindow", "Generate some UUIDs.", 0));
#endif // QT_NO_TOOLTIP
        PushButton_GenNewUUID->setText(QApplication::translate("UUIDerMainWindow", "Generate", 0));
#ifndef QT_NO_TOOLTIP
        PushButton_GenNewUUIDForDB->setToolTip(QApplication::translate("UUIDerMainWindow", "Generate UUID/s and store into current database.", 0));
#endif // QT_NO_TOOLTIP
        PushButton_GenNewUUIDForDB->setText(QApplication::translate("UUIDerMainWindow", "Generate for DB", 0));
        UUIDRetrievalGroupBox->setTitle(QApplication::translate("UUIDerMainWindow", "UUID DB Retrieval (UNSUPPORTED)", 0));
        label_2->setText(QApplication::translate("UUIDerMainWindow", "Number of UUID to retrieve: ", 0));
#ifndef QT_NO_TOOLTIP
        PushButton_GetUUIDs->setToolTip(QApplication::translate("UUIDerMainWindow", "Get UUID/s from the current database.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        PushButton_GetUUIDs->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        PushButton_GetUUIDs->setText(QApplication::translate("UUIDerMainWindow", "Retrieve", 0));
        GroupBox_UUIDDisplay->setTitle(QApplication::translate("UUIDerMainWindow", "UUID Display", 0));
        CheckBox_DisplayCurlyBraces->setText(QApplication::translate("UUIDerMainWindow", "Curly braces", 0));
        CheckBox_DisplayUpperCases->setText(QApplication::translate("UUIDerMainWindow", "Upper cases", 0));
        CheckBox_DisplayHypens->setText(QApplication::translate("UUIDerMainWindow", "Hypens", 0));
        Button_ClearTextBrowser->setText(QApplication::translate("UUIDerMainWindow", "Clear", 0));
        PushButton_ExitUUIDer->setText(QApplication::translate("UUIDerMainWindow", "Exit", 0));
        menuFile->setTitle(QApplication::translate("UUIDerMainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("UUIDerMainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class UUIDerMainWindow: public Ui_UUIDerMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UUIDERMAINWINDOW_H
