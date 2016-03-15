#ifndef GSWINDOW_H
#define GSWINDOW_H

#include <QMainWindow>
#include "SpectralOne.h"

namespace Ui {
class GsWindow;
}

class GsWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit GsWindow(QWidget* parent = 0);
	~GsWindow();

private slots:
	void on_pushButton_clicked();

	void on_pushButton_2_clicked();

private:
	Ui::GsWindow* ui_;
	QWidget* parent_;
	QWidget* child_;
};

#endif // GSWINDOW_H

