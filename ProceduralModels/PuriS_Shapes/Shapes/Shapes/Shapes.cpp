// Shapes.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Shape.h"
#include "GenerateModels.h"

int main()
{
	int input = 0;
	cout << "Welcome to the shape generator!" << endl << endl;
	while (input != 7) 
	{
		cout << "Please select the number of shape you want to generate: " << endl;
		cout << "1. Triangle" << endl;
		cout << "2. Quad" << endl;
		cout << "3. Box" << endl;
		cout << "4. Disc" << endl;
		cout << "5. Cylinder" << endl;
		cout << "6. Sphere" << endl;
		cout << "7. Quit" << endl;

		cin >> input;

		if (input == 1) 
		{
			if (triangle("triangle.obj")) 
			{
				cout << "Triangle created" << endl;
			}
			else 
			{
				cout << "Triangle not created" << endl;
			}
		}
		else if (input == 2)
		{
			if (quad("quad.obj"))
			{
				cout << "Quad created" << endl;
			}
			else
			{
				cout << "Quad not created" << endl;
			}
		}
		else if (input == 3)
		{
			if (cube("box.obj"))
			{
				cout << "Box created" << endl;
			}
			else
			{
				cout << "Box not created" << endl;
			}
		}
		else if (input == 4)
		{
			if (disk("disc.obj", 6))
			{
				cout << "Disc created" << endl;
			}
			else
			{
				cout << "Disc not created" << endl;
			}
		}
		else if (input == 5)
		{
			if (cylinder("cylinder.obj", 12))
			{
				cout << "Cylinder Created" << endl;
			}
			else
			{
				cout << "Cylinder not created" << endl;
			}
		}
		else if (input == 6)
		{
			if (sphere("sphere.obj", 24, 36))
			{
				cout << "Sphere Created" << endl;
			}
			else
			{
				cout << "Sphere not created" << endl;
			}
		}
		cin.get();
	}
    return 0;
}

