/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Lab9B
*/

#include <iostream>

int main() {
  std::cout << "Please enter 11 numbers:" << std::endl;

  int arraysize = 11, myarray[arraysize];
  for (int i = 0; i < arraysize; i++) {
    int usrinp;
    std::cout << "Integer " << i + 1 << ": ";
    std::cin >> usrinp;
    myarray[i] = usrinp;
  }

  for (int i = 0; i < arraysize - 1; i++) {
    for (int j = 0; j < arraysize - i - 1; j++) {
      if (myarray[j] > myarray[j + 1]) {
        std::swap(myarray[j], myarray[j + 1]);
      }
    }
  }

  int UsrTarget;
  std::cout << "What is the target number: ";
  std::cin >> UsrTarget;

  std::cout << "The sorted set is: ";
  for (int i = 0; i < arraysize; i++) {
    std::cout << myarray[i] << " ";
  }

  // Binary Search
  int low = 0, mid = 0, high = arraysize - 1;
  int TargetResult = 2;
  
  while (low <= high) {
    mid = low + (high - low) / 2;

    std::cout << "Searching" << std::endl;
    std::cout << "Low is " << low << std::endl;
    std::cout << "Mid is " << mid << std::endl;
    std::cout << "High is " << high << std::endl;

    if (myarray[mid] == UsrTarget) {
      TargetResult = 1;
      break;
    }
    else if (myarray[mid] < UsrTarget) {
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }
  }

  switch (TargetResult) {
  case 1:
    std::cout << "The target is in the set.";
    break;
  case 2:
  default:
    std::cout << "The target is not in the set.";
    break;
  }

} // end