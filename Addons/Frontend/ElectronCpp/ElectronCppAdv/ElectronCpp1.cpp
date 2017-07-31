#include "ElectronCpp1.h"
#include "ElectronCpp.h"


namespace ElectronCpp1{
	ElectronCpp::ElectronCppClass* obj;
	std::string ElectronCpp1Class::HelloWorld(){
		return obj->HelloWorld();
	}
	
	int ElectronCpp1Class::Multiply(int a, int b){
		return obj->Multiply(a, b);
	}
}
