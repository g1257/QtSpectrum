#include "MainWindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::MainWindow),
    gsWindow_(0)
{
	ui_->setupUi(this);
}

MainWindow::~MainWindow()
{
	delete gsWindow_;
	delete ui_;
}

void MainWindow::on_pushButton_2_clicked()
{
	quick_exit(0);
}

void MainWindow::on_pushButton_3_clicked()
{
	if (!gsWindow_)
		gsWindow_ = new GsWindow(this);
	int x = this->x();
	int y = this->y();
	gsWindow_->move(x,y);
	gsWindow_->show();
}

