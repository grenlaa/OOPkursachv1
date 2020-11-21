#include "ElectricDrill.h"

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

ElectricDrill::ElectricDrill()
{
	machineORhand = "";
}
ElectricDrill::ElectricDrill(const ElectricDrill& ed)
{
	PowerTools(fpen);
	machineORhand = ed.machineORhand;
}
void ElectricDrill::PrintAllInformation()
{
	PowerTools::PrintAllInformation();
	cout << "Электроиструмент станок/ручной: " << machineORhand << endl;

}
void ElectricDrill::SetM_or_H(string str)
{
	machineORhand = str;
}
string ElectricDrill::GetM_or_H() const
{
	return machineORhand;
}

/*CHairDryer& CHairDryer::operator=(const CHairDryer bpen)
{
	CHairDryer::operator=(bpen);
	airForce = bpen.airForce;
}*/
void ElectricDrill::readFromFile(char* path)
{
	PowerTools::enterFromKeyboard();
	ifstream file(path);
	file >> machineORhand;
	file.close();
}
void ElectricDrill::writeToFile(string path)
{
	PowerTools::writeToFile(path);
	ofstream file(path, std::ios::app);
	file << "Электроиструмент станок/ручной: ";
	file << machineORhand << endl;
	file.close();
}
void ElectricDrill::enterFromKeyboard()
{
	PowerTools::enterFromKeyboard();
	cout << "Электроиструмент станок/ручной: ";
	cin >> machineORhand;
}
