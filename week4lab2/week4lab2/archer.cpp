// author: james campbell//
// name: week4//
//archer.cpp//

#include <iostream>
#include <string>
#include "archer.h"

archer::archer() {
	std::cout << "an archer was born through the default constructor";
	charactertype_ = "archer";
	health_ = 100;
	level_ = 1;
	weapon_ = "bow and arrow";
	
}

void archer::PrintStatus() {
	std::cout << "The character is a: " << charactertype_ << "\n";
	std::cout << "Their health is at: " << health_ << "\n";
	std::cout << "They are level: " << level_ << "\n";
	std::cout << "Their weapon is a: " << weapon_ << endl;
}

void archer::SetName(std::string name) {
	name_ = name;
}

std::string archer::GetName() const {
	return name_;
}

void archer::SetCharactertype(std::string charactertype) {
	charactertype_ = charactertype;
}

std::string archer::GetCharactertype() const {
	return charactertype_;
}

void archer::SetHealth(int health) {
	health_ = health;
}

int archer::GetHealth() const {
	return health_;
}

void archer::SetLevel(int level) {
	level_ = level;
}

int archer::GetLevel() const {
	return level_;
}

void archer::SetWeapon(std::string weapon) {
	weapon_ = weapon;
}

std::string archer::GetWeapon() const {
	return weapon_;
}

