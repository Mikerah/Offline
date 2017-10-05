#include "offline.h"
#include <QTimer>
#include <qobject.h>
#include <qdebug.h>

Offline::Offline(QWidget *parent)
	: QMainWindow(parent)
{
	ui->setupUi(this);
	//connect(ui->startButton, SIGNAL(clicked()), this, SLOT(startTimer()));
	timer = new QTimer();
	connect(timer, SIGNAL(timeout()), this, SLOT(on_startButton_clicked()));
	time = 0;

}

void Offline::startTimer()
{
	time++;
	int wanted_time = ui->timerSpinBox->value();
	if (time == (wanted_time+1)) {
		timer->stop();
	}
	else {
		ui->timerDisplay->display(time);
	}
}

void Offline::on_startButton_clicked() {
	timer->start(1000);
	startTimer();

}


