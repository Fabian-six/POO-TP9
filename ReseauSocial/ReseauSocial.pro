TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Date.cpp \
    Message.cpp \
    PublicMessage.cpp

HEADERS += \
    Date.h \
    Message.h \
    PublicMessage.h
