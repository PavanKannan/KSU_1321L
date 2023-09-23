/*
Class: CSE 1321L
Section: E03
Term: Fall
Instructor: Ilia Jahanshahi
Name: Pavan Kannan
Lab#: Assignment3C
*/

#include <iostream>
using namespace std;
int main() {
  std::cout << "[Guess The Colour Mode]";

  std::cout << "\nHow many channels does your image have?";
  int UsrChannel;
  std::cin >> UsrChannel;

  if ( UsrChannel == 2)
  {
    std::cout << "It is a Grayscale image.";
  }

  else if ( UsrChannel == 4 )
  {
    std::cout << "What is its BPC Value? ";
    int UsrBPC;
    std::cin >> UsrBPC;

    if ( UsrBPC == 32)
    {
      std::cout << " It is a RGB image.";
    }
    else if ( UsrBPC == 8 || UsrBPC == 16)
    {
      std::cout << "What image format is it? ";
      std::string UsrFormat;
      std::cin >> UsrFormat;

      if (UsrFormat == "TIFF")
      {
        std::cout << " It is a CMYK image.";
      }
      else if (UsrFormat=="PNG")
      {
        std::cout << "It is a RGB image.";
      }
      else
      {
        std::cout << "This Image's color mode can not be determined.";
      }
      
    }

      else
  {
    std::cout << "This Image's color mode can not be determined.";
  }
    
  }

  else
  {
    std::cout << "This Image's color mode can not be determined.";
  }
  
}//End
