/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: 3A
*/

#include <iostream>
#include <cmath>

int main() {

  int CurrentBal;
  std::cout << "Enter Current Balance On Your Credit Card: $";
  std::cin >> CurrentBal;

  float APR, APRPerc;
  std::cout << "\nEnter Annual Percentage Rate(APR): ";
  std::cin >> APR;
  APRPerc = APR / 100;

  std::cout << "\n\nYour Monthly Percentage Rate: " << round((APR / 12)*1000)/1000;
  std::cout << "\nYour Minimum Payment: " << round((CurrentBal * APRPerc / 12)*100)/100;
}