/*
Class: CSE 1321L
Section: E03
Term: Fall
Instructor: Ilia Jahanshahi
Name: Pavan Kannan
Lab#: 5C
*/

#include <iostream>
using namespace std;
int main() {
  int UsrX, UsrY;

  std::cout << "Enter X Coordinate: ";
  std::cin >> UsrX;

  std::cout << "Enter Y Coordinate: ";
  std::cin >> UsrY;

  if (UsrX == 0) {
    if (UsrY == 0){
      std::cout << "This Point is this Origin";
    } else {
      std::cout << "This Point is on Y-axis";
    }
  }

  else if (UsrY == 0) {
    if (UsrX == 0){
      std::cout << "This Point is this Origin";
    } else {
      std::cout << "This Point is on X-axis";
    }
  }
    
  else if (UsrX > 0) {
    if (UsrY > 0){
      std::cout << "This Point is on the First Quadrant";
    } 
    else {
      std::cout << "This Point is on the Fourth Quadrant";
    }
  }
    
  else {
    if (UsrY > 0){
      std::cout << "This Point is on the Second Quadrant";
    } 
    else {
      std::cout << "This Point is on the Third Quadrant";
    }
  }
  
}
