// author: james campbell//
// name: week4//
//weapon.cpp//

#include <iostream>
#include <string>
#include "weapon.h"
#include "warrior.h"
#include "archer.h"
#include "wizard.h"

weapon::weapon() {
	std::cout << "An awesome weapon has once more been crafted by master blacksmith Shane";
}



void weapon::SetType(std::string type) {
	type_ = type;
}

std::string weapon::GetType() const {
	return type;
}

void weapon::SetDamage(int damage) {
	damage_ = damage;
}

int weapon::GetDamage() const {
	return damage;
}

void weapon::SetLevel(int level) {
	level_ = level;
}

int weapon::GetLevel() const {
	return level;
}