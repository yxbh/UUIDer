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
    QUuid_Ext.hpp
#

# source files.
SOURCES += main.cpp\
        UUIDerMainWindow.cpp \
    UUIDDatabase.cpp \
    UUIDGenerator.cpp \
    QUuid_Ext.cpp
#

# forms
FORMS    += UUIDerMainWindow.ui
#

# compile flags
win32{
    greaterThan(QT_MAJOR_VERSION, 4): CONFIG += C++11
} else {
    # temp sln until Mac Qt version is updated to 5.2
    # still getting "invalid deployment target for -stdlib=libc++ (requires OX X 10.7 or later)" error.
    QMAKE_CXXFLAGS += -std=c++11
    QMAKE_CXXFLAGS += -stdlib=libc++
    QMAKE_CXXFLAGS += -mmacosx-version-min=10.7
    LIBS += -stdlib=libc++ -mmacosx-version-min=10.7
}
QMAKE_CXXFLAGS_WARN_ON
#
