/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Lab10B
*/

#include <iostream>

bool isValid(double width, double height) {
  if (width > height) {
    return true;
  } else {
    return false;
  }
}

double area(double width, double height) { return width * height; }
double perimeter(double width, double height) { return (width + height) * 2; }

int main() {
  int whileloop = 1;
  do {
    int num1, num2;
    std::cout << "Enter Number 1: ";
    std::cin >> num1;
    std::cout << "Enter Number 2: ";
    std::cin >> num2;
    if (isValid(num1, num2)) {
      std::cout << "This is a valid rectangle" << std::endl;
      std::cout << "The area is: " << area(num1, num2) << std::endl;
      std::cout << "The perimeter is: " << perimeter(num1, num2) << std::endl;
    } else {
      std::cout << "This is an invalid rectangle" << std::endl;
    }
    std::string choice;
    std::cout << "\nDo you want to enter another width and height (Y/N)? : ";
    std::cin >> choice;
    if (choice == "Y" || choice == "y") {
      whileloop = 1;
    } else {
      whileloop = 0;
    }
  } while (whileloop == 1); // while
}
