#include "disableNetworkAdaptersThread.h"
#include "utils.h"

#define _WIN32_DCOM
#include <iostream>
using namespace std;
#include <comdef.h>
#include <Wbemidl.h>

# pragma comment(lib, "wbemuuid.lib")



void DisableThread::run() {
	// When the thread is starting, call the disable network adapters function
	disableNetworkAdapters();
}