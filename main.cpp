#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    a.setWindowIcon(QIcon("/home/narek/Projects/Calculator/Calculator_512.png"));
    w.show();
    return a.exec();
}
