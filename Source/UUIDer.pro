#-------------------------------------------------
#
# Project created by QtCreator 2013-12-12T12:14:12
#
#-------------------------------------------------

QT      += core gui widgets sql

TARGET 		= UUIDer
TEMPLATE 	= app

# header files.
HEADERS += \
    Controllers/UUIDerMainWindow.hpp \
    Controllers/UUIDerAboutDialog.hpp \
    Logics/UUIDDatabase.hpp \
    Logics/UUIDTypes.hpp \
    Logics/UUIDGenerator.hpp \
    Logics/QUuid_Ext.hpp \
    Logics/UUIDerApp.hpp \
    Logics/RandomStringGenerator.hpp
#

# source files.
SOURCES += \
    main.cpp\
    Controllers/UUIDerMainWindow.cpp \
    Controllers/UUIDerAboutDialog.cpp \
    Logics/UUIDDatabase.cpp \
    Logics/UUIDGenerator.cpp \
    Logics/QUuid_Ext.cpp \
    Logics/UUIDerApp.cpp \
    Logics/RandomStringGenerator.cpp
#

# forms
FORMS += \
    UI/UUIDerMainWindow.ui \
    UI/UUIDerAboutDialog.ui
#
