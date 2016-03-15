#include "GsWindow.h"
#include "ui_gswindow.h"

GsWindow::GsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::GsWindow),
    parent_(parent),
    child_(0)
{
	ui_->setupUi(this);
}

GsWindow::~GsWindow()
{
	delete child_;
	delete ui_;
}

void GsWindow::on_pushButton_clicked()
{
	this->hide();
}

void GsWindow::on_pushButton_2_clicked()
{
	if (!child_) child_ = new SpectralOne(this);
	int x = this->x();
	int y = this->y();
	child_->move(x,y);
	child_->show();
	this->hide();
}

