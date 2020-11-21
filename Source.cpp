#include "CHairDryer.h"
#include "HeatingPT.h"
#include "PowerTools.h"
#include "Central.h"

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	CHairDryer v1;

	v1.enterFromKeyboard();
	v1.writeToFile("3.txt");

	return 0;

}

