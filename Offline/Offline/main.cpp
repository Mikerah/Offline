#include "offline.h"
#include "utils.h"
#include <QtWidgets/QApplication>
#include <QtCore\qcoreapplication.h>

int main(int argc, char *argv[])
{
	
	QApplication a(argc, argv);
	Offline w;
	w.show();
	
	return a.exec();

}
