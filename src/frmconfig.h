#ifndef FRMCONFIG_H
#define FRMCONFIG_H

#include <QDialog>

namespace Ui {
class frmConfig;
}

class frmConfig : public QDialog
{
    Q_OBJECT

public:
    explicit frmConfig(QWidget *parent = 0);
    ~frmConfig();

    void setXStep(double x_step);
    void setYStep(double y_step);
    void setZStep(double z_step);

    double getXStep();
    double getYStep();
    double getZStep();

    double getXRate();
    double getYRate();
    double getZRate();

    double getXAccel();
    double getYAccel();
    double getZAccel();

    double getXMaxTrav();
    double getYMaxTrav();
    double getZMaxTrav();

private:
    Ui::frmConfig *ui;

    double x_step;
    double y_step;
    double z_step;
};

#endif // FRMCONFIG_H
