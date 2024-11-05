#include <iostream>

#include <cmath>

const double PI = 3.1416;

double volume(double radius)     //volume of sphere
{
	return PI * pow(radius, 2);
}

double volume(double radius, double height)   //volume of cylinder
{
	return PI * pow(radius, 2) * height;
}

double volume(double length, double height, double width) //volume of cuboid
{
	return length * width * height;
}