#include "networkconnectionmanager.h"

// kdelibs specific include
#include "kdebug.h"

#include <QList>

// solid specific include
#include "solid/networking.h"
#include "solid/device.h"

#include "PackageKit/packagekit-qt/QPackageKit"
#include "client.h"


NetworkConnectionManager::NetworkConnectionManager(QObject *parent) :
    QObject(parent)
{    
}

NetworkConnectionManager::~NetworkConnectionManager()
{
}


// ToDo: migrate to solid
/*void NetworkConnectionManager::findNetworkInterface()
{

    // get a  list of network interface ( list from type require a solid device interface type )
    QList<Solid::Device> networkDeviceList = Solid::Device::listFromType( Solid::DeviceInterface::NetworkInterface, QString() );

    //check to see if no network devices were found
     if( networkDeviceList .empty() )
     {
        kDebug() << "No network devices found!";
    }


}*/


/**
  * Verify if system is connected and network is available
  * @return bool value, true if connected
  */
bool NetworkConnectionManager::isNetworkAvailable()
{

    //ToDo migrate to solid
    /*
    if ( Solid::Networking::status() == Solid::Networking::Connected )
    {
        kDebug() << " Status connected, netwrok available";
        return true;
    }
    else
    {
        return false;
    }
    */

    PackageKit::Client  * packagekitClient = NULL;
    packagekitClient = PackageKit::Client::instance();

    // network state
     if ( !( packagekitClient->networkState() == PackageKit::Client::NetworkOffline ) )
    {
        kDebug() << " Status connected, netwrok available";
        return true;
    }
    else
    {
        return false;
    }

}
