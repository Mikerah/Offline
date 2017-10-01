#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_offline.h"

class Offline : public QMainWindow
{
	Q_OBJECT

public:
	Offline(QWidget *parent = Q_NULLPTR);

private:
	Ui::OfflineClass ui;
};
