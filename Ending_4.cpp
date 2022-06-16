#include <iostream> 
#include <string>
#include <windows.h>
using namespace std;

#include "Controls.h"

void ending4Main() {
	system("cls");

	cout << "Press Enter to Continue the Story..." << endl;

	string engrave;
	string weapon;


	cout << "I'm glad you made it! You have now completed route 4 of (Insert name of game)." << endl;
	enterPause();
	cout << "While you have fought hard battles the game is not fully over. You can go back and try the other 3 routes." << endl;
	enterPause();
	cout << "once complete all routes you will become the true champion" << endl;
	enterPause();
	cout << "In the mean time you can select a collectible weapon, choose between Axe, Sword, Bow: ";
	cin >> weapon;
	cout << "You selected " << weapon << endl; 
	enterPause();	
	cout << "You may now keep " << weapon << " in your war chest. " << endl; 
	enterPause();
	cout << "You can choose to engrave your " << weapon << " with anything you want, choose the word you want to engrave: "; 
	cin >> engrave;
	cout << "You have engrave your " << weapon << " with " << engrave << endl; 
	cout << "Good Luck in your journey and keep fighting! Don't give up! ";
	enterPause();
}
