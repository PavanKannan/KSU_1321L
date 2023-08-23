/*
Class: CSE 1321L
Section : E03
Term : Fall 2023
Instructor : Illa Jahanshahi
Name : Pavan Kannan
Lab# : 2A
*/

#include <iostream>

int main()
{
    std::string FirstName, SecondName, UserVerb, UserAdverb;
    
    std::cout << "Enter A Name:";
    std::cin >> FirstName;
    
    std::cout << "\nEnter Another Name:";
    std::cin >> SecondName;

    std::cout << "\nEnter A Verb:";
    std::cin >> UserVerb;

    std::cout << "\nEnter An Adverb:";
    std::cin >> UserAdverb;

    std::cout << FirstName << " and " << SecondName << " are good friends. " << FirstName << " likes to " << UserVerb << " " << UserAdverb << " with " << SecondName << ".";

}

