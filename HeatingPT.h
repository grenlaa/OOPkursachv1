#pragma once

#include <iostream>
#include <string>

#include <windows.h>
#include <fstream>
#include "PowerTools.h"
using namespace std;
class HeatingPT : public PowerTools
{
protected:
	double temperature;
public:
	HeatingPT();

	HeatingPT(const HeatingPT& HT);

	void PrintAllInformation() override;

	void SetTemperature(double Thickness);

	double GetTemperature() const;

	HeatingPT& operator=(const HeatingPT& HT);

	void readFromFile(char* path) override;

	void writeToFile(string path) override;

	void enterFromKeyboard() override;

};