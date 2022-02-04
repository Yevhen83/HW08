#pragma once
#include"Rogue.h"
class Ranger : public Rogue
{
public:
	Ranger();
	Ranger(int PP, int HP, int EP);
	void SetAbilityTwo(string abilityTwo);
	string GetAbilityTwo();
	void Print();
private:
	string _abilityTwo;

};

