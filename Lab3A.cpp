/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa
Name: Pavan Kannan
Lab#: 3A
*/

#include <iostream>

int main() {

  int CurrentBal;
  std::cout << "Enter Current Balance On Your Credit Card: $";
  std::cin >> CurrentBal;

  float APR, APRPerc;
  std::cout << "\nEnter Annual Percentage Rate(APR): ";
  std::cin >> APR;
  APRPerc = APR / 100;

  std::cout << "\n\nYour Monthly Percentage Rate: " << APR / 12;
  std::cout << "\nYour Minimum Payment: " << CurrentBal * APRPerc / 12;
}