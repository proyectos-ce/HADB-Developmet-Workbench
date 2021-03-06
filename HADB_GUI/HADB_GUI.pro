#-------------------------------------------------
#
# Project created by QtCreator 2017-06-14T12:20:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HADB_GUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    menu.cpp \
    show_tables.cpp \
    show_nodes.cpp \
    show_database.cpp \
    show_structure.cpp \
    create_table.cpp \
    drop_table.cpp \
    create_index.cpp \
    manage_database.cpp \
    table.cpp \
    connectionmanager.cpp \
    comunication_handler.cpp \
    jsonutils.cpp

HEADERS  += mainwindow.h \
    menu.h \
    show_tables.h \
    show_nodes.h \
    show_database.h \
    show_structure.h \
    create_table.h \
    drop_table.h \
    create_index.h \
    manage_database.h \
    table.h \
    connectionmanager.h \
    ../../../../Descargas/json.hpp \
    json.hpp \
    comunication_handler.h \
    jsonutils.h

FORMS    += mainwindow.ui \
    menu.ui \
    show_tables.ui \
    show_nodes.ui \
    show_database.ui \
    show_structure.ui \
    create_table.ui \
    drop_table.ui \
    create_index.ui \
    manage_database.ui
