#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "Central.h"

using namespace std;

class PowerTools : public Central {
protected:
	int price;
	string brand;
	string name;
public:
	PowerTools();

	PowerTools(const PowerTools& stat);

	void PrintAllInformation() override;

	int GetPrice() const override;

	string GetName() const override;

	string GetBrand() const override;

	void SetPrice(int Price) override;

	void SetName(string Name) override;

	void SetBrand(string Brand) override;

	PowerTools& operator=(const PowerTools& stat);

	void readFromFile(char* path) override;

	void writeToFile(string path) override;

	void enterFromKeyboard() override;

};