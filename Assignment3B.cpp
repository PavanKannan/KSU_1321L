/*
Class: CSE 1321L
Section: E03
Term: Fall
Instructor: Ilia Jahanshahi
Name: Pavan Kannan
Lab#: Assignment3B
*/

#include <iostream>
using namespace std;
int main() {
  int UsrIncr;
  char UsrAfrica, UsrAntar, UsrAsia, UsrAust, UsrEuro, UsrNAmerica, UsrSAmerica;

  switch (0)
  {
    case 0:
      std::cout << "Have you been to Africa?(Y/N): ";
      std::cin >> UsrAfrica;
      if (UsrAfrica == 'y' || 'Y')
      {
        UsrIncr++;
      }

    case 1:
      std::cout << "Have you been to Antartica?(Y/N): ";
      std::cin >> UsrAntar;
      if (UsrAntar == 'y' || 'Y')
      {
        UsrIncr++;
      }

    case 2:
      std::cout << "Have you been to Asia?(Y/N): ";
      std::cin >> UsrAsia;
      if (UsrAsia == 'y' || 'Y')
      {
       UsrIncr++;
      }

    case 3:
      std::cout << "Have you been to Australia?(Y/N): ";
      std::cin >> UsrAust;
      if (UsrAust == 'y' || 'Y')
      {
        UsrIncr++;
      }

    case 4:
      std::cout << "Have you been to Europe?(Y/N): ";
      std::cin >> UsrEuro;
      if (UsrEuro == 'y' || 'Y')
      {
        UsrIncr++;
      }

    case 5:
      std::cout << "Have you been to North America?(Y/N): ";
      std::cin >> UsrNAmerica;
      if (UsrNAmerica == 'y' || 'Y')
      {
        UsrIncr++;
      }

    case 6:
      std::cout << "Have you been to South America?(Y/N): ";
      std::cin >> UsrSAmerica;
      if (UsrSAmerica == 'y' || 'Y')
      {
        UsrIncr++;
      }
    
  } //Switch

  if (UsrIncr == 0)
  {
    std::cout << "You have visited " << UsrIncr << "continents: How is that possible? Are you living in space?";
  }

  else if (UsrIncr == 1)
  {
    std::cout << "You have visited " << UsrIncr << "continents: That's a good start. Time to explore the world!";
  }

  else if (UsrIncr == 2 || UsrIncr == 3)
  {
    std::cout << "You have visited " << UsrIncr << "continents: You've just started your journey to see the world.";
  }

  else if (UsrIncr == 4 || UsrIncr == 5)
  {
    std::cout << "You have visited " << UsrIncr << "continents: You're an experienced traveler now.";
  }

  else if (UsrIncr == 6)
  {
    std::cout << "You have visited " << UsrIncr << "continents: Wow, you've been almost everywhere!";
  }

  else
  {
    std::cout << "You have visited " << UsrIncr << "continents: You're a true world traveler!";
  }


}//End
