/*
Class: CSE 1321L
Section: E03
Term: Fall
Instructor: Ilia Jahanshahi
Name: Pavan Kannan
Lab#: 1C
*/

#include <iostream>
using namespace std;

int main()
{
	int miles;
	double gallons, mpg;
	cout << "Enter the number of miles: ";
	cin >> miles;
	cout << "Enter the gallons of fuel used: ";
	cin >> gallons;
	mpg = miles / gallons;
	cout << "Miles Per Gallon: " << mpg << endl << endl;
}
