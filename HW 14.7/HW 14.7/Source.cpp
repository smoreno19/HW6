////
// Silvia Moreno
// CS-172
// HW 14.7 " Math: The Complex Class"
// 11/6/16
////
#include <iostream>
#include <string> //allows string to work
#include <cstdlib>
#include <sstream> //allows the streams to work
#include <cmath>
#include "Header.h" //include the header file
using namespace std;
//default constructor
	Complex::Complex() {

	}
	Complex::Complex (double r) {
		getRealPart();
		getImaginaryPart();
	}
	double Complex::getRealPart() {
		return realPart;
	}
	double Complex::getImaginaryPart() {
		return ImaginaryPart;
	}
	//operations functions aa. subtract, divide, multiply, absolute
	double Complex::add(const Complex& secondcomplexNumber) const {
		double c, d;
	(a + c) + ((b + d)*i)= (a + b*i) + (c + d*i );
	return	(a + c) + ((b + d)*i);
	}
	double Complex::subtract(const Complex& secondcomplexNumber) const{
		double c, d;
	((a - c) + ((b - d)*i)) = (a + b*i ) - (c + d*i) ;
	return (a - c) + ((b - d)*i);
	}
	double Complex::absolute(const Complex& secondcomplexNumber)const {
		//uses the square root function
		sqrt(a*a + b*b) = abs(a + b*i);
		return sqrt(a*a +b*b);
	}
	double Complex::multiply(const Complex& secondcomplexNumber) const{
		double c, d;
		((a*c - b*d) + ((b*c + a*d)*i)) = (a + b*i)*(c + d*i);
		return (a*c - b*d) + ((b*c + a*c)*i);
	}
	double Complex::divide(const Complex& secondcomplexNumber) const{
		double c, d;
		// the divide equation
		(a*c + b*d) / (c*c + d*d) + ((b*c - a*d)*i) / (c*c + d*d) = (a + b*i) / (c + d*i);
		// returns the equal side of the equation
		return (a*c + b*d) / (c*c + d*d) + ((b*c - a*d)*i) / (c*c + d*d);
	}
	//supposed to output the expression as a string
	string Complex::toString() {
		stringstream ss;
		if (b = 0) {
			return a;
		}
		else {
			ss << a + b*i;
			//returns the expression as a string
			return ss.str();
		}
	}
	Complex& Complex::operator+=(const Complex& secondcomplexNumber) {
		// this pointer is equaled to the add function so the work can be worked through
		*this = add(secondcomplexNumber);
		return *this;
	}
	Complex& Complex::operator-=(const Complex& secondcomplexNumber) {
		*this = subtract(secondcomplexNumber);
		return *this; //returns the this pointer
	}
	Complex& Complex::operator*=(const Complex& secondcomplexNumber) {
		*this = multiply(secondcomplexNumber);
		return *this;
	}// function operators for augemented operators
	Complex& Complex::operator/=(const Complex& secondcomplexNumber) {
		*this = divide(secondcomplexNumber);
		return *this;
	}
	//function operator []
	 int& Complex::operator[](int index) {
		 if (index == 0) {

		 }
	}
	 //function operators of prefix and postfix
	 Complex& Complex::operator++() {

	 }
	 Complex& Complex::operator--() {

	 }
	 //function operators for unary
	 Complex& Complex::operator+() {
		 return *this;
	 }
	 Complex& Complex::operator-() {

	 }
	 //the input and output operator
	 ostream& operator<<(ostream& out, const Complex& c) {
		
	 }
	 istream& operator>>(istream& in, Complex& c1) {
		 //outputs the statement
		 cout << "Enter the first complex number: ";
		 in >> c1;
		 //user inputs their answer
		 cout << "Enter the second complex number: ";
		 in >> c1;
		 //the answer is returned 
		 return in;
	 }
	 //opertors for relational operators
	 bool operator==(const Complex& c1, const Complex& c2) {
		 return c1 == c2;
	 }//compares c1 with c2, returns if true
	 bool operator>=(const Complex& c1, const Complex& c2) {
		 return c1 >= c2;
	 }
	 bool operator<=(const Complex& c1, const Complex& c2) {
		 return c1 <= c2;
	 }//compares c1 with c2 returns if true
	 bool operator<(const Complex& c1, const Complex& c2) {
		 return c1 < c2;
	 }
	 bool operator >(const Complex& c1, const Complex& c2) {
		 return c1 > c2;
	 }
	 bool operator!=(const Complex& c1, const Complex& c2) {
		 return c1 != c2;
	 }
	 //nonmember function operators for arithmetic operators
	 Complex operator+(const Complex& c1, const Complex& c2) {
		 return c1.add(c2);
	 }
	 Complex operator-(const Complex& c1, const Complex& c2) {
		 return c1.subtract(c2);
	 }
	 Complex operator*(const Complex& c1, const Complex& c2) {
		 return c1.multiply(c2);
	 }
	 Complex operator/(const Complex& c1, const Complex& c2) {
		 return c1.divide(c2);
	 }

int main() {
	Complex C;
	//calls out the string functions
	C.toString();
	//implements the operators functions
	C.operator+;
	C.operator-;


	return 0;
}