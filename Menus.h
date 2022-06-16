#ifndef MENUS_H
#define MENUS_H

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

#include "Controls.h"
#include "Endings.h"
#include "Creation.h"
#include "Entities.h"
#include "Pathing.h"

// Menu class is the base class for all menus in this game
class Menu {
public:
	// Defines several attributes, each with unique properties:
	// menuScreen - True if the menu should continue to be shown, false otherwise
	// sel - The current selected menu option in the menu
	// maxSel - The maximum selection the menu holds
	// input - Holds the keyboard input from the player
	// handler - Determines what actions should be performed next
	bool menuScreen = true;
	int sel = 0;
	int maxSel = 0;
	string input = "";
	string handler = "00";

	// Default constructor used mainly for inheritance purposes
	Menu() {}

	// Virtual function to be overloaded in each inherited class,
	// printMenu does as its name suggests, prints the menu that the player
	// is currently on
	virtual void printMenu() {}

	// Virtual function to be overloaded in each inherited class,
	// menuEvent determines what to do with the handler attribute
	virtual void menuEvent() {}

	// menuMain is the main method for every menu class
	void menuMain() {
	
		// While menuScreen is true
		while (menuScreen) {

			// Clear the screen
			system("cls");

			// Print the designated menu
			printMenu();

			// Get the keyboard input
			input = getKeyboardInput();

			// Determine where the cursor is for the sel attribute
			sel = arrowHandler(input, sel, maxSel);

			// Determine if the player has chosen an option for the handler attribute
			handler = enterHandler(input, sel, maxSel);

			// Call the menuEvent method
			menuEvent();

		}

	}
};

// Movement class inherits the Menu class and is used primarily for
// the movement of the player during the game
class Movement : public Menu {
public:

	// Declares a Player class pointer
	Player* player;

	// Default constructor creates a default player and sets the maxSel to two for three options
	Movement() {

		maxSel = 2;
		player = new Player();

	}

	// Secondary construction takes a player pointer,
	// sets the player pointer to p and maxSel to two for three options
	Movement(Player* p) {

		maxSel = 2;
		player = p;

	}
	// printMenu prints out the overall menu for the class
	void printMenu() {

		// If the player has more than 0 hp, print the menu
		if (player->hp > 0) {
		
			// If the cursor is on the first option
			if (sel == 0) {

				// Print the menu with the cursor on the first option
				cout << "Move Left...\t[]" << endl;
				cout << "Move Forward..." << endl;
				cout << "Move Right..." << endl;

			}
			// Else if the cursor is on the second option
			else if (sel == 1) {

				// Print the menu with the cursor on the second option
				cout << "Move Left..." << endl;
				cout << "Move Forward...\t[]" << endl;
				cout << "Move Right..." << endl;

			}
			// Else if the cursor is on the third option
			else if (sel == 2) {
				
				// Print the menu with the cursor on the third option
				cout << "Move Left..." << endl;
				cout << "Move Forward..." << endl;
				cout << "Move Right...\t[]" << endl;

			}
		
		}
		// Else if the player has lost all their hp
		else {
		
			// Output a game over screen and end the program
			cout << "Game Over..." << endl;
			exit(0);
		
		}

	}

	// menuEvent to decide what action to take with the handler attribute
	void menuEvent() {

		// Initialize a Path object with the player pointer
		Path p = Path(player);

		// Define a direction variable to hold values 1-3 for the direction the player travels
		int dir = 0;

		// If the player chose the first option
		if (handler == "10") {

			// Set the direction to 1 for left
			dir = 1;

		}
		// If the player chose the second option
		else if (handler == "11") {

			// Set the direction to 2 for forward
			dir = 2;

		}
		// If the player chose the third option
		else if (handler == "12") {

			// Set the direction to 3 for right
			dir = 3;

		}

		// If the player chose an option 
		if (handler.substr(0, 1) == "1") {

			// If the direction is forward
			if (dir == 2) {

				// Cancel out of the menu
				menuScreen = false;

			}
			// Else if the direction is left and the player hasn't moved left three times
			else if (dir == 1 && player->move.at(0) < 3) {

				// Add a counter to the move vector of the player to store that they have traveled left
				player->move.at(0) += dir;

				// Cancel out of the menu
				menuScreen = false;

			}
			// Else if the direction is right and the player hasn't move right three times
			else if (dir == 3 && player->move.at(1) < 9) {

				// Add a counter to the move vector of the player to store that they have traveled right
				player->move.at(1) += dir;

				// Cancel out of the menu
				menuScreen = false;

			}
			// If they have traveled right or left three times, they cannot travel in that direction
			else {

				cout << endl << "You cannot move in this direction..." << endl;
				enterPause();

			}

			// Add to the player paths attribute for future actions
			player->paths += p.move();

		}

	}

};

// Combat class inherits from the Movement class for the Player pointer
class Combat : public Movement {
public:

	// Declare an Entity pointer for randomization of monsters 
	Entity* monster;

	bool extra = false;

	// Combat constructor with a player pointer
	Combat(Player* p) {

		// Set the player pointer to p
		player = p;

		extra = player->weapon.toString() == "Gun" || player->weapon.toString() == "Knife" ||
			player->weapon.toString() == "Bow" || player->weapon.toString() == "Axe";

		if (extra) {
		
			maxSel = 2;

		}
		else {
		
			maxSel = 1;
		
		}

		// Define a chance variable to hold a value one to four for a random monster
		int chance = rand() % 3 + 1;

		// If chance is one
		if (chance == 1) {

			// Create a Slime monster
			monster = new Slime(1);

		}
		// Else if chance is two
		else if (chance == 2) {

			// Create a " " monster
			monster = new Slime(2);

		}
		// Else if chance is three
		else if (chance == 3) {

			// Create a " " monster
			monster = new Slime(3);

		}
		// Else if chance is four
		else {

			// Create a " " monster
			monster = new Slime(4);

		}

	}

	// printMenu prints out the overall menu for the class
	void printMenu() {

		// Output the monster's level and the name of the monster with their hp
		cout << "Level " << monster->level << " " 
			<< monster->toString() << ": " << monster->hp << endl;

		// Output the player's hp
		cout << player->toString() << ": " << player->hp << endl;

		// If both combatants' hp is abov 0
		if (player->hp > 0 && monster->hp > 0) {
		
			// Output the following menu
			cout << endl << "What shall you do?" << endl;

			if (player->weapon.toString() == "Axe") {
			
				// If the cursor is on the first option
				if (sel == 0) {

					// Output the menu with the cursor on the first option
					cout << "Attack...\t[]" << endl;
					cout << "Toss..." << endl;
					cout << "Run..." << endl;

				}
				// Else if the cursor is on the second option
				else if (sel == 1) {

					// Output the menu with the cursor on the second option
					cout << "Attack..." << endl;
					cout << "Toss...\t\t[]" << endl;
					cout << "Run..." << endl;

				}
				else if (sel == 2) {
				
					cout << "Attack..." << endl;
					cout << "Toss..." << endl;
					cout << "Run...\t\t[]" << endl;
				
				}
			
			}
			else if (player->weapon.toString() == "Bow") {
			
				// If the cursor is on the first option
				if (sel == 0) {

					// Output the menu with the cursor on the first option
					cout << "Shoot...\t[]" << endl;
					cout << "Hit..." << endl;
					cout << "Run..." << endl;

				}
				// Else if the cursor is on the second option
				else if (sel == 1) {

					// Output the menu with the cursor on the second option
					cout << "Shoot..." << endl;
					cout << "Hit...\t\t[]" << endl;
					cout << "Run..." << endl;

				}
				else if (sel == 2) {
				
					cout << "Shoot..." << endl;
					cout << "Hit..." << endl;
					cout << "Run...\t\t[]" << endl;
				
				}
			
			}
			else if (player->weapon.toString() == "Knife") {
			
				// If the cursor is on the first option
				if (sel == 0) {

					// Output the menu with the cursor on the first option
					cout << "Slash...\t[]" << endl;
					cout << "Stab..." << endl;
					cout << "Run..." << endl;

				}
				// Else if the cursor is on the second option
				else if (sel == 1) {

					// Output the menu with the cursor on the second option
					cout << "Slash..." << endl;
					cout << "Stab...\t\t[]" << endl;
					cout << "Run..." << endl;

				}
				else if (sel == 2) {
				
					cout << "Slash..." << endl;
					cout << "Stab..." << endl;
					cout << "Run...\t\t[]" << endl;
				
				}
			
			}
			else if (player->weapon.toString() == "Gun") {
			
				// If the cursor is on the first option
				if (sel == 0) {

					// Output the menu with the cursor on the first option
					cout << "Shoot...\t[]" << endl;
					cout << "Throw..." << endl;
					cout << "Run..." << endl;

				}
				// Else if the cursor is on the second option
				else if (sel == 1) {

					// Output the menu with the cursor on the second option
					cout << "Shoot..." << endl;
					cout << "Throw...\t[]" << endl;
					cout << "Run..." << endl;

				}
				else if (sel == 2) {
				
					cout << "Shoot..." << endl;
					cout << "Throw..." << endl;
					cout << "Run...\t\t[]" << endl;
				
				}
			
			}
			else {
			
				// If the cursor is on the first option
				if (sel == 0) {

					// Output the menu with the cursor on the first option
					cout << "Attack...\t[]" << endl;
					cout << "Run..." << endl;

				}
				// Else if the cursor is on the second option
				else if (sel == 1) {

					// Output the menu with the cursor on the second option
					cout << "Attack..." << endl;
					cout << "Run...\t\t[]" << endl;

				}
			
			}
		
		}
		// Else if the monster's hp is 0
		else if (monster->hp == 0) {
		
			// Output that the player won and exit the Combat screen
			cout << "You Win!";
			menuScreen = false;
		
		}
		// Else if the player's hp is 0
		else {
		
			// Output that the player lost and exit the Combat screen
			cout << "You Lose!";
			menuScreen = false;
		
		}

	}

	// menuEvent to decide what action to take with the handler attribute
	void menuEvent() {
	
		int run = rand() % 100;

		if (extra) {
		
			if (handler == "10") {
			
				monster = player->attack(player, monster, "Attack");
			
			}
			else if (handler == "11") {
			
				monster = player->attack(player, monster, "Extra");
			
			}
			else if (handler == "12") {
			
				if (run <= 40) {
				
					cout << endl << "Run successful!";
					menuScreen = false;
					enterPause();

				}
				else {
				
					cout << endl << "Run failed...";
					enterPause();
				
				}
			
			}
		
		}
		else {
		
			// If the player chose the first option
			if (handler == "10") {


				// Use the Entity attack method to get the result of the new monster
				monster = player->attack(player, monster, "Attack");

			}
			else if (handler == "11") {
			
				if (run <= 40) {

					cout << endl << "Run successful!";
					menuScreen = false;
					enterPause();

				}
				else {

					cout << endl << "Run failed...";
					enterPause();

				}
			
			}
		
		}

		if (handler.substr(0, 1) == "1") {
		
			// Create a parry variable to hold a random number 0-100 
			int parry = rand() % 100 + monster->weapon.accuracy;

			// If parry is greater than 50
			if (parry > 50) {

				// The monster also attacks
				player = monster->attack(monster, player, "Attack");

			}
		
		}
	
	}
};

// Selection class inherits the Movement class for the Player pointer
class Selection : public Movement {
public:

	// Create a type of slection for implementation for Combat Testing
	string type = "";

	// Selection constructor with identifier string
	Selection(string identifier) {

		// Sets maxSel as six for seven options
		// Sets type to the identifier
		// Instantiates a player object
		// Sets player to the address of the p object
		maxSel = 6;
		type = identifier;
		Player p = Player();
		player = &p;

	}

	// Selection constructor with player pointer
	Selection(Player* p) {

		// Sets maxSel to six for seven options
		// Sets player to the player pointer
		maxSel = 6;
		player = p;

	}

	// printMenu prints out the overall menu for the class
	void printMenu() {

		cout << "Select your weapon:" << endl << endl;

		// Switch to select the proper menu-cursor to print based off of where the cursor is
		switch (sel) {
		case 0:
			cout << "Axe...\t\t[]" << endl;
			cout << "Sword..." << endl;
			cout << "Bow..." << endl;
			cout << "Knife..." << endl;
			cout << "Bat..." << endl;
			cout << "Gun..." << endl;
			cout << "Shield..." << endl;
			break;
		case 1:
			cout << "Axe..." << endl;
			cout << "Sword...\t[]" << endl;
			cout << "Bow..." << endl;
			cout << "Knife..." << endl;
			cout << "Bat..." << endl;
			cout << "Gun..." << endl;
			cout << "Shield..." << endl;
			break;
		case 2:
			cout << "Axe..." << endl;
			cout << "Sword..." << endl;
			cout << "Bow...\t\t[]" << endl;
			cout << "Knife..." << endl;
			cout << "Bat..." << endl;
			cout << "Gun..." << endl;
			cout << "Shield..." << endl;
			break;
		case 3:
			cout << "Axe..." << endl;
			cout << "Sword..." << endl;
			cout << "Bow..." << endl;
			cout << "Knife...\t[]" << endl;
			cout << "Bat..." << endl;
			cout << "Gun..." << endl;
			cout << "Shield..." << endl;
			break;
		case 4:
			cout << "Axe..." << endl;
			cout << "Sword..." << endl;
			cout << "Bow..." << endl;
			cout << "Knife..." << endl;
			cout << "Bat...\t\t[]" << endl;
			cout << "Gun..." << endl;
			cout << "Shield..." << endl;
			break;
		case 5:
			cout << "Axe..." << endl;
			cout << "Sword..." << endl;
			cout << "Bow..." << endl;
			cout << "Knife..." << endl;
			cout << "Bat..." << endl;
			cout << "Gun...\t\t[]" << endl;
			cout << "Shield..." << endl;
			break;
		case 6:
			cout << "Axe..." << endl;
			cout << "Sword..." << endl;
			cout << "Bow..." << endl;
			cout << "Knife..." << endl;
			cout << "Bat..." << endl;
			cout << "Gun..." << endl;
			cout << "Shield...\t[]" << endl;
			break;
		}

	}

	// menuEvent to decide what action to take with the handler attribute
	void menuEvent() {

		// Declare a Weapon class pointer
		Weapon* w;

		// If the user selects the first option
		if (handler == "10") {

			// Set w to a new instance of the Axe class
			w = new Axe();

		}
		// Else if the user selects the second option
		else if (handler == "11") {

			// Set w to a new instance of the Sword class
			w = new Sword();

		}
		// Else if the user selects the third option
		else if (handler == "12") {

			// Set w to a new instance of the Bow class
			w = new Bow();

		}
		// Else if the user selects the fourth option
		else if (handler == "13") {

			// Set w to a new instance of the Knife class
			w = new Knife();

		}
		// Else if the user selects the fifth option
		else if (handler == "14") {

			// Set w to a new instance of the Bat class
			w = new Bat();

		}
		// Else if the user selects the sixth option
		else if (handler == "15") {

			// Set w to a new instance of the Gun class
			w = new Gun();

		}
		// Else if the user selects the seventh option
		else if (handler == "16") {

			// Srt w to a new instance of the Shield class
			w = new Shield();

		}
		// Else default w to a new instance of the Weapon class
		else {

			w = new Weapon();

		}

		// If the user selects an option
		if (handler.substr(0, 1) == "1") {

			// Set the weapon of the player to the value of the w pointer
			player->weapon = *w;

			// Output the player's choice
			cout << "You chose: " << player->weapon.toString() << endl;
			enterPause();

			// Exit out the of Selection screen
			menuScreen = false;

			// If type is combat
			if (type == "combat") {

				// Create a new Combat screen and activate its main method
				Combat c = Combat(player);
				c.menuMain();

			}
			else {

				// Create a new Movement screen and activate its main method
				Movement m = Movement(player);
				m.menuMain();

			}
		}

	}
};

// Class Prologue inherits the Movement class for the player pointer
class Prologue : public Movement {
public:

	// Prologue constructor with player pointer
	Prologue(Player* p) {

		// Sets maxSel to zero for one option
		// Sets player to the player pointer
		maxSel = 0;
		player = p;

	}

	// printMenu prints out the overall menu for the class
	void printMenu() {

		// Defines a name string
		string name = "";

		// Prompts the user for a name
		cout << "Choose your name: ";
		cin >> name;

		// Outputs the player's stats
		cout << "Player Stats: " << endl;
		player->name = name;

		cout << endl << "Adventurer: " << player->name << endl;
		cout << "Level:\t\t" << player->level << endl;
		cout << "Hit Points:\t" << player->hp << endl;
		cout << "Armor Class:\t" << player->ac << endl;

		cout << endl << "Are you ready?\t[]" << endl;

	}

	// menuEvent to decide what action to take with the handler attribute
	void menuEvent() {

		// When the user presses enter
		if (handler == "10") {

			// Create a Selection menu object and call its main method while exiting the current screen
			Selection s = Selection(player);
			menuScreen = false;
			s.menuMain();

		}

	}
};

// Final class inherits the Movement class for the player pointer
class Final : public Movement {
public:

	// Final constructor with player pointer
	Final(Player* p) {

		// Sets maxSel to one for two options
		// Sets player pointer to p
		maxSel = 1;
		player = p;

	}

	// printMenu prints out the overall menu for the class
	void printMenu() {

		cout << "Do you wish to end ?" << endl;

		// If the cursor if on the first option
		if (sel == 0) {

			// Output the menu with the cursor on the first option
			cout << "Yes...\t[]" << endl;
			cout << "No..." << endl;

		}
		// Else if the cursor is on the second option
		else if (sel == 1) {

			// Output the menu with the cursor on the second option
			cout << "Yes..." << endl;
			cout << "No...\t[]" << endl;

		}

	}

	// menuEvent to decide what action to take with the handler attribute
	void menuEvent() {

		// If the user selects the first option
		if (handler == "10") {

			// Declare an Ending pointer
			Ending* e;

			// If the player has traveled 10-14 paths
			if (player->paths < 15 && player->paths >= 10) {

				// Set e to a new instance of the Matrix ending
				e = new Matrix();

			}
			// Else if the player has traveled 15-19 paths
			else if (player->paths < 20 && player->paths >= 15) {

				// Set e to a new instance of the Legend ending
				e = new Legend();

			}
			// Else if the player has traveled 20-24 paths
			else if (player->paths < 25 && player->paths >= 20) {

				// Set e to a new instance of the Choice ending
				e = new Choice();

			}
			// Else if the player has traveled 25-29 paths
			else if (player->paths < 30 && player->paths >= 25) {

				// Set e to a new instance of the Engrave ending
				e = new Engrave();

			}
			// Else default e to a new instance of the Ending class
			else {

				e = new Ending();

			}

			// Exit the screen, set the player end attribute to true and call the ending
			menuScreen = false;
			player->end = true;
			e->end();

		}
		// Else if the user selects the second option
		else if (handler == "11") {

			// If the player has traveled more than of equal to 25 paths
			if (player->paths >= 25) {

				// Exit the screen, clear the screen, and tell the player the game has ended
				menuScreen = false;
				system("cls");
				cout << "You have played all that you can adventurer! Till next time..." << endl;
				enterPause();

			}
			// Else exit the screen
			else {

				menuScreen = false;
				player->hp += player->hp / 2;

			}

		}

	}
};

// EndTesting class inherits from the Menu class
class EndTesting : public Menu {
public:

	// Default constructor 
	EndTesting() {

		// Sets maxSel to four for five options
		maxSel = 4;

	};

	// printMenu prints out the overall menu for the class
	void printMenu() {

		cout << "ENDING SELECTION SCREEN" << endl;

		if (sel == 0) {

			cout << "Ending 1...\t[]" << endl;
			cout << "Ending 2..." << endl;
			cout << "Ending 3..." << endl;
			cout << "Ending 4..." << endl;
			cout << "Back..." << endl;

		}
		else if (sel == 1) {

			cout << "Ending 1..." << endl;
			cout << "Ending 2...\t[]" << endl;
			cout << "Ending 3..." << endl;
			cout << "Ending 4..." << endl;
			cout << "Back..." << endl;

		}
		else if (sel == 2) {

			cout << "Ending 1..." << endl;
			cout << "Ending 2..." << endl;
			cout << "Ending 3...\t[]" << endl;
			cout << "Ending 4..." << endl;
			cout << "Back..." << endl;

		}
		else if (sel == 3) {

			cout << "Ending 1..." << endl;
			cout << "Ending 2..." << endl;
			cout << "Ending 3..." << endl;
			cout << "Ending 4...\t[]" << endl;
			cout << "Back..." << endl;

		}
		else if (sel == 4) {

			cout << "Ending 1..." << endl;
			cout << "Ending 2..." << endl;
			cout << "Ending 3..." << endl;
			cout << "Ending 4..." << endl;
			cout << "Back...\t\t[]" << endl;

		}

	}

	// menuEvent to decide what action to take with the handler attribute
	void menuEvent() {

		// Declare an Ending pointer
		Ending* e;

		// If the player selects the first option
		if (handler == "10") {

			// Set e to a new instance of the Matrix ending
			e = new Matrix();

		}
		// Else if the player selects the second option
		else if (handler == "11") {

			// Set e to a new instance of the Legend ending
			e = new Legend();

		}
		// Else if the player selects the third option
		else if (handler == "12") {

			// Set e to a new instance of the Choice ending
			e = new Choice();

		}
		// Else if the player selects the fourth option
		else if (handler == "13") {

			// Set e to a new instance of the Engrave ending
			e = new Engrave();

		}
		// Else if the player selects the fifth option
		else if (handler == "14") {

			// Exit the screen and set e to a new instance of the Ending class
			menuScreen = false;
			e = new Ending();

		}
		else {

			// Else set e to a new instance of the Ending class
			e = new Ending();

		}

		// Invoke the end method from the instance of e
		e->end();

	}

};

// Main class inherits the Menu class
class Main : public Menu {
public:

	// Default constructor
	Main() {
	
		//Sets maxSel to three for four options
		maxSel = 3;

	}

	// printMenu prints out the overall menu for the class
	void printMenu() {
	
		cout << "LINEAR RPG CSE 130 PROTOTYPE V1.0" << endl;

		// If the cursor is on the first option
		if (sel == 0) {

			// Print the menu with the cursor on the first option
			cout << "New Game...\t[]" << endl;
			cout << "Test Ending..." << endl;
			cout << "Test Combat..." << endl;
			cout << "Exit..." << endl;

		}
		// Else if the cursor is on the second option
		else if (sel == 1) {

			// Print the menu with the cursor on the second option
			cout << "New Game..." << endl;
			cout << "Test Ending...\t[]" << endl;
			cout << "Test Combat..." << endl;
			cout << "Exit..." << endl;

		}
		// Else if the cursor is on the third option
		else if (sel == 2) {

			// Print the menu with the cursor on the second option
			cout << "New Game..." << endl;
			cout << "Test Ending..." << endl;
			cout << "Test Combat...\t[]" << endl;
			cout << "Exit..." << endl;

		}
		// Else if the cursor is on the fourth option
		else if (sel == 3) {

			// Print the menu with the cursor on the third option
			cout << "New Game..." << endl;
			cout << "Test Ending..." << endl;
			cout << "Test Combat..." << endl;
			cout << "Exit...\t\t[]" << endl;

		}

	}

	// menuEvent to decide what action to take with the handler attribute
	void menuEvent() {

		// If the player selects the first option, exit the menu
		if (handler == "10") {

			menuScreen = false;

		}
		// Else if the player selects the second option
		else if (handler == "11") {

			// Instantiate an EndTesting object and call its main method
			EndTesting end = EndTesting();
			end.menuMain();

		}
		// Else if the user selects the third option
		else if (handler == "12") {
		
			// Instantiate a Selection object and call its main method
			Selection s = Selection("combat");
			s.menuMain();
		
		}
		// Else if the user selects the third option, exit the program
		else if (handler == "13") {

			exit(0);

		}

	}
};

#endif