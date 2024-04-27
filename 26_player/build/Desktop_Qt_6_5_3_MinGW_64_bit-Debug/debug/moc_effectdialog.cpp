/****************************************************************************
** Meta object code from reading C++ file 'effectdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../effectdialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'effectdialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSEffectDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSEffectDialogENDCLASS = QtMocHelpers::stringData(
    "EffectDialog",
    "sigSendSpeedValue",
    "",
    "value",
    "sigSendFastForwardValue",
    "sigBrightnessValue",
    "on_listWidget_currentTextChanged",
    "currentText",
    "on_hSdrSpeed_valueChanged",
    "on_rBtn5_clicked",
    "on_rBtn10_clicked",
    "on_rBtn30_clicked",
    "on_hSdrBrightness_valueChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSEffectDialogENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[13];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[24];
    char stringdata5[19];
    char stringdata6[33];
    char stringdata7[12];
    char stringdata8[26];
    char stringdata9[17];
    char stringdata10[18];
    char stringdata11[18];
    char stringdata12[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSEffectDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSEffectDialogENDCLASS_t qt_meta_stringdata_CLASSEffectDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "EffectDialog"
        QT_MOC_LITERAL(13, 17),  // "sigSendSpeedValue"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 5),  // "value"
        QT_MOC_LITERAL(38, 23),  // "sigSendFastForwardValue"
        QT_MOC_LITERAL(62, 18),  // "sigBrightnessValue"
        QT_MOC_LITERAL(81, 32),  // "on_listWidget_currentTextChanged"
        QT_MOC_LITERAL(114, 11),  // "currentText"
        QT_MOC_LITERAL(126, 25),  // "on_hSdrSpeed_valueChanged"
        QT_MOC_LITERAL(152, 16),  // "on_rBtn5_clicked"
        QT_MOC_LITERAL(169, 17),  // "on_rBtn10_clicked"
        QT_MOC_LITERAL(187, 17),  // "on_rBtn30_clicked"
        QT_MOC_LITERAL(205, 30)   // "on_hSdrBrightness_valueChanged"
    },
    "EffectDialog",
    "sigSendSpeedValue",
    "",
    "value",
    "sigSendFastForwardValue",
    "sigBrightnessValue",
    "on_listWidget_currentTextChanged",
    "currentText",
    "on_hSdrSpeed_valueChanged",
    "on_rBtn5_clicked",
    "on_rBtn10_clicked",
    "on_rBtn30_clicked",
    "on_hSdrBrightness_valueChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSEffectDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       4,    1,   71,    2, 0x06,    3 /* Public */,
       5,    1,   74,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   77,    2, 0x08,    7 /* Private */,
       8,    1,   80,    2, 0x08,    9 /* Private */,
       9,    0,   83,    2, 0x08,   11 /* Private */,
      10,    0,   84,    2, 0x08,   12 /* Private */,
      11,    0,   85,    2, 0x08,   13 /* Private */,
      12,    1,   86,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject EffectDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSEffectDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSEffectDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSEffectDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EffectDialog, std::true_type>,
        // method 'sigSendSpeedValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sigSendFastForwardValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sigBrightnessValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_listWidget_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_hSdrSpeed_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_rBtn5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rBtn10_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rBtn30_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_hSdrBrightness_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void EffectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EffectDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sigSendSpeedValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->sigSendFastForwardValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->sigBrightnessValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_listWidget_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_hSdrSpeed_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_rBtn5_clicked(); break;
        case 6: _t->on_rBtn10_clicked(); break;
        case 7: _t->on_rBtn30_clicked(); break;
        case 8: _t->on_hSdrBrightness_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EffectDialog::*)(int );
            if (_t _q_method = &EffectDialog::sigSendSpeedValue; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EffectDialog::*)(int );
            if (_t _q_method = &EffectDialog::sigSendFastForwardValue; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EffectDialog::*)(int );
            if (_t _q_method = &EffectDialog::sigBrightnessValue; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *EffectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EffectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSEffectDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EffectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void EffectDialog::sigSendSpeedValue(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EffectDialog::sigSendFastForwardValue(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EffectDialog::sigBrightnessValue(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
