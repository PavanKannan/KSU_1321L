/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Assignment5B
*/

#include <iostream>

int main() {

  std::string MyArray[5][5] = {{"_", "N", "_", "N", "N"},
                               {"_", "N", "_", "N", "_"},
                               {"_", "_", "_", "N", "_"},
                               {"N", "N", "_", "_", "W"},
                               {"P", "_", "_", "N", "N"}};
  std::cout << "[Maze Game]\n";

  int row = 4, column = 0;
  std::string choice;
  bool while_loop = true;

  while (while_loop == true) {
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        std::cout << MyArray[i][j] << ".";
      }
      std::cout << "\n";
    }
    std::cout << "\nWhich direction do you want to move? ";
    std::cin >> choice;
    std::string tempholder;
    
    if (choice == "Up") {
      row = row - 1;
      if (MyArray[row][column] == "_") {
        tempholder = MyArray[row][column];
        MyArray[row][column] = "P";
        MyArray[row + 1][column] = tempholder;
      } else if (MyArray[row][column] == "W") {
        std::cout << "You Win!";
        while_loop = false;
        break;
        
      } else {
        std::cout << "You hit a wall – Game Over!";
        while_loop = false;
        break;
        
      }
    }

    else if (choice == "Down") {
      row = row + 1;
      if (MyArray[row][column] == "_") {
        tempholder = MyArray[row][column];
        MyArray[row][column] = "P";
        MyArray[row - 1][column] = tempholder;
      } else if (MyArray[row][column] == "W") {
        std::cout << "You Win!";
        while_loop = false;
        break;
      } else {
        std::cout << "You hit a wall – Game Over!";
        while_loop = false;
        break;
      }
    }

    else if (choice == "Left") {
      column = column - 1;
      if (MyArray[row][column] == "_") {
        tempholder = MyArray[row][column];
        MyArray[row][column] = "P";
        MyArray[row][column + 1] = tempholder;
      } else if (MyArray[row][column] == "W") {
        std::cout << "You Win!";
        while_loop = false;
        break;
      } else {
        std::cout << "You hit a wall – Game Over!";
        while_loop = false;
        break;
      }
    }

    else if (choice == "Right") {
      column = column + 1;
      if (MyArray[row][column] == "_") {
        tempholder = MyArray[row][column];
        MyArray[row][column] = "P";
        MyArray[row][column - 1] = tempholder;
      } else if (MyArray[row][column] == "W") {
        std::cout << "You Win!";
        while_loop = false;
        break;
      } else {
        std::cout << "You hit a wall – Game Over!";
        while_loop = false;
        break;
      }
    } else
      std::cout << "That's not a valid direction!";
  }
}
