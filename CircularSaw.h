#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "ElectricSaw.h"

using namespace std;
class CircularSaw : public ElectricSaw {
protected:
	int discDiameter;
	string	anatomy;
public:
	CircularSaw();

	CircularSaw(const CircularSaw& ed);

	void PrintAllInformation() override;

	void SetAnatomy(string str);

	string GetAnatomy() const;

	void SetDD(int dD);

	int GetDD() const;

	CircularSaw& operator=(const CircularSaw& v1);

	void readFromFile(char* path) override;

	void writeToFile(string path) override;

	void enterFromKeyboard() override;

};