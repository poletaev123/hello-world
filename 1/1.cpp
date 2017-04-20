#include <iostream>
#include <conio.h>
#include "1.h"

using namespace std;

#define Pi 3.1416

//constructor
Circle::Circle()
{
     Radius = 1;
     Ference = 2 * Pi;
	 Area = Pi;
}

Circle::Circle(double a) 
{
    Radius = a;
    Ference = 2 * Pi * Radius;
    Area = Ference * Radius / 2;
}


void Circle::SetRadius(double a) 
{
    Radius = a;
    Ference = 2 * Pi * Radius;
    Area = Ference*Radius / 2;
}
double Circle::GetRadius() const 
{
    return Radius;
}


void Circle::SetFerence(double a) 
{
    Ference = a;
    Radius = Ference / (2 * Pi);
    Area = Ference*Radius / 2;
}
double Circle::GetFerence() const 
{
    return Ference;
}


void Circle::SetArea(double a) 
{
    Area = a;
    Radius = sqrt(Area / Pi);
    Ference = 2 * Pi * Radius;
}
double Circle::GetArea() const 
{
    return Area;
}


Circle::~Circle()
{

}

int main() {

	Circle circle1(6378.1);

	Circle circle2;
	circle2.SetFerence(circle1.GetFerence() + 1);

	cout << "distinction " << circle2.GetRadius() - circle1.GetRadius() << endl;

	Circle circle3(3);
	Circle circle4(4);

	double doroga = (circle4.GetArea() - circle3.GetArea()) * 1000;
	double ograda = circle4.GetFerence() * 2000;
	double itogo = doroga + ograda;

		cout << "\n Price of the walkway " << doroga << endl;
		cout << "Fence price " << ograda << endl;
		cout << "Price for all " << itogo << endl;

	_getch();
	return 0;
}