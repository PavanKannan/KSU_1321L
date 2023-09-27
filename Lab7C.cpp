/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: 7C
*/

#include <iostream>

int main() {

  int UsrInp;
  std::cout << "Please enter a value for the size: ";
  std::cin >> UsrInp;
  std::cout << "This is the requested "<<UsrInp<< "x" <<UsrInp<< "  right-triangle:\n";

  for (int i=0; i<UsrInp; i++){
    for (int z=0; z<UsrInp-i+1;z++){
      std::cout <<" ";
    }
    for (int y=0; y<i+1; y++){
      std::cout << "*";
    }
    std::cout<<"\n";
  }
}