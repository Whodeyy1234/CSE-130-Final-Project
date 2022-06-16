#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

#include "Controls.h"

void ending2Main() {
	system("cls");

	cout << "Press Enter to Continue the Story..." << endl;

	string x;

	string input = "";

	cout << "Congratulations, you have made it through the trencherous paths leading up to this moment." << endl;
	enterPause();
	cout << "You have received 2.1 million currency and a beautifully handcrafted, legendary sword you can engrave." << endl;
	enterPause();
	cout << "What would you like to engrave in this legendary sword?" << endl;
	cin >> x;
	cout << "You're sword is now engraved with the name " << x << "." << endl;
	enterPause();
	cout << "Nice job! Now I would like to tell you about your final destination... You are to go to Arlington to see your final reward." << endl;
	enterPause();
	cout << "Upon arrival from the north end, you will follow a path of cherry blossom trees to your destination." << endl;
	enterPause();
	cout << "Well what are you waiting for? See you there!" << endl;
	enterPause();
	cout << "You walk for about 40 minutes when you finally see the line of cherry blossom tress..." << endl;
	enterPause();
	cout << "You squint your eyes and see what seems to be a mansion, thinking to yourself; this has to be a joke!" << endl;
	enterPause();
	cout << "You walk to the front of the mansion and decide to try your luck." << endl;
	enterPause();
	cout << "The front door of the mansion is unlocked, as you step inside you notice a letter addressed to you" << endl;
	enterPause();
	cout << "Warrior, thank you for everything you have done. As a final gift, I would like to reward you with this mansion, previously owned by a warrior of your status." << endl;
	enterPause();
	cout << "They were a well respected warrior who gave their all to fight off the monsters in the area. I find it only fair to give this home to you, as you continue your path towards greatness." << endl;
	enterPause();
	cout << "Please, continue your journey of growth and save the world from the monsters taking over... It is peaceful now but soon, they will come back stronger and more dangerous..." << endl;
	enterPause();
}
