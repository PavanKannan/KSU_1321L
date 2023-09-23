/*
Class: CSE 1321L
Section: E03
Term: Fall
Instructor: Ilia Jahanshahi
Name: Pavan Kannan
Lab#: 5B
*/

#include <iostream>
using namespace std;
int main() {
  int UsrInp, SwitchInp;

  std::cout << "Enter A Interger: ";
  std::cin >> UsrInp;

  if (UsrInp % 2 == 0) {
    SwitchInp = 2;
  } else if (UsrInp % 3 == 0) {
    SwitchInp = 3;
  } else if (UsrInp % 5 == 0) {
    SwitchInp = 5;
  } else {
    SwitchInp = 0;
  }

  switch(SwitchInp) {
    case 0:
    std::cout << "This number is undetermined.";
    break;
    case 2:
    std::cout << "This number is divisible by 2.";
    break;
    case 3:
    std::cout << "This number is divisible by 3.";
    break;
    case 5:
    std::cout << "This number is divisible by 5.";
    break;

  }
}
