#ifndef NETWORKCONNECTIONMANAGER_H
#define NETWORKCONNECTIONMANAGER_H

#include <QObject>

/**
  * @author simag
  * @version 0.1
  * @note this class use KDE Solid
  * This class check if there are a network intervace aviable and store information about his status
  */
class NetworkConnectionManager : public QObject
{
    Q_OBJECT

public:
    NetworkConnectionManager(QObject *parent = 0);
    ~NetworkConnectionManager();
    bool isNetworkAvailable();

private:
    void findNetworkInterface();

signals:

public slots:

};

#endif // NETWORKCONNECTIONMANAGER_H
