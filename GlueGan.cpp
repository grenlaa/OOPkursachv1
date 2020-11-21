#include "GlueGun.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

GlueGun::GlueGun()
{
	rod_diameter = 0;
}
GlueGun::GlueGun(const GlueGun& HT)
{
	HeatingPT(write);
	rod_diameter = HT.rod_diameter;
}
void GlueGun::PrintAllInformation()
{
	HeatingPT::PrintAllInformation();
	cout << "диаметр клеевого стержня: " << rod_diameter << endl;
}

void GlueGun::Set_rod_diameter(int temp)
{
	rod_diameter = temp;
}
int GlueGun::Get_rod_diameter() const
{
	return rod_diameter;
}

GlueGun& GlueGun::operator=(const GlueGun& GL)
{
	HeatingPT::operator=(GL);
	rod_diameter = GL.rod_diameter;
	return *this;
}
void GlueGun::readFromFile(char* path)
{
	HeatingPT::readFromFile(path);
	ifstream file(path);
	file >> rod_diameter;
	file.close();
}
void GlueGun::writeToFile(string path)
{
	HeatingPT::writeToFile(path);
	ofstream file(path, std::ios::app);
	file << "диаметр клеевого стержня: ";
	file << rod_diameter << endl;
	file.close();
}
void GlueGun::enterFromKeyboard()
{
	HeatingPT::enterFromKeyboard();
	cout << "диаметр клеевого стержня: ";
	cin >> rod_diameter;
}