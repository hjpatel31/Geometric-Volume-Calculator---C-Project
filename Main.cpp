#include <iostream>
#include <iomanip>
#include "gshapes.h"

using namespace std;

void userInput(int input);

int main()

{
	int input;
	string userChoice;

	cout << "************************************************************************************************************" << endl;
	cout << "***This C++ project calculates the volume of basic geometric shapes: a sphere, a cylinder, and a cuboid. ***" << endl;
	cout << "************************************************************************************************************" << endl;

	do
	{
		cout << endl << "Please choose a geometrical shape for calculating volume: " << endl;
		cout << "FOR SHPERE PRESS #1!" << endl;
		cout << "FOR CYLINDER PRESS #2!" << endl;
		cout << "FOR CUBOID PRESS #3!" << endl;
		cin >> input;

		userInput(input);

		cout << endl << "Do you want to calculate another volume (y/n): ";
		cin >> userChoice;
	} while (userChoice == "y" || userChoice == "Y");

	return 0;
}

void userInput(int input)

{
	double radius, length, width, height;

	if (input > 0 && input <=3 )
	{
		if (input == 1)
		{
			cout << endl << "You have choosen Sphere!" << endl;
			cout << "Please enter the radius of sphere: ";
			cin >> radius;
			cout << "Volume of Sphere is: " << volume(radius) << endl;
		}
		else if (input == 2)
		{
			cout << endl << "You have choosen Cylinder!" << endl;
			cout << "Please enter the radius of Cylinder: ";
			cin >> radius;
			cout << "Please enter the height of Cylinder: ";
			cin >> height;
			cout << "Volume of Cylinder is: " << volume(radius, height) << endl;
		}
		else
		{ 
			cout << endl << "You have choosen Cuboid!" << endl;
			cout << "Please enter the radius of Cuboid: ";
			cin >> radius;
			cout << "Please enter the height of Cuboid: ";
			cin >> height;
			cout << "Please enter the width of Cuboid: ";
			cin >> width;
			cout << "Volume of Cuboid is: " << volume(radius, height) << endl;
		}
		
	}
	else
	{
		cout << "INVALID INPUT!!! PLEASE TRY AGAIN" << endl;
	}
	return;
}

