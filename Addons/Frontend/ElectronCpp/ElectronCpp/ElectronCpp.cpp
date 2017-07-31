#include "ElectronCpp.h"
#include <iostream>
#include <windows.h>
typedef std::string(*HelloMsg)();

namespace ElectronCpp {
	std::string str;
	std::string ElectronCppClass::HelloWorld(){
		
		// HINSTANCE hins = LoadLibrary("Addons\\Frontend\\Externaldll\\ExtRef.dll");
		// if (hins == NULL){
		// 	DWORD err;
		// 	err = GetLastError();
		// 	std::cout <<"Cannot load Dll"<<err;
		// 	EXIT_FAILURE;
		// }
		// HelloMsg fn = (HelloMsg)GetProcAddress(hins, "HelloMessage");
		// std::string res = fn();
		//return res;
		return "Hello from Project 1";
	};

	int ElectronCppClass::Multiply(int a, int b){
		return a*b;
	};
} 








// #include "ElectronCpp.h"
// #include <windows.h>
// namespace ElectronCpp {
// 	std::string ElectronCppClass::HelloWorld(){
// 		return "Suhas";
// 	}

// 	int ElectronCppClass::Multiply(int a, int b){
// 		return a*b;
// 	}
// }