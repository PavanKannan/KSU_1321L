/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Lab10A
*/

#include <iostream>
int max(int x, int y) {
  if (x > y) {
    return x;
  } else {
    return y;
  }
}

int min(int x, int y) {
  if (x < y) {
    return x;
  } else {
    return y;
  }
}

float average(int x, int y) {
  float avg = (x + y) / 2.0;
  return avg;
}

int main() {
  int num1, num2;
  std::cout << "Enter Number 1: ";
  std::cin >> num1;
  std::cout << "Enter Number 2: ";
  std::cin >> num2;
  std::cout << "Min is " << min(num1, num2) << std::endl;
  std::cout << "Max is " << max(num1, num2) << std::endl;
  std::cout << "Average is " << average(num1, num2) << std::endl;
}
