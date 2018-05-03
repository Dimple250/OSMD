#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "admchange.h"
#include <qdebug.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    AdmChange admchange;
    int idPressButton;

private:
    Ui::MainWindow *ui;
public slots:
    void openAdmAddUser();
    void openAdmChangeUser();
    void openAdmChangePriv();
    void openAdmChangePrice();
    void openAdmAddNews();
};

#endif // MAINWINDOW_H
