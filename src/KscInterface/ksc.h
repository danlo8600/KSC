#ifndef KSC_H
#define KSC_H

#include <QMainWindow>
#include "ui_ksc.h"

class ksc : public QMainWindow, public Ui::KubuntuSoftwareCenter {
    Q_OBJECT
public:
    ksc(QWidget *parent = 0);
    ~ksc();

protected:
    void changeEvent(QEvent *e);
};

#endif // KSC_H
