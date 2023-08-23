/*
Class: CSE 1321L
Section: E03
Term: Fall 2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: 2C
*/

#include <iostream>

int main()
{
	int UserWidth, UserHeight, UserPerimeter, UserArea, UserSum;
	
	std::cout << "Enter A Width:";
	std::cin >> UserWidth;

	std::cout << "\nEnter A Height:";
	std::cin >> UserHeight;

	UserSum = UserHeight + UserWidth;
	UserPerimeter = 2 * UserSum;
	UserArea = UserHeight * UserWidth;

	std::cout << "\nThe Area is:" << UserArea;
	std::cout << "\nThe Perimeter is:" << UserPerimeter;

}
