/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: MidTerm1B
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  srand((unsigned)time(0));
  int randomNumber1, randomNumber2, Pavan, num1, num2;
  num1 = 0;
  num2 = 0;

  randomNumber1 = (rand() % 31);

  randomNumber2 = (rand() % 111);
  
  std::cout << "[Guessing Ranges]\n";

  do {
    std::cout << "What's your guess? ";
    std::cin >> Pavan;

    if (Pavan < randomNumber1)
    {  std::cout <<"Your guess is too low!\n";
    }
    else if (Pavan == randomNumber1)
    { num1 = 1;
      std::cout<<"You guessed the first number!\n";
    }
    else if (Pavan > randomNumber1 && Pavan < randomNumber2)
    {  std::cout<<"You guessed in-between the two numbers.\n";
    }
    else if (Pavan == randomNumber2)
    { num2 =1;
      std::cout <<"You guessed the second number!\n";
    }
    else
    {
      std::cout<<"Your guess is too high!\n";
    }
    
  } while (num1 == 0 || num2 == 0);

} // end