// Unique Ending

#include <iostream>
#include <windows.h>
using namespace std;

#include "Controls.h"

void ending3Main() {
    system("cls");

    cout << "Press Enter to Continue the Story..." << endl;

    int path;

    cout << "Enter 0 to turn left and 1 to turn right." << endl;
    cin >> path;

    // 0 = Good path, 1 = Bad path
    if (path == 0) {
        cout << "Congratulations, you picked the path that brought you out of the maze and away from all of the monsters!" << endl;
    }
    else if (path == 1) {
        cout << "As you continue down this path, you stumble upon a dark mansion. Once you enter the front doors, you trip a booby trap and get trapped inside a secret room of the mansion, where you can't seem to escape from." << endl;
    }
    else {
        cout << "That is not a valid number to enter! Try again." << endl;
    }
    enterPause();
}