#include "mainwindow.h"
#include "menu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.resize(640, 480);
    w.setWindowTitle("Mupen64Plus-rr");
    w.show();
    return a.exec();
}
