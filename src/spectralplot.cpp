#include "SpectralPlot.h"
#include "ui_spectralplot.h"

SpectralPlot::SpectralPlot(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::SpectralPlot),
    parent_(parent)
{
	ui_->setupUi(this);
}

SpectralPlot::~SpectralPlot()
{
	delete ui_;
}

void SpectralPlot::on_pushButton_clicked()
{
	int x = this->x();
	int y = this->y();
	parent_->move(x,y);
	this->hide();
	parent_->show();
}

