#include <QtGui>

#include "ksc.h"
#include "ui_ksc.h"
#include "kdebug.h"
#include "networkconnectionmanager.h"

ksc::ksc(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);

    //prova....
    NetworkConnectionManager *netManager;
    netManager = new NetworkConnectionManager();
     if ( netManager->isNetworkAvailable() )
    {
        kDebug() << " connected";
     }
     else
     {
        kDebug() << "not connected";
     }


}

ksc::~ksc()
{
}

void ksc::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        retranslateUi(this);
        break;
    default:
        break;
    }
}
