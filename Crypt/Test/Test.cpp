#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void cryptFile();
void decryptFile();

void cryptFile() {
	ifstream file("../test.txt");
	string line;
	if (file.is_open()) {

		while (getline(file, line)) {
			for (int i = 0; line[i] != '\0'; i++) {

				if (line[i] >= 'a' && line[i] <= 'm') {
					line[i] += 13;
				}

				else if (line[i] > 'm' && line[i] <= 'z') {
					line[i] -= 13;
				}

				else if (line[i] >= 'A' && line[i] <= 'M') {
					line[i] += 13;
				}

				else if (line[i] > 'M' && line[i] <= 'Z') {
					line[i] -= 13;
				}
			}

			cout << line;
		}
		file.close();
	}
}

void main(void)
{
	int choice = 0;

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
			cryptFile();
			break;
		case 2:
		case 3: cout << "BYE" << endl;
		default: cout << "Nothing to do" << endl;
		}

	}

}

void decryptFile() {
	ofstream file;
	file.open("../test.txt");
	file << "Writing this to a file.\n";
	file.close();
}