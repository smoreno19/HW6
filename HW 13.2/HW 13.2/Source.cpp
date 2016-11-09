////
// Silvia Moreno
// CS-172
// HW: 13.2 "Count Characters"
// 11/6/16
/////

#include <iostream>
#include <string>
#include <fstream> //allows the files to work
using namespace std;
int main() {
	string name;
	cout << "Please enter a file name: " << endl;
	cin >> name;
	//user inputs file name
	fstream fame;
	fame.open(name);
	//opens the file that the user inputs
	if (fame.fail()) {
		//if the file does not exist it will output this
		cout << "The file does not exist." << endl;
		return 0;
	}
	fame.close(); 
	//closes the file

	int count = 0;
	while (!fame.eof()) { 
		//if the file has not ended 
		fame.get(); 
		// it gets the file and counts the number of characters
		count++;
	}
	fame.close();
	//closes the file
	cout << "The number of characters is: " << count << endl;
	//counts the number of characters in the file.
	return 0;
}