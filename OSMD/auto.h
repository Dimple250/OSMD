#ifndef AUTO_H
#define AUTO_H

#include <QWidget>
#include <qdebug.h>
#include <QtSql>
#include "mainwindow.h"

namespace Ui {
class Auto;
}

class Auto : public QWidget
{
    Q_OBJECT

public:
    explicit Auto(QWidget *parent = 0);
    ~Auto();
    QSqlDatabase db;
    MainWindow adminForm;

private:
    Ui::Auto *ui;
public slots:
    void userCheck();
};

#endif // AUTO_H
