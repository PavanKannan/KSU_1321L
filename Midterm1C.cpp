/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: MidTerm1C
*/

#include <iostream>

int main() {
  int num = 0;
  int UsrInp;
  std::string Kannan = "";

  std::cout << "[ASCII Art Creator 1996]\n";

  do {

    int UsrTimes;
    std::string UsrLetter;

    std::cout << "\n1) Add a letter" << std::endl
              << "2) Add a row of letters" << std::endl
              << "3) Add a newline" << std::endl
              << "4) Quit" << std::endl;
    std::cout << "Choice: ";
    std::cin >> UsrInp;

    switch (UsrInp) {
    case 1:
      std::cout << "Letter: ";
      std::cin >> UsrLetter;

      Kannan = Kannan + UsrLetter;
      std::cout << "Added!\n";
      break;
    case 2:

      std::cout << "Letter: ";
      std::cin >> UsrLetter;

      std::cout << "How many times: ";
      std::cin >> UsrTimes;

      for(int i =1; i<=UsrTimes;i++){Kannan = Kannan + UsrLetter;}
      std::cout << "Added!\n";
      break;
    case 3:

      Kannan = Kannan + "\n";
      std::cout << "Added!\n";
      break;
    case 4:

      std::cout << "\n[Your Artwork]\n";
      std::cout << Kannan;
      std::cout << "\n[GoodBye!]";
      num = 1;
      break;

    default:
      num = 1;
      break;
    }

  } while (num == 0);
} // end