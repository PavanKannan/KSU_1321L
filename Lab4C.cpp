/*
Class: CSE 1321L
Section: E03
Term: Fall
Instructor: Ilia Jahanshahi
Name: Pavan Kannan
Lab#: 4C
*/

#include <iostream>
using namespace std;
int main() {
  float UsrInt;
  int CaseInt;
  
  std::cout << "Welcome!\n";
  std::cout << "Enter a Number: ";
  std::cin >> UsrInt;

  std::cout
      << "\nWhat Would You Like To Do To This Number: \n0)Get the additive "
         "inverse of the number\n1) Get the reciprocal of the number\n2) "
         "Square the number\n3) Cube the number\n4) Exit the program\n";
  std::cin >> CaseInt;

  switch (CaseInt) {

  case 0:
    std::cout << "The additive inverse of " << UsrInt << " is -" << UsrInt;
    break;

  case 1:
    std::cout << "The Reciprocal of " << UsrInt << " is " << 1 / UsrInt;
    break;

  case 2:
    std::cout << "The Square of " << UsrInt << " is " << UsrInt * UsrInt;
    break;

  case 3:
    std::cout << "The Cube of " << UsrInt << " is " << UsrInt * UsrInt * UsrInt;
    break;

  case 4:
    std::cout << "Thank You, GoodBye!";
    break;
  }
}
