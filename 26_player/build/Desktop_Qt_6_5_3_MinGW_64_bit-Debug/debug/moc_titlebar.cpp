/****************************************************************************
** Meta object code from reading C++ file 'titlebar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../titlebar.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'titlebar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTitleBarENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTitleBarENDCLASS = QtMocHelpers::stringData(
    "TitleBar",
    "sigClose",
    "",
    "sigOpenFile",
    "sigOpenFolder",
    "do_setFileName",
    "fileName",
    "on_btnLogo_clicked",
    "checked",
    "on_btnMin_clicked",
    "on_btnMax_clicked",
    "on_btnClose_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTitleBarENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[9];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[14];
    char stringdata5[15];
    char stringdata6[9];
    char stringdata7[19];
    char stringdata8[8];
    char stringdata9[18];
    char stringdata10[18];
    char stringdata11[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTitleBarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTitleBarENDCLASS_t qt_meta_stringdata_CLASSTitleBarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "TitleBar"
        QT_MOC_LITERAL(9, 8),  // "sigClose"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 11),  // "sigOpenFile"
        QT_MOC_LITERAL(31, 13),  // "sigOpenFolder"
        QT_MOC_LITERAL(45, 14),  // "do_setFileName"
        QT_MOC_LITERAL(60, 8),  // "fileName"
        QT_MOC_LITERAL(69, 18),  // "on_btnLogo_clicked"
        QT_MOC_LITERAL(88, 7),  // "checked"
        QT_MOC_LITERAL(96, 17),  // "on_btnMin_clicked"
        QT_MOC_LITERAL(114, 17),  // "on_btnMax_clicked"
        QT_MOC_LITERAL(132, 19)   // "on_btnClose_clicked"
    },
    "TitleBar",
    "sigClose",
    "",
    "sigOpenFile",
    "sigOpenFolder",
    "do_setFileName",
    "fileName",
    "on_btnLogo_clicked",
    "checked",
    "on_btnMin_clicked",
    "on_btnMax_clicked",
    "on_btnClose_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTitleBarENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,
       4,    0,   64,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   65,    2, 0x0a,    4 /* Public */,
       7,    1,   68,    2, 0x08,    6 /* Private */,
       9,    0,   71,    2, 0x08,    8 /* Private */,
      10,    0,   72,    2, 0x08,    9 /* Private */,
      11,    0,   73,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TitleBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTitleBarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTitleBarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTitleBarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TitleBar, std::true_type>,
        // method 'sigClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sigOpenFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sigOpenFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'do_setFileName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_btnLogo_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_btnMin_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnMax_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnClose_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TitleBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sigClose(); break;
        case 1: _t->sigOpenFile(); break;
        case 2: _t->sigOpenFolder(); break;
        case 3: _t->do_setFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_btnLogo_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->on_btnMin_clicked(); break;
        case 6: _t->on_btnMax_clicked(); break;
        case 7: _t->on_btnClose_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TitleBar::*)();
            if (_t _q_method = &TitleBar::sigClose; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)();
            if (_t _q_method = &TitleBar::sigOpenFile; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)();
            if (_t _q_method = &TitleBar::sigOpenFolder; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *TitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTitleBarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void TitleBar::sigClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TitleBar::sigOpenFile()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TitleBar::sigOpenFolder()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
