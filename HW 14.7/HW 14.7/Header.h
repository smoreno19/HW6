#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>
#include <cmath>
class Complex {
	private:
		//private variables
		int realPart;
		int ImaginaryPart;
	public:
		double a;
		double b;
		double i = sqrt(-1); //i is equal to square root of -1

		Complex();
		Complex(double r);
		double getRealPart();
		double getImaginaryPart();
		double add(const Complex& secondcomplexNumber) const;
		double subtract(const Complex& secondcomplexNumber) const;
		double absolute(const Complex& secondcomplexNumber) const;
		double multiply(const Complex& secondcomplexNumber) const;
		double divide(const Complex& secondcomplexNumber) const;
		string toString();
		Complex& operator+=(const Complex& secondcomplexNumber);
		Complex& operator-=(const Complex& secondcomplexNumber);
		Complex& operator*=(const Complex& secondcomplexNumber);
		Complex& operator/=(const Complex& secondcomplexNumber);
		friend ostream& operator<<(ostream& out, const Complex& c);
		friend istream& operator >> (istream& in, Complex& c1);
		int& operator[](int index);
		Complex& operator++();
		Complex& operator--();
		Complex& operator+();
		Complex& operator-();
};
//outside of class functions
		bool operator==(const Complex& c1, const Complex& c2);
		bool operator>=(const Complex& c1, const Complex& c2);
		bool operator<=(const Complex& c1, const Complex& c2);
		bool operator<(const Complex& c1, const Complex& c2);
		bool operator >(const Complex& c1, const Complex& c2);
		bool operator!=(const Complex& c1, const Complex& c2);

		Complex operator+(const Complex& c1, const Complex& c2);
		Complex operator-(const Complex& c1, const Complex& c2);
		Complex operator*(const Complex& c1, const Complex& c2);
		Complex operator/(const Complex& c1, const Complex& c2);

#endif
