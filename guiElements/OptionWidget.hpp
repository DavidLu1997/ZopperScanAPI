//Options widget
//Contains options for ZopperScan

#ifndef OPTIONWIDGET_H
#define OPTIONWIDGET_H

#include <QtWidgets\QWidget>
#include <QtWidgets\QLabel>
#include <QtWidgets\QSlider>
#include <QtWidgets\QGridLayout>
#include <QtWidgets\QPushButton>
#include <QtWidgets\QSpinBox>

class OptionWidget : public QWidget 
{
	Q_OBJECT

public:
	//Constructor
	OptionWidget(QWidget *parent = 0);

	//Destructor
	~OptionWidget();

	//Sliders
	QSlider *threshold;
	QSlider *percent;

	//Getters
	double getPercent();
	int getThreshold();

public slots:
	
	//Percent changed
	void percentChanged(int value);

	//Threshold changed
	void thresholdChanged(int value);

	//Default
	void revertDefault();

	//Set default
	void setDefault();
	
private slots:
	
private:
	//Title
	QLabel *title;

	//Main Layout
	QGridLayout *layout;

	//Threshold
	QLabel *thresholdLabel;
	QSpinBox *thresholdValue;

	//Percentage
	QLabel *percentLabel;
	QSpinBox *percentValue;

	//Defaults
	QPushButton *defaultSettings;
	QPushButton *newDefault;
	int defaultThreshold = 100;
	int defaultPercent = 35;
};

#endif