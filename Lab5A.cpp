/*
Class: CSE 1321L
Section: E03
Term: Fall
Instructor: Ilia Jahanshahi
Name: Pavan Kannan
Lab#: 5A
*/

#include <iostream>
using namespace std;
int main() {
  char UsrInpDP, UsrInpCDP;
  
  std::cout << "Do You Have A Driving Permit (Y/N)?";
  std::cin >> UsrInpDP;
  
  if (UsrInpDP == 'Y' || UsrInpDP == 'y') {
    std::cout << "Do You Have A Commercial Driving Permit (Y/N)?";
    std::cin >> UsrInpCDP;
    
    if (UsrInpCDP == 'Y' || UsrInpCDP == 'y') {
      std::cout << "Congratulations! You can purchase a vehicle, let’s start talking options!";
    }
      
    else{
      std::cout<<"Commercial driving license is a prerequisite to purchase a vehicle!";
    }
  }
    
  else{
    std::cout<<"Driving permit is a prerequisite to purchase a vehicle! ";
  }
}
