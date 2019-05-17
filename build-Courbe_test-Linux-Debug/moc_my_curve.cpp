/****************************************************************************
** Meta object code from reading C++ file 'my_curve.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Courbe_test/my_curve.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'my_curve.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyCurve_t {
    QByteArrayData data[17];
    char stringdata[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MyCurve_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MyCurve_t qt_meta_stringdata_MyCurve = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 15),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 16),
QT_MOC_LITERAL(4, 42, 16),
QT_MOC_LITERAL(5, 59, 13),
QT_MOC_LITERAL(6, 73, 13),
QT_MOC_LITERAL(7, 87, 13),
QT_MOC_LITERAL(8, 101, 13),
QT_MOC_LITERAL(9, 115, 13),
QT_MOC_LITERAL(10, 129, 7),
QT_MOC_LITERAL(11, 137, 8),
QT_MOC_LITERAL(12, 146, 5),
QT_MOC_LITERAL(13, 152, 5),
QT_MOC_LITERAL(14, 158, 5),
QT_MOC_LITERAL(15, 164, 5),
QT_MOC_LITERAL(16, 170, 5)
    },
    "MyCurve\0x_start_Changed\0\0x_length_Changed\0"
    "y_length_Changed\0y_min_Changed\0"
    "y_max_Changed\0decal_Changed\0stepx_Changed\0"
    "stepy_Changed\0x_start\0x_length\0y_min\0"
    "y_max\0decal\0stepx\0stepy\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyCurve[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       7,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x05,
       3,    0,   55,    2, 0x05,
       4,    0,   56,    2, 0x05,
       5,    0,   57,    2, 0x05,
       6,    0,   58,    2, 0x05,
       7,    0,   59,    2, 0x05,
       8,    0,   60,    2, 0x05,
       9,    0,   61,    2, 0x05,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Float, 0x00495003,
      11, QMetaType::Float, 0x00495003,
      12, QMetaType::Float, 0x00495003,
      13, QMetaType::Float, 0x00495003,
      14, QMetaType::Float, 0x00495003,
      15, QMetaType::Float, 0x00495003,
      16, QMetaType::Float, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

void MyCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyCurve *_t = static_cast<MyCurve *>(_o);
        switch (_id) {
        case 0: _t->x_start_Changed(); break;
        case 1: _t->x_length_Changed(); break;
        case 2: _t->y_length_Changed(); break;
        case 3: _t->y_min_Changed(); break;
        case 4: _t->y_max_Changed(); break;
        case 5: _t->decal_Changed(); break;
        case 6: _t->stepx_Changed(); break;
        case 7: _t->stepy_Changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyCurve::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyCurve::x_start_Changed)) {
                *result = 0;
            }
        }
        {
            typedef void (MyCurve::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyCurve::x_length_Changed)) {
                *result = 1;
            }
        }
        {
            typedef void (MyCurve::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyCurve::y_length_Changed)) {
                *result = 2;
            }
        }
        {
            typedef void (MyCurve::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyCurve::y_min_Changed)) {
                *result = 3;
            }
        }
        {
            typedef void (MyCurve::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyCurve::y_max_Changed)) {
                *result = 4;
            }
        }
        {
            typedef void (MyCurve::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyCurve::decal_Changed)) {
                *result = 5;
            }
        }
        {
            typedef void (MyCurve::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyCurve::stepx_Changed)) {
                *result = 6;
            }
        }
        {
            typedef void (MyCurve::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyCurve::stepy_Changed)) {
                *result = 7;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MyCurve::staticMetaObject = {
    { &QQuickPaintedItem::staticMetaObject, qt_meta_stringdata_MyCurve.data,
      qt_meta_data_MyCurve,  qt_static_metacall, 0, 0}
};


const QMetaObject *MyCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyCurve.stringdata))
        return static_cast<void*>(const_cast< MyCurve*>(this));
    return QQuickPaintedItem::qt_metacast(_clname);
}

int MyCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = get_x_start(); break;
        case 1: *reinterpret_cast< float*>(_v) = get_x_length(); break;
        case 2: *reinterpret_cast< float*>(_v) = get_y_min(); break;
        case 3: *reinterpret_cast< float*>(_v) = get_y_max(); break;
        case 4: *reinterpret_cast< float*>(_v) = get_decal(); break;
        case 5: *reinterpret_cast< float*>(_v) = get_stepx(); break;
        case 6: *reinterpret_cast< float*>(_v) = get_stepy(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: set_x_start(*reinterpret_cast< float*>(_v)); break;
        case 1: set_x_length(*reinterpret_cast< float*>(_v)); break;
        case 2: set_y_min(*reinterpret_cast< float*>(_v)); break;
        case 3: set_y_max(*reinterpret_cast< float*>(_v)); break;
        case 4: set_decal(*reinterpret_cast< float*>(_v)); break;
        case 5: set_stepx(*reinterpret_cast< float*>(_v)); break;
        case 6: set_stepy(*reinterpret_cast< float*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MyCurve::x_start_Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MyCurve::x_length_Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MyCurve::y_length_Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MyCurve::y_min_Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void MyCurve::y_max_Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void MyCurve::decal_Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void MyCurve::stepx_Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void MyCurve::stepy_Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
