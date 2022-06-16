#include <iostream>
#include <string>
using namespace std;

#include "Menus.h"
#include "Creation.h"

// Main method that starts the program
int main() {

	// Seeds the random function to allow for true randomization
	srand((unsigned int)time(NULL));

	// Creates a Main menu object to setup the main menu
	Main main = Main();

	// Calls the objects main method
	main.menuMain();

	// Call newGame
	newGame();

	return 0;
}