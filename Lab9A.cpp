/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Lab9A
*/

#include <iostream>

int main() {
  int arraysize = 10;
  int myarray[arraysize];

  for (int i = 0; i < arraysize; i++) {
    int usrinp;
    std::cout << "Integer " << i + 1 << ": ";
    std::cin >> usrinp;
    myarray[i] = usrinp;
  } // for

  int UsrSearch, TargetResult = 0;
  std::cout << "What is the target number: ";
  std::cin >> UsrSearch;

  for (int i = 0; i < arraysize; i++) {
    if (myarray[i] == UsrSearch) {
      TargetResult = 1;
      break;
    } // if
    else {
      TargetResult = 2;
    } // else

  } // for

  switch (TargetResult) {
  case 1:
    std::cout << "The target is in the set.";
    break;
  case 2:
  default:
    std::cout << "The target is not in the set.";
    break;
  } // switch

} // end