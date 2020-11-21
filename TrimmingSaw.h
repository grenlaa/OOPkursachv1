#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "CircularSaw.h"

using namespace std;
class TrimmingSaw : public CircularSaw {
protected:
	int cuttingAngle;
	string	DRF;
public:
	TrimmingSaw();

	TrimmingSaw(const TrimmingSaw& ed);

	void PrintAllInformation() override;

	void SetDRF(string str);

	string GetDRF() const;

	void SetCA(int cA);

	int GetCA() const;

	TrimmingSaw& operator=(const TrimmingSaw& v1);

	void readFromFile(char* path) override;

	void writeToFile(string path) override;

	void enterFromKeyboard() override;

}; 
