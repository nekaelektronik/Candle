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

    QString getStepPulseTime();
    QString getStepIdleDelay();

    QString getStepPulseInv();
    QString getStepDirInv();
    QString getStepEnInv();
    QString getLimitInv();
    QString getProbeInv();

    QString getJunctionDeviation();
    QString getArcTolerance();

    QString getStatusReport();
    QString getInches();

    QString getSoftLimits();
    QString getHardLimits();

    QString getHomingDirInvert();
    QString getHomingEnable();
    QString getLocateFeedRate();
    QString getSearchSeekRate();
    QString getSwitchDebounce();
    QString getSwitchPullOff();

    QString getMaxSpindle();
    QString getMinSpindle();
    QString getLaserMode();

    QString getXStep();
    QString getYStep();
    QString getZStep();

    QString getXRate();
    QString getYRate();
    QString getZRate();

    QString getXAccel();
    QString getYAccel();
    QString getZAccel();

    QString getXMaxTrav();
    QString getYMaxTrav();
    QString getZMaxTrav();

private:
    Ui::frmConfig *ui;

    double x_step;
    double y_step;
    double z_step;
};

#endif // FRMCONFIG_H
