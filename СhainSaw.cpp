#include "ÑhainSaw.h"

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

ÑhainSaw::ÑhainSaw()
{
	chainLength = 0;
}
ÑhainSaw::ÑhainSaw(const ÑhainSaw& cl)
{
	ElectricSaw(fpen);
	chainLength = cl.chainLength;
}
void ÑhainSaw::PrintAllInformation()
{
	ElectricSaw::PrintAllInformation();
	cout << "Äëèíà öåïè ïèëû: " << chainLength << endl;
}

void ÑhainSaw::SetCL(int wT)
{
	chainLength = wT;
}
int ÑhainSaw::GetCL() const
{
	return chainLength;
}

ÑhainSaw& ÑhainSaw::operator=(const ÑhainSaw& v1)
{
	ElectricSaw::operator=(v1);
	chainLength = v1.chainLength;
	return *this;
}

void ÑhainSaw::readFromFile(char* path)
{
	ElectricSaw::enterFromKeyboard();
	ifstream file(path);
	file >> chainLength;
	file.close();
}

void ÑhainSaw::writeToFile(string path)
{
	ElectricSaw::writeToFile(path);
	ofstream file(path, std::ios::app);
	file << "Äëèíà öåïè ïèëû: ";
	file << chainLength << endl;
	file.close();
}
void ÑhainSaw::enterFromKeyboard()
{
	ElectricSaw::enterFromKeyboard();

	cout << "Äëèíà öåïè ïèëû: ";
	cin >> chainLength;
}