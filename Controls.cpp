#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

// Credit to arrow key detection via: http://www.cplusplus.com/forum/beginner/241912/

// getKeyboardInput to pause execution and wait for keyboard input
// Returns:
//			string input - The specific key the player pressed
string getKeyboardInput() {

	int c;

	// _getch() gets the ASCII value of the key
	c = _getch();
	
	// If the first value is 224 its an arrow key
	if (c == 224) {
	
		// Switch through another _getch() call
		switch (c = _getch()) {
		
			case 72:
				return "up";
				break;
			case 80:
				return "down";
			case 77:
				return "right";
				break;
			case 75:
				return "left";
				break;
			default:
				return "invalid";
				break;
		
		}
	
	}
	// If c is 13 then it's the enter key
	else if (c == 13) {
	
		return "enter";
	
	}
	// If c is 32 then it's the spacebar
	else if (c == 32) {
	
		return "spacebar";
	
	}
	// If c is 27 then it's the escape key to exit the program
	else if (c == 27) {
	
		exit(0);
	
	}
	else {
	
		return "invalid";
	
	}

}

// arrowHandler to take parameters and output the new location of the cursor
// Parameters:
//				string arrow - The input the player provides
//				int sel - The current position of the cursor
//				int last - The maximum position the cursor can be in
// Returns:
//				int sel - The new position of the cursor
int arrowHandler(string arrow, int sel, int last) {

	if (arrow == "up") {
	
		if (sel > 0) {
		
			sel--;
		
		}
	
	}
	else if (arrow == "down") {
	
		if (sel < last) {
		
			sel++;
		
		}
	
	}

	return sel;

}

// enterHandler to take parameters and output the new handler variable
// Parameters:
//				string arrow - The input the player provides
//				int sel - The current position of the cursor
//				int last - The maximum position the cursor can be in
// Returns:
//				string - The new handler variable
string enterHandler(string key, int sel, int last) {

	if (key == "enter") {

		return "1" + to_string(sel);
	
	}

	return "0" + to_string(sel);

}

// enterPause to pause execution of the program until the enter key is pressed
void enterPause() {

	string input = getKeyboardInput();
	while (input != "enter") {
	
		input = getKeyboardInput();
	
	}

}