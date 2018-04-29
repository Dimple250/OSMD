#ifndef ADMCHANGE_H
#define ADMCHANGE_H

#include <QDialog>

namespace Ui {
class AdmChange;
}

class AdmChange : public QDialog
{
    Q_OBJECT

public:
    explicit AdmChange(QWidget *parent = 0);
    ~AdmChange();

private:
    Ui::AdmChange *ui;
};

#endif // ADMCHANGE_H
