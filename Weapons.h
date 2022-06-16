#ifndef WEAPONS_H
#define WEAPONS_H

// Weapon class to be inherited by specific weapons
class Weapon {
public:

	// Defines various variables
	// name to hold the weapons name
	// accuracy to hold its accuracy stat
	// damage to hold its damage stat
	// extra to hold its extra damage stat
	string name = "";
	int accuracy = 0;
	int damage = 0;
	int extra = 0;

	// toString method to return the name of the weapon
	string toString() {
	
		return name;
	
	}
};

// Axe class inherits Weapon
class Axe : public Weapon {
public:

	// Default constructor
	Axe() {
		
		//Defaults values to specific stats
		name = "Axe";
		accuracy = 90;
		damage = 50;
		extra = 40; //throw Axe. Damage.
	}
};

// Sword class inherits Weapon
class Sword : public Weapon {
public:

	// Default constructor
	Sword() {

		//Defaults values to specific stats
		name = "Sword";
		accuracy = 90;
		damage = 50;

	}
};

// Bow class inherits Weapon
class Bow : public Weapon {
public:

	// Default constructor
	Bow() {

		//Defaults values to specific stats
		name = "Bow";
		accuracy = 80;
		damage = 15;
		extra = 10; // hit damage
	}
};

// Knife class inherits Weapon
class Knife : public Weapon {
public:

	// Default constructor
	Knife() {

		//Defaults values to specific stats
		name = "Knife";
		accuracy = 55;
		damage = 30;//standard damage for toss
		extra = 75; // stab damage 75

	}
};

// Bat class inherits Weapon
class Bat : public Weapon {
public:

	// Default constructor
	Bat() {

		//Defaults values to specific stats
		name = "Bat";
		accuracy = 90;
		damage = 60; //standard damage for swing 

	}
};

// Gun class inherits Weapon
class Gun : public Weapon {
public:

	// Default constructor
	Gun() {

		//Defaults values to specific stats
		name = "Gun";
		accuracy = 50;
		damage = 80; //standard damage for shooting
		extra = 20; // toss damage
	}
};

// Shield class inherits Weapon
class Shield : public Weapon {
public:

	// Default constructor
	Shield() {

		//Defaults values to specific stats
		name = "Shield";
		accuracy = 100;
		damage = 5; //standard damage for hitting with shield
	}
};

#endif