#-------------------------------------------------
#
# Project created by QtCreator 2013-12-12T12:14:12
#
#-------------------------------------------------

QT      += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET 		= UUIDer
TEMPLATE 	= app

# header files.
HEADERS  += UUIDerMainWindow.hpp \
    UUIDDatabase.hpp \
    UUIDTypes.hpp \
    UUIDGenerator.hpp \
    QUuid_Ext.hpp \
    UUIDerAboutDialog.hpp \
    UUIDerApp.hpp \
    RandomStringGenerator.hpp
#

# source files.
SOURCES += main.cpp\
        UUIDerMainWindow.cpp \
    UUIDDatabase.cpp \
    UUIDGenerator.cpp \
    QUuid_Ext.cpp \
    UUIDerAboutDialog.cpp \
    UUIDerApp.cpp \
    RandomStringGenerator.cpp
#

# forms
FORMS    += UUIDerMainWindow.ui \
    UUIDerAboutDialog.ui
#

# compile flags
CONFIG += c++11
QMAKE_CXXFLAGS_WARN_ON
#
