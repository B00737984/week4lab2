// author: james campbell//
// name: week4//
//weapon.cpp//

#include <iostream>
#include <string>
#include "weapon.h"

weapon::weapon() {
	
}


weapon::weapon(std::string weaponName, int Value, float weight, int damage, int health)
	: Item({ weaponName, Value, weight }), damage_{ damage }, health_{ health } {

}

void axe() {
	std::string type = "axe";
	int Value = 10;
	float weight = 30.6;
	int damage = 95;
	int health = 100;
}




void weapon::SetType(std::string type) {
	type_ = type;
}

std::string weapon::GetType() const {
	return type_;
}

void weapon::SetDamage(int damage) {
	damage_ = damage;
}

int weapon::GetDamage() const {
	return damage_;
}

void weapon::SetHealth(int health) {
	health_ = health;
}

int weapon::GetHealth() const {
	return health_;
}