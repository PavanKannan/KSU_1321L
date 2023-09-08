/*
Class: CSE 1321L
Section: E03
Term: Fall
Instructor: Ilia Jahanshahi
Name: Pavan Kannan
Lab#: 4B
*/

#include <cmath>
#include <iostream>
using namespace std;
int main() {
  std::string DayOfWeek;
  std::cout << "Enter the Day of the Week: ";
  std::cin >> DayOfWeek;

  if (DayOfWeek == "Monday" || DayOfWeek == "monday" ||
      DayOfWeek == "Wednesday" || DayOfWeek == "wednesday") {
    std::cout << "I have class today!";

  } else if (DayOfWeek == "Friday" || DayOfWeek == "friday") {
    std::cout << "It's Friday, Got to get down on Friday.";

  } else if (DayOfWeek == "Sunday" || DayOfWeek == "sunday" ||
             DayOfWeek == "Saturday" || DayOfWeek == "saturday" ||
             DayOfWeek == "Thursday" || DayOfWeek == "thursday" ||
             DayOfWeek == "Tuesday" || DayOfWeek == "tuesday") {
    std::cout << "Got to you free time to study.";

  } else {
    std::cout << "Not a week day";
  }
}
