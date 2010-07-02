#ifndef KSCDAEMON_H
#define KSCDAEMON_H

#include <unistd.h>
#include <iostream>

using namespace std;

class kscDaemon
{

private:
    //Serch update
    int searchUpdate();

    //Send notification in KDE if there are upgrade
    void sendNotification(int nUp);

public:
    kscDaemon();
    //startDaemon
    void initDaemon();

};

#endif // KSCDAEMON_H
