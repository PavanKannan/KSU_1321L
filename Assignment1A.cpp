/*
Class: CSE 1321L
Section : E03
Term : Fall 2023
Instructor : Illa Jahanshahi
Name : Pavan Kannan
Lab# : Assignment1A
*/

#include <iostream>

int main() {
  int RedUsr, GreenUsr, BlueUsr;
  float PercUsr, RedTmp, GreenTmp, BlueTmp, RedPerc, GreenPerc, BluePerc,
      PercOut;

  std::cout << " Enter A Red Value (0-255):";
  std::cin >> RedUsr;

  std::cout << "\nEnter A Green Value (0-255):";
  std::cin >> GreenUsr;

  std::cout << "\nEnter A Blue Value (0-255):";
  std::cin >> BlueUsr;

  std::cout << "\nEnter A Percentage Value (0.0-1.0):";
  std::cin >> PercUsr;

  RedTmp = PercUsr * RedUsr;
  GreenTmp = PercUsr * GreenUsr;
  BlueTmp = PercUsr * BlueUsr;

  RedPerc = RedUsr + RedTmp;
  GreenPerc = GreenUsr + GreenTmp;
  BluePerc = BlueUsr + BlueTmp;

  PercOut = PercUsr * 100;

  std::cout << "\nA " << PercOut << "% Brigter Tint Of RGB (" << RedUsr << ", "
            << GreenUsr << ", " << BlueUsr << ") is RGB (" << RedPerc << ", "
            << GreenPerc << ", " << BluePerc << ").";
}
