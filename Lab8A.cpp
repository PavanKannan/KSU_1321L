/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Lab8A
*/

#include <iostream>

int main() {
  int array1[5], array2[5];

  std::cout << "Please enter 5 integers for the first array:\n";
  for (int i = 0; i < 5; i++) {
    std::cout << "Integer " << i + 1 << ": ";
    std::cin >> array1[i];
  }

  std::cout << "Please enter 5 integers for the Second array:\n";
  for (int i = 0; i < 5; i++) {
    std::cout << "Integer " << i + 1 << ": ";
    std::cin >> array2[i];
  }

  std::cout << "The resulting sums are " << array1[0] + array2[0] << "| "
            << array1[1] + array2[1] << "| " << array1[2] + array2[2] << "| "
            << array1[3] + array2[3] << "| " << array1[4] + array2[4] << "| ";

} // end