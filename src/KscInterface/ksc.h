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

private slots:
    void on_btnSearch_clicked();
    void on_btnSource_clicked();
    void on_btnUpdate_clicked();
    void on_btnAdvance_clicked();
    void on_btnCodec_clicked();
    void on_btnSoftware_clicked();
};

#endif // KSC_H
