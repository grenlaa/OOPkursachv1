#include "HeatingPT.h"

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

HeatingPT::HeatingPT()
{
	temperature = 0;
}
HeatingPT::HeatingPT(const HeatingPT& HT)
{
	PowerTools(write);
	temperature = HT.temperature;
}
void HeatingPT::PrintAllInformation()
{
	PowerTools::PrintAllInformation();
	cout << "температура: " << temperature << endl;
}
void HeatingPT::SetTemperature(double temp)
{
	temperature = temp;
}
double HeatingPT::GetTemperature() const
{
	return temperature;
}
HeatingPT& HeatingPT::operator=(const HeatingPT& HT)
{
	PowerTools::operator=(HT);
	temperature = HT.temperature;
	return *this;
}
void HeatingPT::readFromFile(char* path)
{
	PowerTools::readFromFile(path);
	ifstream file(path);
	file >> temperature;
	file.close();
}
void HeatingPT::writeToFile(string path)
{
	PowerTools::writeToFile(path);
	ofstream file(path, std::ios::app);
	file << "температура: ";
	file << temperature << endl;
	file.close();
}
void HeatingPT::enterFromKeyboard()
{
	PowerTools::enterFromKeyboard();
	cout << "температура: ";
	cin >> temperature;
}