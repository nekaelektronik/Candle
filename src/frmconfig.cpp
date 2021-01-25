#include "frmconfig.h"
#include "ui_frmconfig.h"
#include <QThread>
#include <QDebug>
#include <bitset>
#include <iostream>
#include <string>

frmConfig::frmConfig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmConfig)
{
    ui->setupUi(this);

    connect(ui->cbHomingCycle, SIGNAL(stateChanged(int)), this, SLOT(test(int)));
}

frmConfig::~frmConfig()
{
    delete ui;
}

int frmConfig::exec()
{
    // Step timing configs
    ui->txtStepPulse->setText(step_pulse_time);
    ui->txtStepIdle->setText(step_idle_delay);

    // Homing configs
    ui->cbHomingCycle->setChecked(homing_enable.toInt());

    std::bitset<3> homing_dir_inv_mask(homing_dir_inv.toInt());
    std::string homing_dir_inv_mask_string = homing_dir_inv_mask.to_string();
    ui->cbXHomeInv->setChecked(int(homing_dir_inv_mask_string[2] - '0'));
    ui->cbYHomeInv->setChecked(int(homing_dir_inv_mask_string[1] - '0'));
    ui->cbZHomeInv->setChecked(int(homing_dir_inv_mask_string[0] - '0'));

    ui->txtLocateFeed->setText(locate_feed_rate);
    ui->txtSearchSeek->setText(search_seek_rate);
    ui->txtSwitchDebounce->setText(switch_debounce);
    ui->txtSwitchPullOff->setText(switch_pull_off);

    // Invert configs
    std::bitset<3> step_pulse_inv_mask(step_pulse_inv.toInt());
    std::string step_pulse_inv_mask_string = step_pulse_inv_mask.to_string();
    ui->cbXStepPulseInv->setChecked(int(step_pulse_inv_mask_string[2] - '0'));
    ui->cbYStepPulseInv->setChecked(int(step_pulse_inv_mask_string[1] - '0'));
    ui->cbZStepPulseInv->setChecked(int(step_pulse_inv_mask_string[0] - '0'));

    std::bitset<3> step_dir_inv_mask(step_dir_inv.toInt());
    std::string step_dir_inv_mask_string = step_dir_inv_mask.to_string();
    ui->cbXStepDirInv->setChecked(int(step_dir_inv_mask_string[2] - '0'));
    ui->cbYStepDirInv->setChecked(int(step_dir_inv_mask_string[1] - '0'));
    ui->cbZStepDirInv->setChecked(int(step_dir_inv_mask_string[0] - '0'));

    ui->cbStepEnableInv->setChecked(step_en_inv.toInt());
    ui->cbLimitInv->setChecked(limit_inv.toInt());
    ui->cbProbeInv->setChecked(probe_inv.toInt());

    // Status report
    ui->comboBoxStatus->setCurrentIndex(status_report.toInt());

    // Tolerance configs
    ui->txtJunc->setText(junction_deviation);
    ui->txtArc->setText(arc_tolerance);

    // Report in inches
    ui->cbInch->setChecked(inches.toInt());

    // Limits configs
    ui->cbSoftLimit->setEnabled(homing_enable.toInt());
    ui->cbSoftLimit->setChecked(soft_limits.toInt());
    ui->cbHardLimit->setChecked(hard_limits.toInt());

    // Spindle and laser configs
    ui->txtMaxSpindle->setText(max_spindle);
    ui->txtMinSpindle->setText(min_spindle);
    ui->cbLaser->setChecked(laser_mode.toInt());

    // Step configs
    ui->txtXStep->setText(x_step);
    ui->txtYStep->setText(y_step);
    ui->txtZStep->setText(z_step);

    // Maximum rate configs
    ui->txtXRate->setText(x_rate);
    ui->txtYRate->setText(y_rate);
    ui->txtZRate->setText(z_rate);

    // Acceleration configs
    ui->txtXAccel->setText(x_accel);
    ui->txtYAccel->setText(y_accel);
    ui->txtZAccel->setText(z_accel);

    // Maximum travel configs
    ui->txtXMaxTrav->setText(x_max_trav);
    ui->txtYMaxTrav->setText(y_max_trav);
    ui->txtZMaxTrav->setText(z_max_trav);

    return QDialog::exec();
}

void frmConfig::test(int state){
    if (state == 0){
        ui->cbSoftLimit->setChecked(false);
        ui->cbSoftLimit->setEnabled(false);
    }
    else{
        ui->cbSoftLimit->setEnabled(true);
    }

    this->repaint();
}

void frmConfig::setStepPulseTime(QString step_pulse_time){
    this->step_pulse_time = step_pulse_time;
}
void frmConfig::setStepIdleDelay(QString step_idle_delay){
    this->step_idle_delay = step_idle_delay;
}

void frmConfig::setStepPulseInv(QString step_pulse_inv){
    this->step_pulse_inv = step_pulse_inv;
}

void frmConfig::setStepDirInv(QString step_dir_inv){
    this->step_dir_inv = step_dir_inv;
}

void frmConfig::setStepEnInv(QString step_en_inv){
    this->step_en_inv = step_en_inv;
}

void frmConfig::setLimitInv(QString limit_inv){
    this->limit_inv = limit_inv;
}

void frmConfig::setProbeInv(QString probe_inv){
    this->probe_inv = probe_inv;
}

void frmConfig::setJunctionDeviation(QString junction_deviation){
    this->junction_deviation = junction_deviation;
}

void frmConfig::setArcTolerance(QString arc_tolerance){
    this->arc_tolerance = arc_tolerance;
}

void frmConfig::setStatusReport(QString status_report){
    this->status_report = status_report;
}

void frmConfig::setInches(QString inches){
    this->inches = inches;
}

void frmConfig::setSoftLimits(QString soft_limits){
    this->soft_limits = soft_limits;
}

void frmConfig::setHardLimits(QString hard_limits){
    this->hard_limits = hard_limits;
}

void frmConfig::setHomingDirInvert(QString homing_dir_inv){
    this->homing_dir_inv = homing_dir_inv;
}

void frmConfig::setHomingEnable(QString homing_enable){
    this->homing_enable = homing_enable;
}

void frmConfig::setLocateFeedRate(QString locate_feed_rate){
    this->locate_feed_rate = locate_feed_rate;
}

void frmConfig::setSearchSeekRate(QString search_seek_rate){
    this->search_seek_rate = search_seek_rate;
}

void frmConfig::setSwitchDebounce(QString switch_debounce){
    this->switch_debounce = switch_debounce;
}

void frmConfig::setSwitchPullOff(QString switch_pull_off){
    this->switch_pull_off = switch_pull_off;
}

void frmConfig::setMaxSpindle(QString max_spindle){
    this->max_spindle = max_spindle;
}

void frmConfig::setMinSpindle(QString min_spindle){
    this->min_spindle = min_spindle;
}

void frmConfig::setLaserMode(QString laser_mode){
    this->laser_mode = laser_mode;
}

void frmConfig::setXStep(QString x_step){
    this->x_step = x_step;
}

void frmConfig::setYStep(QString y_step){
    this->y_step = y_step;
}

void frmConfig::setZStep(QString z_step){
    this->z_step = z_step;
}

void frmConfig::setXRate(QString x_rate){
    this->x_rate = x_rate;
}

void frmConfig::setYRate(QString y_rate){
    this->y_rate = y_rate;
}

void frmConfig::setZRate(QString z_rate){
    this->z_rate = z_rate;
}

void frmConfig::setXAccel(QString x_accel){
    this->x_accel = x_accel;
}

void frmConfig::setYAccel(QString y_accel){
    this->y_accel = y_accel;
}

void frmConfig::setZAccel(QString z_accel){
    this->z_accel = z_accel;
}

void frmConfig::setXMaxTrav(QString x_max_trav){
    this->x_max_trav = x_max_trav;
}

void frmConfig::setYMaxTrav(QString y_max_trav){
    this->y_max_trav = y_max_trav;
}

void frmConfig::setZMaxTrav(QString z_max_trav){
    this->z_max_trav = z_max_trav;
}

QString frmConfig::getStepPulseTime(){
    return ui->txtStepPulse->text();
}

QString frmConfig::getStepIdleDelay(){
    return ui->txtStepIdle->text();
}

QString frmConfig::getStepPulseInv(){
    int step_pulse_inv = 0;

    if (ui->cbXStepPulseInv->isChecked())
        step_pulse_inv = step_pulse_inv + 1;
    if (ui->cbYStepPulseInv->isChecked())
        step_pulse_inv = step_pulse_inv + 2;
    if (ui->cbZStepPulseInv->isChecked())
        step_pulse_inv = step_pulse_inv + 4;

    return QString::number(step_pulse_inv);
}

QString frmConfig::getStepDirInv(){
    int step_dir_inv = 0;

    if (ui->cbXStepDirInv->isChecked())
        step_dir_inv = step_dir_inv + 1;
    if (ui->cbYStepDirInv->isChecked())
        step_dir_inv = step_dir_inv + 2;
    if (ui->cbZStepDirInv->isChecked())
        step_dir_inv = step_dir_inv + 4;

    return QString::number(step_dir_inv);
}

QString frmConfig::getStepEnInv(){
    return QString::number(ui->cbStepEnableInv->isChecked());
}

QString frmConfig::getLimitInv(){
    return QString::number(ui->cbLimitInv->isChecked());
}

QString frmConfig::getProbeInv(){
    return QString::number(ui->cbProbeInv->isChecked());
}

QString frmConfig::getJunctionDeviation(){
    return ui->txtJunc->text();
}

QString frmConfig::getArcTolerance(){
    return ui->txtArc->text();
}

QString frmConfig::getStatusReport(){
    return QString::number(ui->comboBoxStatus->currentIndex());
}

QString frmConfig::getInches(){
    return QString::number(ui->cbInch->isChecked());
}

QString frmConfig::getSoftLimits(){
    return QString::number(ui->cbSoftLimit->isChecked());
}

QString frmConfig::getHardLimits(){
    return QString::number(ui->cbHardLimit->isChecked());
}

QString frmConfig::getHomingDirInvert(){
    int home_inv = 0;
    if (ui->cbXHomeInv->isChecked())
        home_inv = home_inv + 1;
    if (ui->cbYHomeInv->isChecked())
        home_inv = home_inv + 2;
    if (ui->cbZHomeInv->isChecked())
        home_inv = home_inv + 4;

    return QString::number(home_inv);
}

QString frmConfig::getHomingEnable(){
    return QString::number(ui->cbHomingCycle->isChecked());
}

QString frmConfig::getLocateFeedRate(){
    return ui->txtLocateFeed->text();
}

QString frmConfig::getSearchSeekRate(){
    return ui->txtSearchSeek->text();
}

QString frmConfig::getSwitchDebounce(){
    return ui->txtSwitchDebounce->text();
}

QString frmConfig::getSwitchPullOff(){
    return ui->txtSwitchPullOff->text();
}

QString frmConfig::getMaxSpindle(){
    return ui->txtMaxSpindle->text();
}

QString frmConfig::getMinSpindle(){
    return ui->txtMinSpindle->text();
}

QString frmConfig::getLaserMode(){
    return QString::number(ui->cbLaser->isChecked());
}

QString frmConfig::getXStep(){
    return ui->txtXStep->text();
}

QString frmConfig::getYStep(){
    return ui->txtYStep->text();
}

QString frmConfig::getZStep(){
    return ui->txtZStep->text();
}

QString frmConfig::getXRate(){
    return ui->txtXRate->text();
}

QString frmConfig::getYRate(){
    return ui->txtYRate->text();
}

QString frmConfig::getZRate(){
    return ui->txtZRate->text();
}

QString frmConfig::getXAccel(){
    return ui->txtXAccel->text();
}

QString frmConfig::getYAccel(){
    return ui->txtYAccel->text();
}

QString frmConfig::getZAccel(){
    return ui->txtZAccel->text();
}

QString frmConfig::getXMaxTrav(){
    return ui->txtXMaxTrav->text();
}

QString frmConfig::getYMaxTrav(){
    return ui->txtYMaxTrav->text();
}

QString frmConfig::getZMaxTrav(){
    return ui->txtZMaxTrav->text();
}
