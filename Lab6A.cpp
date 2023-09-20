/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: 6A
*/

#include <iostream>

int main() {
  std::cout
      << "Please enter 10 numbers and this program will display the largest.";
  int a, c;
  c = 0;

  for (int i = 1; i < 11; i++) {
    std::cout << "\nPlease enter number " << i << ":";
    std::cin >> a;

    if (a >= c) {
      c = a;
    }
  }

  std::cout << "The largest number was " << c;
}