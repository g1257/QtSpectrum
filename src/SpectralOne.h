#ifndef SPECTRALONE_H
#define SPECTRALONE_H

#include <QMainWindow>
#include "SpectralPlot.h"

namespace Ui {
class SpectralOne;
}

class SpectralOne : public QMainWindow
{
	Q_OBJECT

public:
	explicit SpectralOne(QWidget* parent = 0);
	~SpectralOne();

private slots:
	void on_pushButton_clicked();

	void on_pushButton_2_clicked();

private:
	Ui::SpectralOne* ui_;
	QWidget* parent_;
	QWidget* child_;
};

#endif // SPECTRALONE_H

