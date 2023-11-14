/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Lab12A
*/

#include <iostream>

class Chair {
public:
  int numOfLegs;
  bool rolling;
  std::string material;
};

std::string rolling(bool rolling) {
  if (rolling == true) {
    return "is rolling";
  } else {
    return "is not rolling";
  }
};

int main() {
  Chair chairObj;

  std::cout << "You are about to create a chair.\n";
  std::cout << "How many legs does your chair have: ";
  std::cin >> chairObj.numOfLegs;
  std::cout << "Is your chair rolling (true/false): ";
  std::cin >> chairObj.rolling;
  std::cout << "What is your chair made of: ";
  std::cin >> chairObj.material;

  std::cout << "\nYour chair has " << chairObj.numOfLegs << " legs, "
            << rolling(chairObj.rolling) << ", and is made of "
            << chairObj.material << ".\n";

  std::cout << "\nThis program is going to change that.\n";

  chairObj.numOfLegs = 4;
  chairObj.rolling = false;
  chairObj.material = "wood";

  std::cout << "\nYour chair has " << chairObj.numOfLegs << " legs, "
            << rolling(chairObj.rolling) << ", and is made of "
            << chairObj.material << ".\n";
};