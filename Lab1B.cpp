/*
Class: CSE 1321L
Section: E03
Term: Fall
Instructor: Ilia Jahanshahi
Name: Pavan Kannan
Lab#: 1B
*/

// Lab1B
// Demonstrate reading a string from the user.
// Reads a character string from the user and prints it.
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string message;
	cout << "Enter a line of text: ";
	getline(cin, message);
	cout << "You wrote'" << message << "'" << endl;
}