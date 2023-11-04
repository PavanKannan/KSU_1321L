/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Lab11A
*/

#include <iostream>

bool while_loop(std::string usrChoice) {
  std::string myArray[9] = {"Yes", "YES", "yes", "yEs", "yeS",
                            "YEs", "yES", "YeS", "yeS"};
  for (int i = 0; i < 9; i++) {
    if (usrChoice == myArray[i]) {
      return true;
    }
  }
  return false;
}

int main() {
  std::string choice2;
  do {
    int choice;
    std::cout << "\nMenu\n0 - Hello World\n1 - Goodbye Moon\n2 - Walking on Sunshine\n\nWhat would you like to do: ";
    std::cin >> choice;
    switch (choice) {
    case 0:
      std::cout << "\nHello!";
      break;
    case 1:
      std::cout << "\nOk, bye.";
      break;
    case 2:
      std::cout << "\nWHOA!";
      break;
    default:
      std::cout << "\nInvalid Input";
      break;
    }
    std::cout << "\n\nType YES to rerun. ";
    std::cin >> choice2;
  } while (while_loop(choice2));
}
