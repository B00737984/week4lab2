// author: james campbell//
// name: week4//
//warrior.ccp//

#include <iostream>
#include <string>
#include "warrior.h"

warrior::warrior() {
	std::cout << "a warrior was born through the default constructor"; 
	charactertype_ = "warrior";
	health_ = 100;
	level_ = 1;
	weapon_ = "axe";
	
}

void warrior::PrintStatus() {
	std::cout << "The character is a: " << charactertype_ << "\n";
	std::cout << "Their health is at: " << health_ << "\n";
	std::cout << "They are level: " << level_ << "\n";
	std::cout << "Their weapon is a: " << weapon_ << endl;
}

void warrior::SetName(std::string name) {
	name_ = name;
}

std::string warrior::GetName() const {
	return name_;
}

void warrior::SetCharactertype(std::string charactertype) {
	charactertype_ = charactertype;
}

std::string warrior::GetCharactertype() const {
	return charactertype_;
}

void warrior::SetHealth(int health) {
	health_ = health;
}

int warrior::GetHealth() const {
	return health_;
}

void warrior::SetLevel(int level) {
	level_ = level;
}

int warrior::GetLevel() const {
	return level_;
}

void warrior::SetWeapon(std::string weapon) {
	weapon_ = weapon;
}

std::string warrior::GetWeapon() const {
	return weapon_;
}

