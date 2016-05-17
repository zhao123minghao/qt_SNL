TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    lex.cpp \
    file_operation.cpp \
    ll1.cpp

HEADERS += \
    base.h \
    lex.h \
    lex_type.h \
    file_operation.h \
    ll1.h \
    predict.h
