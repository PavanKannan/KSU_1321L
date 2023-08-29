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
  int UsrTime, UsrHr, UsrMin, UsrSec;

  std::cout << "\n[Convert Seconds]\n\n";

  std::cout << "Enter Time in Seconds: ";
  std::cin >> UsrTime;

  std::cout << "\n\n[Converting...]\n\n";

  UsrHr = UsrTime / 3600;
  UsrMin = (UsrTime % 3600) / 60;
  UsrSec = (UsrTime % 3600) % 60;

  std::cout << UsrTime << " Seconds == " << UsrHr << " Hour(s), " << UsrMin
            << " Minute(s), " << UsrSec << " Second(s)"
            << ".";
}