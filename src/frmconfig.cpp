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

double frmConfig::getXStep(){
    return ui->txtXStep->text().toDouble();
}

double frmConfig::getYStep(){
    return ui->txtYStep->text().toDouble();
}

double frmConfig::getZStep(){
    return ui->txtZStep->text().toDouble();
}

double frmConfig::getXRate(){
    return ui->txtXRate->text().toDouble();
}

double frmConfig::getYRate(){
    return ui->txtYRate->text().toDouble();
}

double frmConfig::getZRate(){
    return ui->txtZRate->text().toDouble();
}

double frmConfig::getXAccel(){
    return ui->txtXAccel->text().toDouble();
}

double frmConfig::getYAccel(){
    return ui->txtYAccel->text().toDouble();
}

double frmConfig::getZAccel(){
    return ui->txtZAccel->text().toDouble();
}

double frmConfig::getXMaxTrav(){
    return ui->txtXMaxTrav->text().toDouble();
}

double frmConfig::getYMaxTrav(){
    return ui->txtYMaxTrav->text().toDouble();
}

double frmConfig::getZMaxTrav(){
    return ui->txtZMaxTrav->text().toDouble();
}
