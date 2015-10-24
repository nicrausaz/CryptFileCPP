#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void main(void)
{
	cout << "MENU" << endl;
	cout << "------" << endl;
	cout << "[1] Crypt file" << endl;
	cout << "[2] Exit" << endl;
	int inChoice = 0;

	while (!(inChoice == 1) || !(inChoice == 2))
	{
		cout << "Select 1 or 2" << endl;
		cout << endl;
		cout << "Choice: ";
		cin >> inChoice;

		if (inChoice == 1)
		{
			cout << "Opening file..." << endl;
			ifstream fichier("test.txt", ios::in);
			cout << "Reading file..." << endl;
			string ligne;
			while (getline("test.txt", ligne))
			{
				cout << ligne << endl;

			}
			
			
			//analyse file
			// todo: open file
			// test: cout a word
			// 

			break;

		}
		else if (inChoice == 2)
		{
			cout << "BYE" << endl;
			break;
		}
	}



}


