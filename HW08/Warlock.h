#pragma once
#include "Mage.h"
class Warlock : public Mage
{
public:
	Warlock();
	Warlock(int PP, int HP, int MP);
	void SetMagicTwo(string magicTwo);
	string GetMagicTwo();
	void Print();
private:
	string _magicTwo;


};

