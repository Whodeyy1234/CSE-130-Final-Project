#ifndef ENDINGS_H
#define ENDINGS_H

#include <iostream>
#include <string>
using namespace std;

#include "Ending_1.h"
#include "Ending_2.h"
#include "Ending_3.h"
#include "Ending_4.h"

// Ending class to be inherited for other classes
class Ending {
public:
	Ending() {}

	// Virtual end method to be overloaded by child classes
	virtual void end() {}
};

// Each end class inherits Ending adn calls the endings main method

class Matrix : public Ending {
public:
	Matrix() {}

	void end() {
	
		ending1Main();

	}
};

class Legend : public Ending {
public:
	Legend() {}

	void end() {

		ending2Main();

	}
};

class Choice : public Ending {
public:
	Choice() {}

	void end() {

		ending3Main();

	}
};

class Engrave : public Ending {
public:
	Engrave() {}

	void end() {

		ending4Main();

	}
};

#endif