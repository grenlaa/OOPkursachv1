#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "ElectricSaw.h"

using namespace std;
class ÑhainSaw : public ElectricSaw {
protected:
	int chainLength;
public:
	ÑhainSaw();

	ÑhainSaw(const ÑhainSaw& cs);

	void PrintAllInformation() override;

	void SetCL(int cL);

	int GetCL() const;

	ÑhainSaw& operator=(const ÑhainSaw& v1);

	void readFromFile(char* path) override;

	void writeToFile(string path) override;

	void enterFromKeyboard() override;

};
