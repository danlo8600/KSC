#include <QtGui>

#include "ksc.h"
#include "ui_ksc.h"

ksc::ksc(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);
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
