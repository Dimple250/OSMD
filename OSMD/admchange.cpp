#include "admchange.h"
#include "ui_admchange.h"

AdmChange::AdmChange(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdmChange)
{
    ui->setupUi(this);
}

AdmChange::~AdmChange()
{
    delete ui;
}
