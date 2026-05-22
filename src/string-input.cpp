//============================================================================
// Name        : string-input.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {

	// Array to hold final concatenated sentence
	std::string dayAtTheZoo{};

	// Prompt user to enter an animal they will visit at the zoo
	std::cout << "Enter an animal you will visit at the zoo: ";

	// Store user input
	std::string animal1{};

	// Read in user input
	std::getline(std::cin >> std::ws, animal1);

	// Prompt user to enter another animal
	std::cout << "Enter another animal you will visit: ";

	// Store user input
	std::string animal2{};

	// Read in user input
	std::getline(std::cin >> std::ws, animal2);

	// Add final content to dayAtTheZoo using concatenation
	dayAtTheZoo = "Animals you will visit are " + animal1 + " and " + animal2 + ".";

//	dayAtTheZoo = "Animals you will visit are ";
//	dayAtTheZoo += animal1;
//	dayAtTheZoo.append(" and ");
//	dayAtTheZoo += animal2;
//	dayAtTheZoo += ".";

	// Output the content
	std::cout << dayAtTheZoo;

	return 0;
}
