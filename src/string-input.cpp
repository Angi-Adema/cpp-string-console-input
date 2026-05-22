//============================================================================
// Name        : string-input.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

// No longer need to include std ahead of lines
using namespace std;

int main() {

	// String to hold final concatenated sentence
	string dayAtTheZoo{};

	// Add a loop to prompt the user three times and produce output each time
	for (int i = 0; i < 3; i++) {
		// Track which round of animals the visitor is on
		cout << "\nVisit round number: " << i + 1 << "\n";

		// Prompt user to enter an animal they will visit at the zoo
		cout << "Enter an animal you will visit at the zoo: ";

		// Store user input
		string animal1{};

		// Read in user input
		getline(cin >> ws, animal1);

		// Prompt user to enter another animal
		cout << "Enter another animal you will visit: ";

		// Store user input
		string animal2{};

		// Read in user input
		getline(cin >> ws, animal2);

		// Add final content to dayAtTheZoo using concatenation
		dayAtTheZoo = "Animals you will visit this round are " + animal1 + " and " + animal2 + ".\n";

		// Output the content
		cout << dayAtTheZoo;
	}

	return 0;
}
