#include <Windows.h>
#include <iostream>
#include "Engine.h"
#include "pTest.h"

int main(){
	std::cout << "Anti Cheat is active for: " << std::endl;
	
	//Engine Eng("Test.exe");	//Change it to your desired process' name

	//Run Global checks
	//Eng.Global_Cks();

	//Run Timed checks
	//Eng.Main();

	//Sample Test

	pTest Test;
	Test.Tmain();

	//End Sample
	
	system("Pause");
	return 0;
}