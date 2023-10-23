/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Assignment5A
*/

#include <iostream>

int main() {
  int size = 10;

  std::string array1[size];
  int UsrInp, While_loop = 0, Enter_Name = 0;
  std::string UsrReplace, UsrVerify;

  while (While_loop == 0) {
    std::cout << "\n[Top 10 Friend's List]\n";
    std::cout << "What would you like to do?\n";
    std::cout << "1) Enter a friend's name\n";
    std::cout << "2) Replace a friend's name\n";
    std::cout << "3) Display your friends list\n";
    std::cout << "4) Quit\n";

    std::cout << "Your choice: ";
    std::cin >> UsrInp;

    switch (UsrInp) {
    case 1:
      std::cout << "Enter a name: ";
      std::cin >> UsrVerify;
      for (int i = 0; i < size; i++) {
        if (UsrVerify != array1[i]) {
          array1[Enter_Name] = UsrVerify;
          break;
        } else {
          std::cout << "Sorry, they're already on the list!\n";
          break;
        }
      }
      Enter_Name++;
      break;

    case 2:
      int UsrIndex;
      std::cout << "Enter an index: ";
      std::cin >> UsrIndex;
      std::cout << "Enter a name: ";
      std::cin >> UsrReplace;
      if (UsrIndex < size) {
        std::cout << UsrReplace << " has replaced " << array1[UsrIndex]
                  << " on your friends list!\n";
        array1[UsrIndex] = UsrReplace;
        break;
      } else {
        std::cout << "Sorry, that's an invalid command!\n";
        break;
      }
      break;

    case 3:
      std::cout << "Friend's List:\n";
      for (int i = 0; i < size; i++) {
        std::cout << i + 1 << ") " << array1[i] << "\n";
      }
      break;

    case 4:
      While_loop = 1;
      break;

    default:
      std::cout << "Invalid choice!\n";
      break;
    }
  }
}
