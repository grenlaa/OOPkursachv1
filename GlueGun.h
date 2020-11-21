#pragma once

#include <iostream>
#include <string>

#include <windows.h>
#include <fstream>
#include "HeatingPT.h"
using namespace std;
class GlueGun : public HeatingPT{
protected:
	int rod_diameter;
public:
	GlueGun();

	GlueGun(const GlueGun& bpen);

	void PrintAllInformation() override;

	void Set_rod_diameter(int rod_diameter);

	int Get_rod_diameter() const;


	GlueGun& operator=(const GlueGun& gl);

	void readFromFile(char* path) override;

	void writeToFile(string path) override;

	void enterFromKeyboard() override;

};
