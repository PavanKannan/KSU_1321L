/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Lab11B
*/

#include <iostream>

bool pass_length(std::string password) {
  if (password.length() >= 8) {
    return true;
  }
  return false;
}

bool pass_upper(std::string password) {
  for (int i = 0; i < password.length(); i++) {
    if (isupper(password[i])) {
      return true;
    }
  }
  return false;
}

bool pass_digit(std::string password) {
  for (int i = 0; i < password.length(); i++) {
    if (isdigit(password[i])) {
      return true;
    }
  }
  return false;
}

int main() {
  std::string password;
  bool length = false, upper = false, digit = false;
  std::cout << "Enter a password: ";
  std::cin >> password;

  if (pass_length(password) && pass_upper(password) && pass_digit(password)) {
    std::cout << "Valid password\n";
  } else {
    std::cout << "Invalid password\n";
  }
}
