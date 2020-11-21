#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "PowerTools.h"

using namespace std;
class ElectricDrill : public PowerTools {
protected:
	string machineORhand;
public:
	ElectricDrill();

	ElectricDrill(const ElectricDrill& ed);

	void PrintAllInformation() override;

	void SetM_or_H(string str);

	string GetM_or_H() const;

	//CHairDryer& operator=(const CHairDryer bpen);

	void readFromFile(char* path) override;

	void writeToFile(string path) override;

	void enterFromKeyboard() override;

};