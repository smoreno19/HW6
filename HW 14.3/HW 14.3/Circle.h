#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle {
public:
	Circle();
	Circle(double);
	double getArea() const;
	double getRadius() const;
	void setRadius(double);
	static int getNumberOfObjects();
	bool operator > (Circle& C);
	bool operator >= (Circle& C);
	bool operator == (Circle& C);
	bool operator != (Circle& C);
	bool operator < (Circle& C);
	bool operator <= (Circle& C);
private:
	double radius;
	static int numberOfObjects;
};
#endif // !CIRCLE_H