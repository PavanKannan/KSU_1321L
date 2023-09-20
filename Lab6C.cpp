/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: 6C
*/

#include <iostream>

int main() {
  std::cout
      << "Welcome!\nYou have $1000 in your account.";
  int Usrbal = 1000;
  char UsrInp;
  
  do {
    std::cout << "\n\nMenu\n0 – Make a deposit\n1 – Make a withdrawal\n2 – Display account value\n";
    int UsrMenu;
    std::cin >> UsrMenu;    

    switch (UsrMenu) {
      case 0:
      std::cout << "\nHow much would you like to deposit? :";
      int Usrdeposit;
      std::cin >> Usrdeposit;
      Usrbal = Usrbal + Usrdeposit;
      std::cout << "Your current balance is $ " << Usrbal;
      break;

      case 1:
      std::cout << "How much would you like to withdraw? :";
      int UsrWithdraw;
      std::cin >> UsrWithdraw;
      Usrbal = Usrbal - UsrWithdraw;
      std::cout << "Your current balance is $ " << Usrbal;
      break;

      case 2:
      std::cout << "Your current balance is $ " << Usrbal;
      break;

      default:
      std::cout << "Invalid Input";
    }//Switch

    std::cout << "\n\nWould you like to return to the main menu (Y/N)? : ";
    std::cin >> UsrInp;
    
      }//Do while
  while ( UsrInp == 'Y' || UsrInp == 'y');  
}//End