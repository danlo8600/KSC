#include <QtGui>

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
    cout << "Click! I show you Software" << endl;
}

void ksc::on_btnCodec_clicked()
{
    //TODO: Implement a "Codec View".
    cout << "Click! I show you Codecs!" << endl;
}

void ksc::on_btnAdvance_clicked()
{
    //TODO: Implement an Advance View.
    cout << "Click! I show you Advanced View!" << endl;
}

void ksc::on_btnUpdate_clicked()
{
    //TODO: Implement an Advance View.
    cout << "Click! I show you Update monitor!" << endl;
}

void ksc::on_btnSource_clicked()
{
    //TODO: What is "Source"?
    cout << "Click! I show you Source.... ?" << endl;
}

void ksc::on_btnSearch_clicked()
{
    //TODO: Implement search and search-view.
    cout << "Click! I search for you... but I'm broken!" << endl;
}
