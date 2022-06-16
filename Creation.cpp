#include <iostream>
#include <string>
using namespace std;

#include "Entities.h"
#include "Endings.h"
#include "Menus.h"
#include "Controls.h"

// combat is a function that was created to circumvent the issue of
// base classes being undefined via the inclusion of specific
// files in the incorrect order
// Parameters:
//				p - Player class pointer
void combat(Player* p) {

	// Instantiates a Combat menu object with the player pointer
	Combat c = Combat(p);

	// Calls the menus main method
	c.menuMain();

}

// towardEnd is a function that determines if the player is working their
// way towards the end of the game or a specific ending
// Parameters:
//				player - Player class pointer
//				m - Movement menu class pointer
//				path - integer for the amount of paths tested
// Returns:
//				player->end - The end attribute state of the player
//							  object
bool towardEnd(Player* player, Movement* m, int path) {

	// Instantiates a Final menu object with the player pointer
	Final f = Final(player);

	// While loop iterates until the player has chosen enough paths
	// to activate an ending
	while (player->paths < path) {

		// Updates the movement objects player attribute to the current player
		m->player = player;

		// Updates the movement objects menuScreen boolean to continue operating
		m->menuScreen = true;

		// Calls the main method of the menu object
		m->menuMain();

	}

	// Calls the main method of the menu object when an ending has been reached
	f.menuMain();

	// Returns the state of the end attribute, false if the player decided to end,
	// true if the player decided to continue
	return player->end;

}

// newGame method to execute the setup for a new game
void newGame() {

	// Instantiates a Player object
	Player player = Player();

	// Instantiates a Prologue object with a pointer to the player object
	Prologue p = Prologue(&player);

	// Instantiates a Movement object with a pointer to the player object
	Movement m = Movement(&player);

	// Defines a boolean to receive the state of the end attribute
	bool end = false;

	// Calls the main method for Prologue
	p.menuMain();

	// Iterates through for each of the four endings
	for (int i = 10; i <= 25; i += 5) {
	
		// If the player hasn't ended the game
		if (!end) {
		
			// Call the towardEnd function with a player pointer, movement pointer,
			// and i for the path integer
			end = towardEnd(&player, &m, i);
		
		}
		else {
		
			// Else, break out of the loop
			break;

		}
	
	}

}