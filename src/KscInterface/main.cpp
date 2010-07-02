#include <QtGui/QApplication>
#include "ksc.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ksc w;
    w.show();

    return a.exec();
}
