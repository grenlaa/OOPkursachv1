#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "ElectricDrill.h"

using namespace std;
class ScrewDriver : public ElectricDrill {
protected:
int	rotationalSpeed;
public:
	ScrewDriver();

	ScrewDriver(const ScrewDriver& sd);

	void PrintAllInformation() override;

	void SetRS(int rtS);

	int GetRS() const;

	//ScrewDriver& operator=(const ScrewDriver bpen);

	void readFromFile(char* path) override;

	void writeToFile(string path) override;

	void enterFromKeyboard() override;

};