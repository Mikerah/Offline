#include "offline.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Offline w;
	w.show();
	return a.exec();
}
