/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Assignment6B
*/

#include <iostream>
int array_row, array_column;

bool check_if_valid_color(std::string color_array[], std::string color) {
  for (int i = 0; i < color_array->length(); i = i + 2) {
    if (color_array[i] == color) {
      return true;
    }
  }
  return false;
}

void PrintXPixMap(std::string color_array[8],std::string color_array_2d[array_row][array_column],int array_row, int array_column){
  for (int i=0; i<array_row;i++){
    std::cout << color_array[i];
  }
  for (int i=0; i<array_row; i++){
    std::cout << std::endl;
    for(int j=0;j<array_column;j++){
      std::cout << color_array_2d[i][j];
    }
  }
}


void replaceColor(std::string color_array_2d[x][y], int replace_row, int replace_column, std::string color, std::string new_color) {
  for (int i = 0; i <= replace_row; i++) {
    if (color_array_2d[i][replace_column] == color) {
    color_array_2d[replace_row+i][replace_column]=new_color;
    }
  }
}


int main() {
  std::string color_array[8];

  std::cout << "Enter a hexadecimal color for color 1: ";
  std::cin >> color_array[0];
  std::cout << "Enter a letter to represent this color: ";
  std::cin >> color_array[1];
  std::cout << "Enter a hexadecimal color for color 2: ";
  std::cin >> color_array[2];
  std::cout << "Enter a letter to represent this color: ";
  std::cin >> color_array[3];
  std::cout << "Enter a hexadecimal color for color 3: ";
  std::cin >> color_array[4];
  std::cout << "Enter a letter to represent this color: ";
  std::cin >> color_array[5];
  std::cout << "Enter a hexadecimal color for color 4: ";
  std::cin >> color_array[6];
  std::cout << "Enter a letter to represent this color: ";
  std::cin >> color_array[7];

  std::cout << "Enter a width: ";
  std::cin >> array_column;
  std::cout << "Enter a height: ";
  std::cin >> array_row;

  std::string color_array_2d[array_row][array_column];

  while(true) {
    int choice;
    std::cout << "Options:\n1) Set a color\n2) Replace colors\n3) Print X "
                 "PixMap\n4) Quit\nChoice: ";
    std::cin >> choice;
    switch (choice) {
    case 1:
      int set_row, set_column;
      std::string set_color;
      std::cout << "Enter a row index: ";
      std::cin >> set_row;
      std::cout << "Enter a column index: ";
      std::cin >> set_column;
      std::cout << "Enter a color: ";
      std::cin >> set_color;
      std::string Final_Color;
      if (check_if_valid_color(color_array, set_color)) {
        for (int i = 0; i < color_array->length(); i = i + 2) {
          if (color_array[i] == set_color) {
            Final_Color = color_array[i];
            break;
          }

          for (int i = 0; i <= set_row; i++) {
            for (int j = 0; j <= set_column; j++) {
              color_array_2d[i][j] = Final_Color;
            }
          }
        }
      }
      break;
    case 2:
      int replace_row, replace_column;
      std::string color, new_color;
      std::cout<<"Enter the color to replace: ";
      std::cin >> color;
      std::cout<<"Enter the new color:";
      std::cin >> new_color;
      replaceColor(color_array_2d[array_row][array_column],replace_row, replace_column, color, new_color);
      break;  

    case 3:
      PrintXPixMap(color_array[8], color_array_2d[array_row][array_column], array_row, array_column);
      
    case 4:
      std::cout << "Goodbye!";
      return false;
      break;
      
    }
  }
