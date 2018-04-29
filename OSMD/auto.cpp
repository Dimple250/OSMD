#include "auto.h"
#include "ui_auto.h"

Auto::Auto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Auto)
{
    ui->setupUi(this);

    db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("osmd");
    db.setUserName("root");
    db.setPassword("233685614");

    if(!db.open()){
        qDebug()<<"NO";
    }

    connect(ui->enter,SIGNAL(clicked(bool)),SLOT(userCheck()));
}

Auto::~Auto()
{
    delete ui;
}

void Auto::userCheck(){
    QSqlQuery check;
    QString log=("select login from users where login like '"+ui->login->text()+"';");
    QString pass=("select pass from users where pass like '"+ui->pass->text()+"';");

    check.exec(log);
    check.next();
    QString login=check.value(0).toString();

    check.exec(pass);
    check.next();
    QString password=check.value(0).toString();

    if(ui->login->text()==login){
        if(ui->pass->text()==password){
         this->hide();
         adminForm.show();
        }
     }
}
