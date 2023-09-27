/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: 7A
*/

#include <iostream>

int main() {

  int UsrInp;
  std::cout << "Please enter a value for the size: ";
  std::cin >> UsrInp;
  std::cout << "This is the requested "<<UsrInp<< "x" <<UsrInp<< " box:\n";

  for (int i=0; i<UsrInp; i++){
    for (int y=0; y<UsrInp; y++){
      std::cout << "*";
    }
    std::cout<<"\n";
  }
}