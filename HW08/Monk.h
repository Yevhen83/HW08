#pragma once
#include "Warrior.h"

class Monk : public Warrior
{
public:
	Monk();
	Monk(int PP, int HP, int MP);
	void SetMagic(string magic);
	string GetMagic();
	void SetMP(int MP);
	int GetMP();
	void Print();


private:
	string _magic;	//magij
	int _MP;		//uroven magii

};

