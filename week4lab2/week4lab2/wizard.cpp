// author: james campbell//
// name: week4//
//wizard.cpp//

#include <iostream>
#include <string>
#include "wizard.h"

wizard::wizard() {
	std::cout << "a wizard was born through the default constructor";
	charactertype_ = "wizard";
	health_ = 100;
	level_ = 1;
	weapon_ = "staff";
	
}

void wizard::PrintStatus() {
	std::cout << "The character is a: " << charactertype_ << "\n";
	std::cout << "Their health is at: " << health_ << "\n";
	std::cout << "They are level: " << level_ << "\n";
	std::cout << "Their weapon is a: " << weapon_ << endl;
}

void wizard::SetName(std::string name) {
	name_ = name;
}

std::string wizard::GetName() const {
	return name_;
}

void wizard::SetCharactertype(std::string charactertype) {
	charactertype_ = charactertype;
}

std::string wizard::GetCharactertype() const {
	return charactertype_;
}

void wizard::SetHealth(int health) {
	health_ = health;
}

int wizard::GetHealth() const {
	return health_;
}

void wizard::SetLevel(int level) {
	level_ = level;
}

int wizard::GetLevel() const {
	return level_;
}

void wizard::SetWeapon(std::string weapon) {
	weapon_ = weapon;
}

std::string wizard::GetWeapon() const {
	return weapon_;
}

