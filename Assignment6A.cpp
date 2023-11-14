/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Assignment6A
*/
#include <iostream>
int array_row, array_column;
float array_value;

void printArray(float myarr) {
  for (int i = 0; i < array_row; i++) {
    for (int j = 0; j < array_column; j++) {
      std::cout << myarr[i][j] << " ";
    }
  }
}

bool UpdateRow(int row, int column) {
  if (row < array_row && column < array_column) {
    return true;
  }
  return false;
  std::cout << "Invalid information! Try again.";
}

int main() {
  std::cout << "Enter an array width:";
  std::cin >> array_row;
  std::cout << "Enter an array height:";
  std::cin >> array_column;
  std::cout << "Enter an intial value:";
  std::cin >> array_value;
  float myarray[array_row][array_column];
  for (int i = 0; i < array_row; i++) {
    for (int j = 0; j < array_column; j++) {
      myarray[i][j] = array_value;
    }
  }
  std::cout << "Creating an array with " << array_row << " row(s) and "
            << array_column << " column(s)";
  printArray(myarray[array_row][array_column]);

  for (int i = 0; i < array_row; i++) {
    array_row[0][i] = -array_value;
  }
  std::cout << "Making the first row negative";
  printArray(myarray[array_row][array_column]);

  int usr_row, usr_column, usr_length, usr_value;
  std::cout << "Enter a row index: ";
  std::cin >> usr_row;
  std::cout << "Enter a column index: ";
  std::cin >> usr_column;
  std::cout << "Enter a value: ";
  std::cin >> usr_value;

  if (UpdateRow(usr_row, usr_column)) {
    myarray[usr_row][usr_column] = usr_value;
  }
  printArray(myarray[array_row][array_column]);

  for (int i = 1; i < array_row + 1; i++) {
    if (i % 2 == 0) {
      for (int j = 1; j < array_column + 1; j++) {
        myarray[i][j] = 87.21;
      }
    } else {
      for (int j = 1; j < array_column + 1; j++) {
        myarray[i][j] = 12.78;
      }
    }

    printArray(myarray[array_row][array_column]);

    std::cout << "Enter a row index: ";
    std::cin >> usr_row;
    std::cout << "Enter a column index: ";
    std::cin >> usr_column;
    std::cout << "Enter a lenght: ";
    std::cin >> usr_length;
    std::cout << "Enter a value: ";
    std::cin >> usr_value;

    if (UpdateRow(usr_row, usr_column && usr_length < usr_row)) {
      for (int i = 0; i < usr_length; i++) {
        myarray[usr_row][usr_column + i] = usr_value;
      }
    }
    printArray(myarray[array_row][array_column]);

  } // main
}