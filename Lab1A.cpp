/*
Class: CSE 1321L
Section: E03
Term: Fall
Instructor: Ilia Jahanshahi 
Name: Pavan Kannan
Lab#: 1A
*/

// Lab1A
// Demonstrate the difference of include endl (endline)
// Prints two lines of output representing a rocket countdown.
#include <iostream>
using namespace std;
int main()
{
	cout << "Three... ";
	cout << "Two... ";
	cout << "One... ";
		cout << "Zero... ";
	cout << "Liftoff!" << endl;
	// appears on first line
	cout << "Houston, we have a problem." << endl << endl;
}