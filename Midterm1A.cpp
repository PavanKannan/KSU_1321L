/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: MidTerm1A
*/

#include <iostream>

int main() {

  std::cout << "[Hourly -> Yearly Salary Converter]\n";

  std::string UsrJob;
  int UsrPay;
  float UsrHr, UsrFTax, UsrSTax, TotalIncome, FTWithheld, STWithheld;

  std::cout << "Current Job: ";
  std::cin >> UsrJob;
  
  std::cout << "Hourly Salary: $";
  std::cin >> UsrHr;
  
  std::cout << "Hours Worked Per Week: ";
  std::cin >> UsrPay;
  
  std::cout << "Federal Taxes withheld(%): ";
  std::cin >> UsrFTax;
  
  std::cout << "State Taxes withheld(%): ";
  std::cin >> UsrSTax;

  std::cout << "\n[Calculating...]\n\n";

  TotalIncome = (UsrHr * UsrPay) * 50;
  FTWithheld = TotalIncome * (UsrFTax / 100);
  STWithheld = TotalIncome * (UsrSTax / 100);

  std::cout << "Your Offcial Yearly Salary is $" << TotalIncome;
  std::cout << "\nYour Yearly Take-Awake Pay is $"
            << TotalIncome - (FTWithheld + STWithheld);
  std::cout << "\n($" << FTWithheld << " Withheld For Federal Taxes, $"
            << STWithheld << " Withheld For State Taxes.";
}