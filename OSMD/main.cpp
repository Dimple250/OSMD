//#include "mainwindow.h"
#include <QApplication>
#include "auto.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
    Auto vhod;
    vhod.show();
   // if(vhod.userCheck()==true){
     //   vhod.close();
       // w.show();
    //}else{

    //}

    return a.exec();
}
