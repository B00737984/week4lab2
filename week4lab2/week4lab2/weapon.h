// author: james campbell//
// name: week4//
//weapon.h//
#pragma once


#include <iostream>
#include <string>


class weapon {
private:
	std::string type_;
	int damage_;
	int level_;

public:
	void SetType(std::string type);
	std::string GetType() const;

	void SetDamage(int damage);
	int GetDamage() const;

	void SetLevel(int level);
	int GetLevel() const;


}