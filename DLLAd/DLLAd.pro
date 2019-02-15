QT       += core gui widgets serialport multimedia multimediawidgets

TARGET = DLLAD
TEMPLATE = lib

DEFINES += DLLAD_LIBRARY

DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DLLAd.cpp \
    DLLAdEngine.cpp

HEADERS += \
    DLLAd.h \
    DLLAd_global.h \
    DLLAdEngine.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS += \
    DLLAdEngine.ui
