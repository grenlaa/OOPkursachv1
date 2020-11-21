#include "Powertools.h"

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
PowerTools::PowerTools()
{
	name = "";
	brand = "";
	price = 0;
}
PowerTools::PowerTools(const PowerTools& stat)
{
	name = stat.name;
	brand = stat.brand;
	price = stat.price;
}
void PowerTools::PrintAllInformation()
{
	cout << "Наименование: " << name << endl
		<< "Бренд: " << brand << endl
		<< "Цена: " << price << endl;
}
int PowerTools::GetPrice() const
{
	return price;
}
string PowerTools::GetName() const
{
	return name;
}
string PowerTools::GetBrand() const
{
	return brand;
}
void PowerTools::SetPrice(int Price)
{
	price = Price;
}
void PowerTools::SetName(string Name)
{

	name = Name;

}
void PowerTools::SetBrand(string Brand)
{
	brand = Brand;
}
PowerTools& PowerTools::operator=(const PowerTools& stat)
{
	name = stat.name;
	brand = stat.brand;
	price = stat.price;
	return *this;
}
void PowerTools::readFromFile(char* path)
{
	ifstream file(path);
	string tmp;
	getline(file, tmp);
	name = tmp;
	getline(file, tmp);
	brand = tmp;
	file >> price;
	file.close();
}
void PowerTools::writeToFile(string path)
{
	ofstream file(path, std::ios::app);
	file << "Название: ";
	file << name << endl;
	file << "Производитель: ";
	file << brand << endl;
	file << "Цена: ";
	file << price << endl;
	file.close();
}
void PowerTools::enterFromKeyboard()
{
	cout << "Название: ";
	cin >> name;
	cout << "Производитель: ";
	cin >> brand;
	cout << "Цена: ";
	cin >> price;
}