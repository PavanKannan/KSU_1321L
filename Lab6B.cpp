/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: 6B
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {

  std::cout << "Enter a Number between 1 to 1000: ";
  int UsrInp;
  std::cin >> UsrInp;

  int GuessCount;
  int i = 0;

  while (UsrInp < 1001) {
    while (GuessCount != UsrInp) {
      i++;
      srand((unsigned)time(0));
      GuessCount = (rand() % 1001);
      std::cout << "\nMy guess is " << GuessCount << endl;

    } // while guesscount

    std::cout << "\n\nI guessed " << UsrInp << " and it only took me " << i
              << " guesses.";
  } // while 1001

} // End