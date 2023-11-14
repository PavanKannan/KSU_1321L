/*
Class: CSE 1321L
Section: E03
Term: Fall2023
Instructor: Illa Jahanshahi
Name: Pavan Kannan
Lab#: Lab12B
*/

#include <iostream>

class Dog {
public:
  int age;
  double weight;
  std::string name;
  std::string furColor;
  std::string breed;

  void bark() { std::cout << "Woof! Woof!\n"; }

  double eat(std::string Name, double food) {
    std::cout << Name << " is hungry, how much should he eat: ";
    std::cin >> weight;
    weight += food;
    return weight;
  }

  std::string rename(std::string Name) {
    std::cout << Name
              << " isn’t a very good name. What should they be renamed to: ";
    std::cin >> name;
    return name;
  }
};

int main() {
  Dog doggy;
  std::cout << "You are about to create a dog.\n";
  std::cout << "How old is the dog: ";
  std::cin >> doggy.age;
  std::cout << "How much does the dog weigh: ";
  std::cin >> doggy.weight;
  std::cout << "What is the dog's name: ";
  std::cin >> doggy.name;
  std::cout << "What color is the dog: ";
  std::cin >> doggy.furColor;
  std::cout << "What breed is the dog: ";
  std::cin >> doggy.breed;

  std::cout << doggy.name << " is a " << doggy.age << " year old "
            << doggy.furColor << " " << doggy.breed << " that weighs "
            << doggy.weight << " lbs.\n";

  doggy.bark();
  doggy.weight = doggy.eat(doggy.name, doggy.weight);
  doggy.name = doggy.rename(doggy.name);

  std::cout << doggy.name << " is a " << doggy.age << " year old "
            << doggy.furColor << " " << doggy.breed << " that weighs "
            << doggy.weight << " lbs.\n";
};