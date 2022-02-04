#pragma once
#include"Knight.h"
class Paladin : public Knight
{
public:
	Paladin();
	Paladin(int PP, int HP, int EP);
	void SetAbilityTwo(string abilityTwo);
	string GetAbilityTwo();
	void Print();
private:
	string _abilityTwo;

};

