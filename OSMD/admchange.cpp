#include "admchange.h"
#include "ui_admchange.h"

AdmChange::AdmChange(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdmChange)
{
    ui->setupUi(this);
    ui->frameAddUser->setHidden(true);
    ui->frameChangePrice->setHidden(true);
    ui->frameChangePriv->setHidden(true);
    ui->frameChangeUser->setHidden(true);
    ui->frameChangeNews->setHidden(true);
}

AdmChange::~AdmChange()
{
    delete ui;
}
void AdmChange::openFrame(int id){
    ui->frameAddUser->setHidden(true);
    ui->frameChangePrice->setHidden(true);
    ui->frameChangePriv->setHidden(true);
    ui->frameChangeUser->setHidden(true);
    ui->frameChangeNews->setHidden(true);

    switch (id) {
    case 1:{
         ui->frameAddUser->setHidden(false);
        break;
    }
    case 2:{
         ui->frameChangeUser->setHidden(false);
        break;
    }
    case 3:{
         ui->frameChangePriv->setHidden(false);
        break;
    }
    case 4:{
         ui->frameChangePrice->setHidden(false);
        break;
    }
    case 5:{
         ui->frameChangeNews->setHidden(false);
        break;
    }
    default:
        break;
    }
}
