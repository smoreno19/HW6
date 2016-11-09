////
//Silvia Moreno
// CS-172
// 11/6/16
// HW 13.1 " Create a text file"
////

#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream fout;
	//calls the exercise text file
	fout.open("Exercise13_1.txt");
	// if it fails to open then it does not exist
	if (fout.fail()) {
		cout << "The file does not exist" << endl;
		return 0;
		//ends the program
	}
// lets you append the text file
	fout.open("Exercise13_1.txt", ios::in);
//for loop to output the numbers 1-100 
	for (int x = 1; x < 100; x++) {
		fout.open("Exercise13_1.txt", ios::out | ios::app);
//outputs the numbers 
		cout << x << " "; 
	}
	//closes the file
	fout.close();
	return 0;
}