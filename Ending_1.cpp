#include <iostream>
using namespace std;

#include "Controls.h"

// Ending 1 main method
void ending1Main() {

	// input used to store the player's input
	// fail used to store if the player failed to get the correct code
	string input;
	bool fail = true;

	system("cls");

	cout << "Ending 1 Loading..." << endl << endl;

	enterPause();

	cout << "Enter Code:" << endl;

	input = getKeyboardInput();

	// Decoding if the player got the code correct
	if (input == "left") {
	
		cout << input << " ";
		input = getKeyboardInput();

		if (input == "right") {
		
			cout << input << " ";
			input = getKeyboardInput();

			if (input == "left") {
			
				cout << input << " ";
				input = getKeyboardInput();

				if (input == "right") {
				
					cout << input << endl << endl;
					fail = false;
					cout << "Access Granted..." << endl;
				
				}
			
			}
		
		}
	
	}
	enterPause();

	// Different paths for if the player failed or not
	if (fail) {
	
		cout << "Access Denied..." << endl;
		enterPause();
		cout << "Malicious Intent Detected..." << endl;
		enterPause();
		system("cls");
		cout << "GAME OVER" << endl;
		enterPause();
		cout << "Cause of Death: Rememberance Fault..." << endl;
		enterPause();
		cout << "The Secrets of this Game Lie in the Path of the Adventurer..." << endl;
		enterPause();
		cout << "Try Again..." << endl;
		enterPause();
		cout << "Press Spacebar to Continue...";
		input = getKeyboardInput();
		while (input != "spacebar") {
		
			input = getKeyboardInput();
		
		}
	
	}
	else {
	
		system("cls");
		cout << "OBJECT: UNKNOWN" << endl;
		enterPause();
		cout << "FUNCTION: UNKNOWN" << endl;
		enterPause();
		cout << "LOG:" << endl;
		enterPause();
		cout << "Day 1 - It first began to move..." << endl;
		enterPause();
		cout << "Day 2 - It feed off of normal things. Vegetables, fruit, but meat..." << endl;
		enterPause();
		cout << "Day 50 - *heavy breathing* Goodbye..." << endl;
		enterPause();
		cout << "SESSION TERMINATED" << endl;
		enterPause();
		system("cls");
		cout << "GAME OVER" << endl;
		enterPause();
		cout << "You win!" << endl;
		enterPause();
		cout << "Secret Datalogs Found" << endl;
		enterPause();
		cout << "Good Work Adventurer" << endl;
		enterPause();
		cout << "Narrator: Welcome to the Abyss..." << endl;
		enterPause();
		system("cls");

		// Matrix like effect
		for (int i = 0; i < 500; i++) {
		
			for (int j = 0; j < 100; j++) {
			
				cout << rand() % 10;
			
			}

			cout << endl;
		
		}

		system("cls");
		cout << "Press Enter to Continue...";
		enterPause();
	
	}

}