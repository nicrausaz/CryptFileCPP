#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void main(void)
{
	int choice = 0;
	ofstream offile;
	ifstream iffile("../test.txt");
	string line;

	while (choice != 3)
	{
		cout << endl << "MENU" << endl;
		cout << "------" << endl;
		cout << "[1] Crypt file" << endl;
		cout << "[2] Decrypt file" << endl;
		cout << "[3] Exit" << endl;
		cout << endl;
		cout << "Choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			if (iffile.is_open()) {

				while (getline(iffile, line)) {
					// cout << line << '\n';
					for (char& c : line) {
						cout << c << endl;

					}
				}
				iffile.close();
			}
			break;

			/*else {
				cout << "Unable to open file";
			}}*/
		case 2:
		case 3: cout << "BYE" << endl;
		default: cout << "Nothing to do" << endl;
		}

	}

}

void readFile(ifstream file, string line) {
	if (file.is_open()) {

		while (getline(file, line)) {
			cout << line << '\n';
		}
		file.close();
	}
	else {
		cout << "Unable to open file";
	}
}

void writeToFile(ofstream file) {
	file.open("../test.txt");
	file << "Writing this to a file.\n";
	file.close();
}