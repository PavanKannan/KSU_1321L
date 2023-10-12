/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Assignment4B
*/

#include <iostream>

using namespace std;

int main() {
  int FontSize, FontWeight;
  
  std::cout << "[Plus Sign ASCII Art]" << endl;

  std::cout << "Font-Size: ";
  std::cin >> FontSize;

  std::cout << "Font-Weight: ";
  std::cin >> FontWeight;

  for (int i = 1; i <=FontSize; i++){
    std::cout << std::string(FontWeight, '|') << endl; 
  }

  if(FontWeight == 1){
    for (int i = 1; i <=FontSize; i++){
    std::cout << std::string(FontSize, '-'); 
  }
    std::cout << endl;
  }
  else{
    for (int y = 1;y<=FontWeight;y++){
      std::cout << std::string(FontSize*2, '-') << endl; 
    }
  }

  for (int i = 1; i <=FontSize; i++){
    std::cout << std::string(FontWeight, '|') << endl; 
  }
  
  
} // End