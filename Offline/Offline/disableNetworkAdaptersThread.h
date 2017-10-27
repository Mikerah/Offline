#pragma once
#include <qthread.h>
#include <qmutex.h>
#include <qwaitcondition.h>

class DisableThread : public QThread
{
	Q_OBJECT



protected:
	void run();

};
