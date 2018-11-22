#include "GameCharacter.h"
#include "weapon.h"





/*
std::string name_;
std::string charactertype_;
int health_;
int level_;

*/


void GameCharacter::SetName(std::string name) {
	name_ = name;
}

std::string GameCharacter::GetName() const {
	return name_;
}

void GameCharacter::SetCharactertype(std::string charactertype) {
	charactertype_ = charactertype;
}

std::string GameCharacter::GetCharactertype() const {
	return charactertype_;
}

void GameCharacter::SetHealth(int health) {
	health_ = health;
}

int GameCharacter::GetHealth() const {
	return health_;
}

void GameCharacter::SetLevel(int level) {
	level_ = level;
}

int GameCharacter::GetLevel() const {
	return level_;
}

void GameCharacter::SetWeapon(weapon weapon) {
	weapon_ = weapon;
}

weapon GameCharacter::GetWeapon() const {
	return weapon_;
}
