/****************************************************************************
** Meta object code from reading C++ file 'C_CADRE.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "C_CADRE.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'C_CADRE.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_C_CADRE_t {
    QByteArrayData data[8];
    char stringdata[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_C_CADRE_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_C_CADRE_t qt_meta_stringdata_C_CADRE = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 28),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 8),
QT_MOC_LITERAL(4, 47, 12),
QT_MOC_LITERAL(5, 60, 5),
QT_MOC_LITERAL(6, 66, 12),
QT_MOC_LITERAL(7, 79, 5)
    },
    "C_CADRE\0Slot_Recuperer_Valeur_Slider\0"
    "\0P_Valeur\0Slot_Get_Min\0P_Min\0Slot_Get_Max\0"
    "P_Max\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_C_CADRE[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x09,
       4,    1,   32,    2, 0x09,
       6,    1,   35,    2, 0x09,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void C_CADRE::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        C_CADRE *_t = static_cast<C_CADRE *>(_o);
        switch (_id) {
        case 0: _t->Slot_Recuperer_Valeur_Slider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->Slot_Get_Min((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->Slot_Get_Max((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject C_CADRE::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_C_CADRE.data,
      qt_meta_data_C_CADRE,  qt_static_metacall, 0, 0}
};


const QMetaObject *C_CADRE::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *C_CADRE::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_C_CADRE.stringdata))
        return static_cast<void*>(const_cast< C_CADRE*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int C_CADRE::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
