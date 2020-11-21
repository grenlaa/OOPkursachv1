#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "PowerTools.h"

using namespace std;
class ElectricSaw : public PowerTools {
protected:
	int workTime;
	string	material;
public:
	ElectricSaw();

	ElectricSaw(const ElectricSaw& es);

	void PrintAllInformation() override;

	void SetMaterial(string str);

	string GetMaterial() const;

	void SetWT(int wT);

	int GetWT() const;

	ElectricSaw& operator=(const ElectricSaw& v1);

	void readFromFile(char* path) override;

	void writeToFile(string path) override;

	void enterFromKeyboard() override;

};