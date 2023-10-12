/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Assignment4C
*/

#include <iostream>

using namespace std;

int main() {
  int ThreeGallon, FiveGallon, UsrInp;

  ThreeGallon = 0;
  FiveGallon = 0;

  do {
    std::cout << "Options \n"
              << "1) Fill the 5 gallon can from the fountain \n"
              << "2) Fill the 3 gallon can from the fountain \n"
              << "3) Pour the 5 gallon can into the 3 gallon jug\n"
              << "4) Pour the 3 gallon can into the 5 gallon jug\n"
              << "5) Empty the 5 gallon can into the fountain\n"
              << "6) Empty the 3 gallon can into the fountain\n"
              << "What will you do? ";
    std::cin >> UsrInp;

    switch (UsrInp) {
    case1:
      FiveGallon = 5;
      std::cout << "The 3 gallon can has " << ThreeGallon
                << " gallons of water. The 5 gallon can has " << FiveGallon
                << " gallons of water."<<endl;
      break;

    case2:
      ThreeGallon = 3;
      std::cout << "The 3 gallon can has " << ThreeGallon
                << " gallons of water. The 5 gallon can has " << FiveGallon
                << " gallons of water."<<endl;
      break;

    case3:
      if(ThreeGallon != 3){
        FiveGallon = FiveGallon - ThreeGallon;
        ThreeGallon = 3;
      }
      std::cout << "The 3 gallon can has " << ThreeGallon
                << " gallons of water. The 5 gallon can has " << FiveGallon
                << " gallons of water."<<endl;
      break;
      
    case4:
      if(FiveGallon!=5){
        ThreeGallon = ThreeGallon - FiveGallon;
        FiveGallon = 5;
      }
      std::cout << "The 3 gallon can has " << ThreeGallon
                << " gallons of water. The 5 gallon can has " << FiveGallon
                << " gallons of water."<<endl;
      break;

    case5:
      FiveGallon = 0;
      std::cout << "The 3 gallon can has " << ThreeGallon
                << " gallons of water. The 5 gallon can has " << FiveGallon
                << " gallons of water."<<endl;
      break;

    case6:
      ThreeGallon = 0;
      std::cout << "The 3 gallon can has " << ThreeGallon
                << " gallons of water. The 5 gallon can has " << FiveGallon
                << " gallons of water."<<endl;
      break;
    }

  } while (FiveGallon != 4);

  std::cout << "You saved Bruce Willis and Samuel L. Jackson! You win!";
} // End
