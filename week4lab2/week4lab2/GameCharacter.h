#pragma once

#include <iostream>
#include <string>
#include "Item.h"
#include "weapon.h"
//#include "armour.h"


class GameCharacter
{


private:
	std::string name_;
	std::string charactertype_;
	int health_;
	int level_;
	weapon weapon_;
	//Armour armour_;

public:

	

	void SetName(std::string name);
	std::string GetName() const;

	void SetCharactertype(std::string charactertype);
	std::string GetCharactertype() const;

	void SetHealth(int health);
	int GetHealth() const;

	void SetLevel(int level);
	int GetLevel() const;

	void SetWeapon(weapon weapon);
	weapon GetWeapon() const;

	
};

