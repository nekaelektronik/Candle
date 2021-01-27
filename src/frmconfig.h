// Added to Candle by Ne-Ka Elektronik
// www.ne-ka.com.tr

// This file is a part of "Candle" application.
// Copyright 2015-2016 Hayrullin Denis Ravilevich

#ifndef FRMCONFIG_H
#define FRMCONFIG_H

#include <QDialog>
#include <QDoubleValidator>

namespace Ui {
class frmConfig;
}

class frmConfig : public QDialog
{
    Q_OBJECT

public:
    explicit frmConfig(QWidget *parent = 0);
    ~frmConfig();
    int exec();

    void setStepPulseTime(QString step_pulse_time);
    void setStepIdleDelay(QString step_idle_delay);

    void setStepPulseInv(QString step_pulse_inv);
    void setStepDirInv(QString step_dir_inv);
    void setStepEnInv(QString step_en_inv);
    void setLimitInv(QString limit_inv);
    void setProbeInv(QString probe_inv);

    void setJunctionDeviation(QString junction_deviation);
    void setArcTolerance(QString arc_tolerance);

    void setStatusReport(QString status_report);
    void setInches(QString inches);

    void setSoftLimits(QString soft_limits);
    void setHardLimits(QString hard_limits);

    void setHomingDirInvert(QString homing_dir_inv);
    void setHomingEnable(QString homing_enable);
    void setLocateFeedRate(QString locate_feed_rate);
    void setSearchSeekRate(QString search_seek_rate);
    void setSwitchDebounce(QString switch_debounce);
    void setSwitchPullOff(QString switch_pull_off);

    void setMaxSpindle(QString max_spindle);
    void setMinSpindle(QString min_spindle);
    void setLaserMode(QString laser_mode);

    void setXStep(QString x_step);
    void setYStep(QString y_step);
    void setZStep(QString z_step);

    void setXRate(QString x_rate);
    void setYRate(QString y_rate);
    void setZRate(QString z_rate);

    void setXAccel(QString x_accel);
    void setYAccel(QString y_accel);
    void setZAccel(QString z_accel);

    void setXMaxTrav(QString x_max_trav);
    void setYMaxTrav(QString y_max_trav);
    void setZMaxTrav(QString z_max_trav);

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

    bool isStepPulseTimeChanged();
    bool isStepIdleDelayChanged();

    bool isStepPulseInvChanged();
    bool isStepDirInvChanged();
    bool isStepEnInvChanged();
    bool isLimitInvChanged();
    bool isProbeInvChanged();

    bool isJunctionDeviationChanged();
    bool isArcToleranceChanged();

    bool isStatusReportChanged();
    bool isInchesChanged();

    bool isSoftLimitsChanged();
    bool isHardLimitsChanged();

    bool isHomingDirInvertChanged();
    bool isHomingEnableChanged();
    bool isLocateFeedRateChanged();
    bool isSearchSeekRateChanged();
    bool isSwitchDebounceChanged();
    bool isSwitchPullOffChanged();

    bool isMaxSpindleChanged();
    bool isMinSpindleChanged();
    bool isLaserModeChanged();

    bool isXStepChanged();
    bool isYStepChanged();
    bool isZStepChanged();

    bool isXRateChanged();
    bool isYRateChanged();
    bool isZRateChanged();

    bool isXAccelChanged();
    bool isYAccelChanged();
    bool isZAccelChanged();

    bool isXMaxTravChanged();
    bool isYMaxTravChanged();
    bool isZMaxTravChanged();

private:
    Ui::frmConfig *ui;

    QString step_pulse_time;
    QString step_idle_delay;

    QString step_pulse_inv;
    QString step_dir_inv;
    QString step_en_inv;
    QString limit_inv;
    QString probe_inv;

    QString junction_deviation;
    QString arc_tolerance;

    QString status_report;
    QString inches;

    QString soft_limits;
    QString hard_limits;

    int homing_enable_current;
    QString homing_dir_inv;
    QString homing_enable;
    QString locate_feed_rate;
    QString search_seek_rate;
    QString switch_debounce;
    QString switch_pull_off;

    QString max_spindle;
    QString min_spindle;
    QString laser_mode;

    QString x_step;
    QString y_step;
    QString z_step;

    QString x_rate;
    QString y_rate;
    QString z_rate;

    QString x_accel;
    QString y_accel;
    QString z_accel;

    QString x_max_trav;
    QString y_max_trav;
    QString z_max_trav;

    QString step_pulse_inv_new;
    QString step_dir_inv_new;
    QString home_inv_new;

    QDoubleValidator m_doubleValidator;
    QRegExpValidator m_regExpValidator;

private slots:
    void test(int state);
};

#endif // FRMCONFIG_H
