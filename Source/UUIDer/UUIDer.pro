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
    UUIDTypes.hpp
#

# source files.
SOURCES += main.cpp\
        UUIDerMainWindow.cpp \
    UUIDDatabase.cpp
#

# forms
FORMS    += UUIDerMainWindow.ui
#

# compile flags
win32{
    greaterThan(QT_MAJOR_VERSION, 4): CONFIG += C++11
} else {
    QMAKE_CXXFLAGS += -std=c++11 # temp sln until Mac Qt version is updated to 5.2
}
QMAKE_CXXFLAGS_WARN_ON
#
