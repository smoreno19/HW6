////
//Silvia Moreno
// CS-172
// HW 13.5 "Baby name popularity ranking"
// 11/6/16
////

#include <iostream>
#include <fstream> //allows the files to work
#include <string>
using namespace std;

int main() {
	fstream f10, f11, f12, f13, f14;
	//opens all of the text files 
	f10.open("Babynameranking2010.txt");
	f11.open("Babynameranking2011.txt");
	f12.open("Babynameranking2012.txt");
	f13.open("Babynameranking2013.txt");
	f14.open("Babynameranking2014.txt");

	//if they dont open then they dont exist. if either one dont.
	if (f10.fail() || f11.fail() || f12.fail() || f13.fail() || f14.fail()) {
		cout << "The text file does not exist." << endl;
		return 0;
	}
	//declare variables
	int year;
	char gender;
	string name;
	//
		cout << "Enter a year from 2010-2014: " << endl;
		cout << "Enter an 'M' for Male or 'F' for Female: " << endl;
		cout << "Enter a name of the chosen gender: " << endl;

	while (!f10.eof() || !f11.eof() || !f12.eof() || !f13.eof() || !f14.eof()) {
		//the user inputs the name, gender and year
	cin >> year >> gender>> name;
	//outputs based on what the user inputs
		cout << name << " is ranked in the year " << year << endl;
		break;
	}
	//closes the files 
	f10.close();
	f11.close();
	f12.close();
	f13.close();
	f14.close();

	return 0;
}