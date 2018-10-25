// author: james campbell//
// name: week4//
//wizard.h//
#pragma once


#include <iostream>
#include <string>


class wizard {
private:
	std::string name_;
	std::string charactertype_;
	int health_;
	int level_;
	std::string weapon_;

public:
	void SetName(std::string name);
	std::string GetName() const;

	void SetCharactertype(std::string charactertype);
	std::string GetCharactertype() const;

	void SetHealth(int health);
	int GetHealth() const;

	void SetLevel(int level);
	int GetLevel() const;

	void SetWeapon(std::string weapon);
	std::string GetWeapon() const;


};