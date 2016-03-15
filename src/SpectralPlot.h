#ifndef SPECTRALPLOT_H
#define SPECTRALPLOT_H

#include <QMainWindow>

namespace Ui {
class SpectralPlot;
}

class SpectralPlot : public QMainWindow
{
	Q_OBJECT

public:
	explicit SpectralPlot(QWidget* parent = 0);
	~SpectralPlot();

private slots:
	void on_pushButton_clicked();

private:
	Ui::SpectralPlot* ui_;
	QWidget* parent_;
};

#endif // SPECTRALPLOT_H

