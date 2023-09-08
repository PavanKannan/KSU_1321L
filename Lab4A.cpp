/*
Class: CSE 1321L
Section: E03
Term: Fall
Instructor: Ilia Jahanshahi
Name: Pavan Kannan
Lab#: 4A
*/

#include <cmath>
#include <iostream>
using namespace std;
int main() {
  float UsrMark;
  std::cout << "Enter The Score on Your Exam: ";
  std::cin >> UsrMark;
  int MarkRound = round(UsrMark);
  std::cout << "Letter Grade is: ";

  if (MarkRound >= 92) {
    if (MarkRound >= 98) {
      std::cout << "A+";
    } else if (MarkRound >= 95) {
      std::cout << "A";
    } else {
      std::cout << "A-";
    }
  }

  else if (MarkRound >= 83) {
    if (MarkRound >= 89) {
      std::cout << "B+";
    } else if (MarkRound >= 86) {
      std::cout << "B";
    } else {
      std::cout << "B-";
    }
  }

  else if (MarkRound >= 74) {
    if (MarkRound >= 80) {
      std::cout << "C+";
    } else if (MarkRound >= 77) {
      std::cout << "C";
    } else {
      std::cout << "C-";
    }
  }

  else if (MarkRound >= 65) {
    if (MarkRound >= 71) {
      std::cout << "D+";
    } else if (MarkRound >= 68) {
      std::cout << "D";
    } else {
      std::cout << "D-";
    }
  }

  else {
    std::cout << "F";
  }
}
