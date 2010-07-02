#include "kscdaemon.h"
#include <iostream>
#include <KDE/KDialog>

using namespace std;

#define firstSleep 360 //Time before first scan
#define nextSleep 21600 //Time after first scan;

kscDaemon::kscDaemon()
{
}

//KSC Daemon initializer

void kscDaemon::initDaemon(){

    int numOfUpdate = 0;

    sleep(firstSleep);

    while(1){

        numOfUpdate = searchUpdate();

        if(numOfUpdate >= 1){
            sendNotification();
        }

        sleep(nextSleep);
    }
}

int kscDaemon::searchUpdate(){

    return 0;
}

void kscDaemon::sendNotification(int nUp){

    KDialog msg;

}
