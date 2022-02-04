#pragma once
#include"Rogue.h"
class Bard : public Rogue
{
public:
	Bard();
	Bard(int PP, int HP, int EP);
	void SetAbilityTwo(string abilityTwo);
	string GetAbilityTwo();
	void Print();
private:
	string _abilityTwo;

};
