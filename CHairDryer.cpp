#include "CHairDryer.h"

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

CHairDryer::CHairDryer()
{
	airForce = 0;
}
CHairDryer::CHairDryer(const CHairDryer& bpen)
{
	HeatingPT(fpen);
	airForce = bpen.airForce;
}
void CHairDryer::PrintAllInformation()
{
	HeatingPT::PrintAllInformation();
	cout << "Автоматическая: " << airForce << endl;

}
void CHairDryer::SetAirForce(int Avto)
{
	airForce = Avto;
}
int CHairDryer::GetAirForce() const
{
	return airForce;
}

/*CHairDryer& CHairDryer::operator=(const CHairDryer bpen)
{
	CHairDryer::operator=(bpen);
	airForce = bpen.airForce;
}*/
void CHairDryer::readFromFile(char* path)
{
	HeatingPT::enterFromKeyboard();
	ifstream file(path);
	file >> airForce;
	file.close();
}
void CHairDryer::writeToFile(string path)
{
	HeatingPT::writeToFile(path);
	ofstream file(path, std::ios::app);
	file << "сила воздушного потока: ";
	file << airForce << endl;
	file.close();
}
void CHairDryer::enterFromKeyboard()
{
	HeatingPT::enterFromKeyboard();
	cout << "сила воздушного потока: ";
	cin >> airForce;
}
