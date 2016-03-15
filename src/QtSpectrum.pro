#-------------------------------------------------
#
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtSpectrum
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    spectralone.cpp \
    spectralplot.cpp \
    gswindow.cpp

HEADERS  += \
    GsWindow.h \
    MainWindow.h \
    SpectralOne.h \
    SpectralPlot.h

FORMS    += mainwindow.ui \
    gswindow.ui \
    spectralone.ui \
    spectralplot.ui
