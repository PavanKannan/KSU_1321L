/*
Class: CSE 1321L
Section: E03
Term: Fall
Instructor: Ilia Jahanshahi
Name: Pavan Kannan
Lab#: Assignment3A
*/

#include <iostream>
using namespace std;
int main() {
  char UsrHGPS, UsrVitC, UsrSailor;
  std::string UsrCon;

  std::cout <<"What is your suspected illness? ";
  std::cin >> UsrCon;

  if (UsrCon == "HGPS")
  {

    std::cout << "Do you have Brittle Bones?(Y/N): ";
    std::cin >> UsrHGPS;

    if (UsrHGPS == 'Y' || UsrHGPS == 'y') 
    {
      std::cout << "It is possible that you have HGPS.";
    }
      
    else 
    {
    std::cout << "\n It is not likely that you have HGPS.";
    }
  }

  else if (UsrCon == "Bokter Syndrome")
  {
  
    std::cout << "Do you have a Vitamin C deficiency?(Y/N): ";
    std::cin >> UsrVitC;

    if (UsrVitC == 'Y' || UsrVitC == 'y') 
    {
      std::cout << "\nAre you a sailor?(Y/N): ";
      std::cin >> UsrSailor;

      if (UsrSailor == 'N' || UsrSailor == 'n') 
      {
        std::cout << "It is not likely that you have Bokter Syndrome.";
      }
      
      else 
      {
        std::cout << "It is possible that you have Bokter Syndrome.";
      }
    } 
    
    else 
    {
      std::cout << " It is not likely that you have Bokter Syndrome.";
    }
  }
  
  else
  {
    std::cout<<"It is not likely that you have Lupus.";
  }
  
  
}
