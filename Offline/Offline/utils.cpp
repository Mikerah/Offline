#include "utils.h"

#define _WIN32_DCOM
#include <iostream>
using namespace std;
#include <comdef.h>
#include <Wbemidl.h>

#include <ActiveQt\qaxobject.h>
#include <ActiveQt\qaxbase.h>
#include <qstring.h>

# pragma comment(lib, "wbemuuid.lib")

void enableNetworkAdapters() {

}

void disableNetworkAdapters() {
	
	/*
	This was my first attempt at trying to disable the internet connection on the device using COM
	provided by Microsoft. This code should work in a main() function in a separate project and is
	based of the example COM project provided by Microsoft

	HRESULT hres;

	// Step 1: --------------------------------------------------
	// Initialize COM. ------------------------------------------

	hres = CoInitializeEx(0, COINIT_MULTITHREADED);
	if (FAILED(hres))
	{
		cout << "Failed to initialize COM library. Error code = 0x"
			<< hex << hres << endl;
	}

	// Step 2: --------------------------------------------------
	// Set general COM security levels --------------------------

	hres = CoInitializeSecurity(
		NULL,
		-1,                          // COM authentication
		NULL,                        // Authentication services
		NULL,                        // Reserved
		RPC_C_AUTHN_LEVEL_DEFAULT,   // Default authentication 
		RPC_C_IMP_LEVEL_IMPERSONATE, // Default Impersonation  
		NULL,                        // Authentication info
		EOAC_NONE,                   // Additional capabilities 
		NULL                         // Reserved
	);


	if (FAILED(hres))
	{
		cout << "Failed to initialize security. Error code = 0x"
			<< hex << hres << endl;
		CoUninitialize();
	}

	// Step 3: ---------------------------------------------------
	// Obtain the initial locator to WMI -------------------------

	IWbemLocator *pLoc = NULL;

	hres = CoCreateInstance(
		CLSID_WbemLocator,
		0,
		CLSCTX_INPROC_SERVER,
		IID_IWbemLocator, (LPVOID *) &pLoc);

	if (FAILED(hres))
	{
		cout << "Failed to create IWbemLocator object."
			<< " Err code = 0x"
			<< hex << hres << endl;
		CoUninitialize();
	}

	// Step 4: -----------------------------------------------------
	// Connect to WMI through the IWbemLocator::ConnectServer method

	IWbemServices *pSvc = NULL;

	// Connect to the root\cimv2 namespace with
	// the current user and obtain pointer pSvc
	// to make IWbemServices calls.
	hres = pLoc->ConnectServer(
		_bstr_t(L"ROOT\\STANDARDCIMV2"), // Object path of WMI namespace
		NULL,                    // User name. NULL = current user
		NULL,                    // User password. NULL = current
		0,                       // Locale. NULL indicates current
		NULL,                    // Security flags.
		0,                       // Authority (for example, Kerberos)
		0,                       // Context object 
		&pSvc                    // pointer to IWbemServices proxy
	);

	if (FAILED(hres))
	{
		cout << "Could not connect. Error code = 0x"
			<< hex << hres << endl;
		pLoc->Release();
		CoUninitialize();
	}

	cout << "Connected to ROOT\\CIMV2 WMI namespace" << endl;


	// Step 5: --------------------------------------------------
	// Set security levels on the proxy -------------------------

	hres = CoSetProxyBlanket(
		pSvc,                        // Indicates the proxy to set
		RPC_C_AUTHN_WINNT,           // RPC_C_AUTHN_xxx
		RPC_C_AUTHZ_NONE,            // RPC_C_AUTHZ_xxx
		NULL,                        // Server principal name 
		RPC_C_AUTHN_LEVEL_CALL,      // RPC_C_AUTHN_LEVEL_xxx 
		RPC_C_IMP_LEVEL_IMPERSONATE, // RPC_C_IMP_LEVEL_xxx
		NULL,                        // client identity
		EOAC_NONE                    // proxy capabilities 
	);

	if (FAILED(hres))
	{
		cout << "Could not set proxy blanket. Error code = 0x"
			<< hex << hres << endl;
		pSvc->Release();
		pLoc->Release();
		CoUninitialize();
	}

	// Step 6: --------------------------------------------------
	// Use the IWbemServices pointer to make requests of WMI ----

	// set up to call the Win32_Process::Create method
	BSTR MethodName = SysAllocString(L"DisableIPSec");
	BSTR ClassName = SysAllocString(L"Win32_NetworkAdapterConfiguration");

	IWbemClassObject *pOutparams = NULL;
	hres = pSvc->ExecMethod(ClassName, MethodName, 0, NULL, NULL, &pOutparams, NULL);



	
	if (FAILED(hres))
	{
		cout << "Could not execute method. Error code = 0x"
			<< hex << hres << endl;
		SysFreeString(ClassName);
		SysFreeString(MethodName);
		//pClass->Release();
		pSvc->Release();
		pLoc->Release();
		CoUninitialize();
	}


	//// Clean up
	////--------------------------
	//SysFreeString(ClassName);
	//SysFreeString(MethodName);
	//pOutparams->Release();
	//pLoc->Release();
	//pSvc->Release();
	//CoUninitialize();
	//

	*/

	/*
	This was my second attempt at disabling internet connection using COM but accessing COM
	through Qt's ActiveQt module. This code doesn't work and is based of an example I found
	online.

	// Retrieve locator object
	QAxObject *WbemLocator = new QAxObject("IWbemLocator");

	// Connect to server for wmi service
	QAxObject *WmiService = WbemLocator->querySubObject(
		"ConnectServer(QString&, QString&)", 
		QString("."), 
		QString("ROOT\\CIMV2"));

	// Call Method
	QAxObject *Outparams = new QAxObject("IWbemClassObject");
	QAxObject *WbemMethodCall = 
		WmiService->dynamicCall(
			"ExecMethod(QString&, QString&, 0, NULL, NULL, NULL, NULL)",
			QString("Win32_NetworkAdapterConfiguration"),
			QString("ReleaseDHCPLeaseAll")).value<QAxObject *>();
	*/
}