/*
Class: CSE 1321L
Section : E03
Term : Fall 2023
Instructor : Illa Jahanshahi
Name : Pavan Kannan
Lab# : Assignment1B
*/

#include <iostream>

int main() {
  float MealPr, LocalTax, TotalTax, ServChar, SubTotal;

  std::cout << "[What To Tip]";

  std::cout << "\n\nEnter The Total Price Of The Meal: $";
  std::cin >> MealPr;

  std::cout << "\nEnter The Local Tax Rate: ";
  std::cin >> LocalTax;

  std::cout << "\nEnter The Service Charge: $";
  std::cin >> ServChar;

  SubTotal = MealPr + ServChar;
  TotalTax = MealPr * LocalTax;

  std::cout << "\nThe Subtotal is $" << SubTotal;

  std::cout << "\n\nA 10% Tip Would Be $" << 0.1 * SubTotal;
  std::cout << "\nThe Total Would Be $"
            << (0.1 * SubTotal) + SubTotal + TotalTax;

  std::cout << "\n\nA 25% Tip Would Be $" << 0.25 * SubTotal;
  std::cout << "\nThe Total Would Be $"
            << (0.25 * SubTotal) + SubTotal + TotalTax;
}