#ifndef ENTITIES_H
#define ENTITIES_H

using namespace std;

#include <iostream>
#include <vector>
#include "Weapons.h"

// Entity class to be inherited by multiple types of entities
class Entity {
public:
	
	// Declares a name attribute for the entities and a weapon object
	string name = "";
	Weapon weapon;

	// Defines a level, hp, and ac attribute
	int level = 0;
	int hp = 0;
	int ac = 0;

	// Default constructor for inheritance
	Entity() {}

	// toString method to return the name of the entity
	string toString() {
	
		return name;
	
	}

	// template method attack to simulate combat between two entities
	// Parameters:
	//				A* attacker - Template pointer to the attacking entity
	//				V* victim - Template pointer to the victim entity
	//				string style - The type of attacking that take place
	// Returns:
	//				V* victim - The template pointer to the victim entity
	template<class A, class V>
	V* attack(A* attacker, V* victim, string style) {
	
		// Creates a hit randomizer that is used with its accuracy to determine if the attack hits
		int hit = rand() % 99 + 1;

		// If the style is a normal attack
		if (style == "Attack") {
		
			// If the weapon is the shield
			if (victim->weapon.toString() == "Shield") {
			
				// If the damage would reduce the victim's health to below zero
				if (victim->hp < attacker->weapon.damage / 2) {
				
					// Put it to zero
					victim->hp = 0;
				
				}
				else {
				
					// Decrease the health by half the damage due to shield protection
					victim->hp -= attacker->weapon.damage / 2;
				
				}
			
			}
			else {
			
				// If the weapon accuracy is greater than the hit variable
				if (attacker->weapon.accuracy >= hit) {

					// If the damage were to take the victim to below zero hp
					if (victim->hp < attacker->weapon.damage) {

						// Set the hp to zero
						victim->hp = 0;

					}
					else {

						// Decrease the victim's hp by the damage
						victim->hp -= attacker->weapon.damage;

					}

				}
			
			}
		
		}
		else if (style == "Extra") {
			
			// If the weapon accuracy is greater than the hit variable 
			if (attacker->weapon.accuracy >= hit) {

				// If the damage were to take the victim to below zero hp
				if (victim->hp < attacker->weapon.extra) {

					// Set the hp to zero
					victim->hp = 0;

				}
				else {

					// Decrease the victim's hp by the damage
					victim->hp -= attacker->weapon.extra;

				}

			}
		
		}

		return victim;

	}
};

// Player class inherits the Entity class
class Player : public Entity {
public:

	// Defines new attributes 
	// paths to hold the number of paths traveled
	// end to hold if the player chose to end the game
	// move to hold the directions the player moves
	int paths = 0;
	bool end = false;
	vector<int> move{ 0,0 };

	// Default constructor sets the name to a default value as well as level, hp, and ac
	Player() {

		name = "Player";
		level = 1;
		hp = 500;
		ac = 5;
	
	}
};

// Slime class inherits the Entity class
class Slime : public Entity {
public:

	// Constructor with level
	Slime(int lev) {

		// Sets the name to Slime, level to lev,
		// generates the Slime's hp based on its level
		// and gives it the Bow weapon
		name = "Slime";
		level = lev;
		hp = lev * (rand() % 199 + 1);
		weapon = Bow();

	}
};

#endif