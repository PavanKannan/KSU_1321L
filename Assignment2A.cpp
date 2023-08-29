/*
Class: CSE 1321L
Section : E03
Term : Fall 2023
Instructor : Illa Jahanshahi
Name : Pavan Kannan
Lab# : Assignment2A
*/

#include <cmath>
#include <iostream>

int main() {
  int OctaSide;
  std::cout << "[OCTAGON]";

  std::cout << "\n\nEnter Length Of One Octagon Side: ";
  std::cin >> OctaSide;

  double OctaFormula = 2 * (1 + sqrt(2)) * (OctaSide * OctaSide);
  std::cout << "\n\nOctagon Perimeter: " << OctaSide * 8;
  std::cout << "\nOctagon Area: " << OctaFormula;

  int CylinderHeight, CylinderRadius;
  std::cout << "[Cylinder]";

  std::cout << "\n\nEnter Height Of Cylinder: ";
  std::cin >> CylinderHeight;

  std::cout << "\nEnter Radius Of Cylinder: ";
  std::cin >> CylinderRadius;

  std::cout << "\n\nCylinder Perimeter: "
            << 4 * CylinderRadius + 2 * CylinderHeight;

  double CylinderTSA = (2*3.14*CylinderRadius)*(CylinderRadius+CylinderHeight);
  std::cout <<"\nCylinder Total Surface Area: " << CylinderTSA;  
}
