/****************************************************************************
** Meta object code from reading C++ file 'beziercurve.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Courbe_test/beziercurve.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'beziercurve.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BezierCurve_t {
    QByteArrayData data[14];
    char stringdata[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BezierCurve_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BezierCurve_t qt_meta_stringdata_BezierCurve = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 9),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 1),
QT_MOC_LITERAL(4, 25, 9),
QT_MOC_LITERAL(5, 35, 9),
QT_MOC_LITERAL(6, 45, 9),
QT_MOC_LITERAL(7, 55, 19),
QT_MOC_LITERAL(8, 75, 5),
QT_MOC_LITERAL(9, 81, 2),
QT_MOC_LITERAL(10, 84, 2),
QT_MOC_LITERAL(11, 87, 2),
QT_MOC_LITERAL(12, 90, 2),
QT_MOC_LITERAL(13, 93, 12)
    },
    "BezierCurve\0p1Changed\0\0p\0p2Changed\0"
    "p3Changed\0p4Changed\0segmentCountChanged\0"
    "count\0p1\0p2\0p3\0p4\0segmentCount\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BezierCurve[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x05,
       4,    1,   42,    2, 0x05,
       5,    1,   45,    2, 0x05,
       6,    1,   48,    2, 0x05,
       7,    1,   51,    2, 0x05,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::Int,    8,

 // properties: name, type, flags
       9, QMetaType::QPointF, 0x00495103,
      10, QMetaType::QPointF, 0x00495103,
      11, QMetaType::QPointF, 0x00495103,
      12, QMetaType::QPointF, 0x00495103,
      13, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void BezierCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BezierCurve *_t = static_cast<BezierCurve *>(_o);
        switch (_id) {
        case 0: _t->p1Changed((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 1: _t->p2Changed((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 2: _t->p3Changed((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 3: _t->p4Changed((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 4: _t->segmentCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BezierCurve::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BezierCurve::p1Changed)) {
                *result = 0;
            }
        }
        {
            typedef void (BezierCurve::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BezierCurve::p2Changed)) {
                *result = 1;
            }
        }
        {
            typedef void (BezierCurve::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BezierCurve::p3Changed)) {
                *result = 2;
            }
        }
        {
            typedef void (BezierCurve::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BezierCurve::p4Changed)) {
                *result = 3;
            }
        }
        {
            typedef void (BezierCurve::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BezierCurve::segmentCountChanged)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject BezierCurve::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_BezierCurve.data,
      qt_meta_data_BezierCurve,  qt_static_metacall, 0, 0}
};


const QMetaObject *BezierCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BezierCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BezierCurve.stringdata))
        return static_cast<void*>(const_cast< BezierCurve*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int BezierCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = p1(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = p2(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = p3(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = p4(); break;
        case 4: *reinterpret_cast< int*>(_v) = segmentCount(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setP1(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: setP2(*reinterpret_cast< QPointF*>(_v)); break;
        case 2: setP3(*reinterpret_cast< QPointF*>(_v)); break;
        case 3: setP4(*reinterpret_cast< QPointF*>(_v)); break;
        case 4: setSegmentCount(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BezierCurve::p1Changed(const QPointF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BezierCurve::p2Changed(const QPointF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BezierCurve::p3Changed(const QPointF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BezierCurve::p4Changed(const QPointF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BezierCurve::segmentCountChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
