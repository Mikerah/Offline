#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_offline.h"
#include <qtimer.h>

class Offline : public QMainWindow
{
	Q_OBJECT

public:
	Offline(QWidget *parent = Q_NULLPTR);

	private slots:
		void on_startButton_clicked();
		void startTimer();

private:
	Ui::OfflineClass ui;
	QTimer *timer;
	int time;
};
