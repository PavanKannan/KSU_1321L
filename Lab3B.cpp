/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: 3B
*/

#include <iostream>

int main() {
  float Course1Hr, Course2Hr, Course3Hr, Course4Hr, Course1Gr, Course2Gr,
      Course3Gr, Course4Gr, QualityPts, SemesterHr;

  std::cout << "\nEnter Hours for Course 1: ";
  std::cin >> Course1Hr;
  std::cout << "\nEnter Grades for Course 1: ";
  std::cin >> Course1Gr;

  std::cout << "\n\nEnter Hours for Course 2: ";
  std::cin >> Course2Hr;
  std::cout << "\nEnter Grades for Course 2: ";
  std::cin >> Course2Gr;

  std::cout << "\n\nEnter Hours for Course 3: ";
  std::cin >> Course3Hr;
  std::cout << "\nEnter Grades for Course 3: ";
  std::cin >> Course3Gr;

  std::cout << "\n\nEnter Hours for Course 4: ";
  std::cin >> Course4Hr;
  std::cout << "\nEnter Grades for Course 4: ";
  std::cin >> Course4Gr;

  QualityPts = (Course1Gr * Course1Hr) + (Course2Gr * Course2Hr) +
               (Course3Gr * Course3Hr) + (Course4Gr * Course4Hr);
  SemesterHr = Course1Hr + Course2Hr + Course3Hr + Course4Hr;

  std::cout << "\n\nTotal Course Hours: " << SemesterHr;
  std::cout << "\nTotal Quality Points: " << QualityPts;

  std::cout << "\n\nYour GPA This Semester: " << QualityPts / SemesterHr;
}