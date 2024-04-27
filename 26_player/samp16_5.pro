QT       += core gui

QT  += multimedia   multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    btnshowlist.cpp \
    effectdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    mybtnsound.cpp \
    slidervolumndialog.cpp \
    titlebar.cpp \
    tmyvideowidget.cpp

HEADERS += \
    btnshowlist.h \
    effectdialog.h \
    mainwindow.h \
    mybtnsound.h \
    slidervolumndialog.h \
    titlebar.h \
    tmyvideowidget.h

FORMS += \
    effectdialog.ui \
    mainwindow.ui \
    slidervolumndialog.ui \
    titlebar.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc


##包含路径
INCLUDEPATH += D:\Qt\visiondev\opencv\opencv_build\install\include
##库文件
LIBS += D:\Qt\visiondev\opencv\opencv_build\lib\libopencv_*.a

