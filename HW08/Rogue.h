#pragma once
#include "Warrior.h"

class Rogue : public Warrior
{
public:
	Rogue();
	Rogue(int PP, int HP, int EP);
	void SetAbility(string ability);
	string GetAbility();
	void SetEP(int EP);
	int GetEP();
	void Print();


private:
	string _ability;			//sposobnosti
	int _EP;	//endurance 	//vinoslivost


};

