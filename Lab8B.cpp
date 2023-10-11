/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Lab8B
*/

#include <iostream>

int main() {
  int UsrRow, UsrColn;
  std::cout << "Please enter the number of rows: ";
  std::cin >> UsrRow;
  std::cout << "Please enter the number of columns: ";
  std::cin >> UsrColn;

  std::cout << "\nI have " << UsrRow << " rows and " << UsrColn
            << " columns. I need to fill-up " << UsrRow * UsrColn
            << " spaces.\n\n";
  int array1[UsrRow][UsrColn];

  std::cout<<"The " << UsrRow << "x" << UsrColn << " array:\n";
  
  for (int i=0; i<UsrRow; i++) {
    std::cout << "\n";
    
    for (int j=0; j<UsrColn; j++) {
      array1[i][j] = (i*UsrColn) + j + 1;
      std::cout << array1[i][j] << " | ";
      
    }
  }

} // end