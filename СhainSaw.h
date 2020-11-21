#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "ElectricSaw.h"

using namespace std;
class �hainSaw : public ElectricSaw {
protected:
	int chainLength;
public:
	�hainSaw();

	�hainSaw(const �hainSaw& cs);

	void PrintAllInformation() override;

	void SetCL(int cL);

	int GetCL() const;

	�hainSaw& operator=(const �hainSaw& v1);

	void readFromFile(char* path) override;

	void writeToFile(string path) override;

	void enterFromKeyboard() override;

};
