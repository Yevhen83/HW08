#pragma once
#include"Knight.h"
class Barbarian : public Knight
{
public:
	Barbarian();
	Barbarian(int PP, int HP, int EP);
	void SetAbilityTwo(string abilityTwo);
	string GetAbilityTwo();
	void Print();
private:
	string _abilityTwo;

};

