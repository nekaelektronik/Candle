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
