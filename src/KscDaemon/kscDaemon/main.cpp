#include <QtCore/QCoreApplication>
#include <kscdaemon.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    kscDaemon in;
    in.initDaemon();
    return a.exec();
}
