/****************************************************************************
** Meta object code from reading C++ file 'KCFSelector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../KCFSelector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KCFSelector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KCFSelector_t {
    QByteArrayData data[10];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCFSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCFSelector_t qt_meta_stringdata_KCFSelector = {
    {
QT_MOC_LITERAL(0, 0, 11), // "KCFSelector"
QT_MOC_LITERAL(1, 12, 9), // "selectROI"
QT_MOC_LITERAL(2, 22, 6), // "Rect2d"
QT_MOC_LITERAL(3, 29, 0), // ""
QT_MOC_LITERAL(4, 30, 9), // "showFrame"
QT_MOC_LITERAL(5, 40, 12), // "processFrame"
QT_MOC_LITERAL(6, 53, 13), // "loadVideoName"
QT_MOC_LITERAL(7, 67, 11), // "std::string"
QT_MOC_LITERAL(8, 79, 15), // "outputVideoNmae"
QT_MOC_LITERAL(9, 95, 16) // "changeStreamMode"

    },
    "KCFSelector\0selectROI\0Rect2d\0\0showFrame\0"
    "processFrame\0loadVideoName\0std::string\0"
    "outputVideoNmae\0changeStreamMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCFSelector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    3, 0x08 /* Private */,
       4,    0,   45,    3, 0x08 /* Private */,
       5,    0,   46,    3, 0x08 /* Private */,
       6,    0,   47,    3, 0x08 /* Private */,
       8,    0,   48,    3, 0x08 /* Private */,
       9,    0,   49,    3, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 7,
    0x80000000 | 7,
    QMetaType::Bool,

       0        // eod
};

void KCFSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KCFSelector *_t = static_cast<KCFSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { Rect2d _r = _t->selectROI();
            if (_a[0]) *reinterpret_cast< Rect2d*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->showFrame(); break;
        case 2: _t->processFrame(); break;
        case 3: { std::string _r = _t->loadVideoName();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 4: { std::string _r = _t->outputVideoNmae();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->changeStreamMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KCFSelector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_KCFSelector.data,
      qt_meta_data_KCFSelector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *KCFSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCFSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KCFSelector.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int KCFSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
