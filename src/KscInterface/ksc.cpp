#include <QtGui>
#include <QResource>
 #include <QString>

#include "ksc.h"
#include "ui_ksc.h"
#include "kdebug.h"
#include "networkconnectionmanager.h"

#include <iostream>
using namespace std;

ksc::ksc(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);
    
    NetworkConnectionManager *net;
    net = new NetworkConnectionManager();
    if (net->isNetworkAvailable())
        kDebug() <<"solid funziona...";
    else
        kDebug()<<"no";
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

void ksc::on_btnSoftware_clicked()
{
    //TODO: Call PackageKit for "software view".
    mainIcon->setPixmap(QPixmap(":/buttons/applications-other.png"));


}

void ksc::on_btnCodec_clicked()
{
    //TODO: Implement a "Codec View".
    mainIcon->setPixmap(QPixmap(":/buttons/applications-multimedia.png"));
}

void ksc::on_btnAdvance_clicked()
{
    //TODO: Implement an Advance View.
    mainIcon->setPixmap(QPixmap(":/buttons/applications-system.png"));
}

void ksc::on_btnUpdate_clicked()
{
    //TODO: Implement an Advance View.
    mainIcon->setPixmap(QPixmap(":/buttons/system-software-update.png"));
}

void ksc::on_btnSource_clicked()
{
    //TODO: What is "Source"?
    mainIcon->setPixmap(QPixmap(":/buttons/repository.png"));
}

void ksc::on_btnSearch_clicked()
{
    //TODO: Implement search and search-view.
    mainIcon->setPixmap(QPixmap(":/buttons/xmag.png"));
}
