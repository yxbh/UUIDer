#-------------------------------------------------
#
# Project created by QtCreator 2013-12-11T20:05:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UUIDer
TEMPLATE = app


# header files.
HEADERS  += \
	UUIDerMainWindow.hpp
#

# source files.
SOURCES += main.cpp \
    UUIDerMainWindow.cpp
#


# GUI forms
FORMS    += mainwindow.ui
#

# compilation flags
CONFIG += c++11
