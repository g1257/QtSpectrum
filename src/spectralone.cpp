#include "SpectralOne.h"
#include "ui_spectralone.h"

SpectralOne::SpectralOne(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::SpectralOne),
    parent_(parent),
    child_(0)
{
	ui_->setupUi(this);
}

SpectralOne::~SpectralOne()
{
	delete child_;
	delete ui_;
}

void SpectralOne::on_pushButton_clicked()
{
	int x = this->x();
	int y = this->y();
	parent_->move(x,y);
	parent_->show();
	this->hide();
}

void SpectralOne::on_pushButton_2_clicked()
{
	if (!child_) child_ = new SpectralPlot(this);
	int x = this->x();
	int y = this->y();
	child_->move(x,y);
	child_->show();
	this->hide();
}

