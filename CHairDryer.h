#pragma once

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "HeatingPT.h"

using namespace std;
class CHairDryer : public HeatingPT {
protected:
	int airForce;
public:
	CHairDryer();

	CHairDryer(const CHairDryer& bpen);

	void PrintAllInformation() override;

	void SetAirForce(int AirForce);

	int GetAirForce() const;


	//CHairDryer& operator=(const CHairDryer bpen);

	void readFromFile(char* path) override;

	void writeToFile(string path) override;

	void enterFromKeyboard() override;




};