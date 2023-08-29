/*
Class: CSE 1321L
Section : E03
Term : Fall 2023
Instructor : Illa Jahanshahi
Name : Pavan Kannan
Lab# : Assignment2B
*/

#include <iostream>

int main() {
  int XCordinate, YCordinate, HBWidth, HBHeight;

  std::cout << "Enter X-Coordinate (Bottom-Left Corner): ";
  std::cin >> XCordinate;
  std::cout << "\nEnter Y-Coordinate (Bottom-Left Corner): ";
  std::cin >> YCordinate;

  std::cout << "\n\nHit Box Width: ";
  std::cin >> HBWidth;
  std::cout << "\nHit Box Height: ";
  std::cin >> HBHeight;

  std::cout << "\n\nBottom-Left: " << XCordinate << ", " << YCordinate;
  std::cout << "\nTop-Left: " << XCordinate << ", " << YCordinate + HBHeight;
  std::cout << "\nBottom-Right: " << XCordinate + HBWidth << ", " << YCordinate;
  std::cout << "\nTop-Right: " << XCordinate + HBWidth << ", "
            << YCordinate + HBHeight;
}