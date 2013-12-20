/****************************************************************************
** Meta object code from reading C++ file 'UUIDerMainWindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Source/UUIDer/UUIDerMainWindow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UUIDerMainWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UUIDerMainWindow_t {
    QByteArrayData data[13];
    char stringdata[388];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_UUIDerMainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_UUIDerMainWindow_t qt_meta_stringdata_UUIDerMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 22),
QT_MOC_LITERAL(2, 40, 0),
QT_MOC_LITERAL(3, 41, 24),
QT_MOC_LITERAL(4, 66, 32),
QT_MOC_LITERAL(5, 99, 43),
QT_MOC_LITERAL(6, 143, 4),
QT_MOC_LITERAL(7, 148, 42),
QT_MOC_LITERAL(8, 191, 38),
QT_MOC_LITERAL(9, 230, 34),
QT_MOC_LITERAL(10, 265, 37),
QT_MOC_LITERAL(11, 303, 30),
QT_MOC_LITERAL(12, 334, 52)
    },
    "UUIDerMainWindow\0on_actionNew_triggered\0"
    "\0on_actionAbout_triggered\0"
    "on_PushButton_GenNewUUID_clicked\0"
    "on_CheckBox_DisplayCurlyBraces_stateChanged\0"
    "arg1\0on_CheckBox_DisplayUpperCases_stateChanged\0"
    "on_CheckBox_DisplayHypens_stateChanged\0"
    "on_Button_ClearTextBrowser_clicked\0"
    "on_PushButton_GenNewUUIDForDB_clicked\0"
    "on_PushButton_GetUUIDs_clicked\0"
    "on_CheckBox_UseRanDataForUUIDGeneration_stateChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UUIDerMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08,
       3,    0,   65,    2, 0x08,
       4,    0,   66,    2, 0x08,
       5,    1,   67,    2, 0x08,
       7,    1,   70,    2, 0x08,
       8,    1,   73,    2, 0x08,
       9,    0,   76,    2, 0x08,
      10,    0,   77,    2, 0x08,
      11,    0,   78,    2, 0x08,
      12,    1,   79,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void UUIDerMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UUIDerMainWindow *_t = static_cast<UUIDerMainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_actionNew_triggered(); break;
        case 1: _t->on_actionAbout_triggered(); break;
        case 2: _t->on_PushButton_GenNewUUID_clicked(); break;
        case 3: _t->on_CheckBox_DisplayCurlyBraces_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_CheckBox_DisplayUpperCases_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_CheckBox_DisplayHypens_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_Button_ClearTextBrowser_clicked(); break;
        case 7: _t->on_PushButton_GenNewUUIDForDB_clicked(); break;
        case 8: _t->on_PushButton_GetUUIDs_clicked(); break;
        case 9: _t->on_CheckBox_UseRanDataForUUIDGeneration_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject UUIDerMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_UUIDerMainWindow.data,
      qt_meta_data_UUIDerMainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *UUIDerMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UUIDerMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UUIDerMainWindow.stringdata))
        return static_cast<void*>(const_cast< UUIDerMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int UUIDerMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
