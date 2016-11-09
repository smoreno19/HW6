////
// Silvia Moreno
// CS-172
// 11/6/16
// HW 14.3 "The Circle Class"
////
#include <iostream>
#include "Circle.h"
using namespace std;


	int Circle::numberOfObjects = 0;
	Circle::Circle() {
		radius = 1;
		numberOfObjects++;
	}
	Circle::Circle(double newRadius) {
		radius = newRadius;
		numberOfObjects++;
	}
	double Circle::getArea() const
	{
		return radius * radius * 3.14159;
	}
	double Circle::getRadius() const {
		return radius;
	}
	void Circle::setRadius(double newRadius) {
		radius = (newRadius >= 0) ? newRadius : 0;
	}
	int Circle::getNumberOfObjects() {
		return numberOfObjects;
	}
	bool Circle::operator >= (Circle& C)
	{
		return (getRadius() >= C.getRadius());
	}
	bool Circle::operator > (Circle& C) {
		return C.getRadius() > getRadius();
	}
	bool Circle::operator ==(Circle& C) {
		return getRadius() == C.getRadius();
	}
	bool Circle::operator <=(Circle& C) {
		return getRadius() <= C.getRadius();
	}
	bool Circle::operator <(Circle& C) {
		return C.getRadius() < getRadius();
	}
	bool Circle::operator !=(Circle& C) {
		return C.getRadius() != 0;
	}
int main() {
	Circle c1;
	return 0;
}