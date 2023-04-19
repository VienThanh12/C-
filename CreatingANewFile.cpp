#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string word;
	ofstream myFile;

	myFile.open("thisismyfile.txt");

	cout << "Type five words to save into file: " << endl;

	for (int i = 0;i < 5;i++) {
		cout << "> ";
		cin >> word;
		myFile << word << endl;
	}

	myFile.close();
}
