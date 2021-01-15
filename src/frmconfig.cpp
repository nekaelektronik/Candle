#include "frmconfig.h"
#include "ui_frmconfig.h"

frmConfig::frmConfig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmConfig)
{
    ui->setupUi(this);
}

frmConfig::~frmConfig()
{
    delete ui;
}

void frmConfig::setXStep(double x_step){
    this->x_step = x_step;
}

void frmConfig::setYStep(double y_step){
    this->y_step = y_step;
}

void frmConfig::setZStep(double z_step){
    this->z_step = z_step;
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
