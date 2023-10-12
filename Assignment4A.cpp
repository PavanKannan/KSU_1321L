/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Assignment4A
*/

#include <iostream>

using namespace std;

int main() {
  int UsrSpd, UsrDclrt, UsrUpdt;
  std::cout<<"[Stopping Time]" << endl;

  std::cout<<"How fast are you going (miles/hour)? ";
  std::cin >> UsrSpd;
  
  std::cout<<"How quickly can you decelerate (miles)? ";
  std::cin >> UsrDclrt;
  
  std::cout<<"How often do you want to see updates (in seconds)? ";
  std::cin>> UsrUpdt;

  std::cout<<"You are going "<< UsrSpd <<" MPH when you slam on the brakes!\n";
  int UsrLoop = UsrSpd/UsrUpdt;
  int FinalResult;
  
  for (int i=1; i <= UsrLoop; i++){
    FinalResult = ((UsrSpd+i)*(UsrSpd+i)/(2*UsrUpdt));
    std::cout << "At " << i <<" second, you have traveled " << FinalResult <<" feet and are now moving at " <<UsrLoop-i<<" MPH.\n";
  }

  std::cout <<"You took "<< UsrLoop <<" seconds to stop and traveled "<< FinalResult << " feet during that time!";
  
} // End