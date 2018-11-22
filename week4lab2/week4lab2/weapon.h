// author: james campbell//
// name: week4//
//weapon.h//
#pragma once


#include <iostream>
#include <string>
#include "Item.h"


class weapon : public Item {
private:
	std::string type_;
	int damage_;
	int health_;

public:

	weapon();
	weapon(std::string type, int itemvalue, float itemweight, int damage, int health);

	void SetType(std::string type);
	std::string GetType() const;

	void SetDamage(int damage);
	int GetDamage() const;

	void SetHealth(int health);
	int GetHealth() const;


};