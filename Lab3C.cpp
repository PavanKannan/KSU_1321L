/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: 3C
*/

#include <iostream>

int main() {
  int NoQuarters, NoDimes, NoNickels, NoPennies;
  std::cout << "\n\nEnter The Number Of Quarters: ";
  std::cin >> NoQuarters;

  std::cout << "\nEnter The Number Of Dimes: ";
  std::cin >> NoDimes;

  std::cout << "\nEnter The Number Of Nickels: ";
  std::cin >> NoNickels;

  std::cout << "\nEnter The Number Of Pennies: ";
  std::cin >> NoPennies;

  std::cout << "\n\nYou Entered " << NoQuarters << " Quarters.";
  std::cout << "\nYou Entered " << NoDimes << " Dimes.";
  std::cout << "\nYou Entered " << NoNickels << " Nickels.";
  std::cout << "\nYou Entered " << NoPennies << " Pennies.";

  int CQuarters, CDimes, CNickels, CPennies;
  CQuarters = NoQuarters * 25;
  CDimes = NoDimes * 10;
  CNickels = NoNickels * 5;
  CPennies = NoPennies * 1;

  int TotalCent = CQuarters + CDimes + CNickels + CPennies;

  std::cout << "\n\nYour Total Is " << TotalCent / 100 << " Dollars And "
            << TotalCent % 100 << " Cents.";

}