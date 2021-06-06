#include<iostream>
#include <fstream>
#include<string>
#include<iomanip>
using namespace std;

bool openFile(fstream &infile, string name);

int main() {
	fstream infile;
	string filename;
	string buffer;

	cout << "File Name: ";
    //ENTER "datas.txt"
	getline(cin, filename);
	bool status = openFile(infile, filename);
	if (!status) {
		cout << "File Open Status: Failure!";
	}
	cout << "File Open Status: Succession" << endl;

	getline(infile, buffer);
	cout << buffer << endl;
	while (!infile.eof()) {
		getline(infile, buffer);
		cout << buffer << endl;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}

bool openFile(fstream &infile, string name) {
	infile.open(name, ios::in);
	
	if (infile.fail()) {
		return false;
	}
	else {
		return true;
	}
}





