/*
Class: CSE 1321L
Section : E03
Term : Fall 2023
Instructor : Illa Jahanshahi
Name : Pavan Kannan
Lab# : Assignment1C
*/

#include <iostream>

int main() {
  std::string FavAnimal;
  float MealPr;
  int WholeNo;
  char SingleLtr;

  std::cout << "[XKCD PassPhrase Generator]\n\n";

  std::cout << "Enter Your 3rd Favorite Animal: ";
  std::cin >> FavAnimal;

  std::cout << "\nEnter The Subtotal From Your Last Take-out Meal: ";
  std::cin >> MealPr;

  std::cout << "\nEnter A Whole Number Less Than (32767): ";
  std::cin >> WholeNo;

  std::cout << "\nEnter A Single Letter: ";
  std::cin >> SingleLtr;

  std::string SMealPr = std::to_string(MealPr);
  std::string SWholeNo = std::to_string(WholeNo);
  std::string SSingleLtr = std::to_string(SingleLtr);

  std::cout << "\nYour Passphrase Is:\n"
            << FavAnimal + " " + SMealPr + " " + SWholeNo + " " + SingleLtr;

  std::cout << "\n\nOther PassPhrase Are:\n";
  std::cout << "\n"
            << SMealPr + " " + FavAnimal + " " + SWholeNo + " " + SingleLtr;
  std::cout << "\n"
            << SWholeNo + " " + SMealPr + " " + FavAnimal + " " + SingleLtr;
  std::cout << "\n"
            << SMealPr + " " + SWholeNo + " " + FavAnimal + " " + SingleLtr;
}