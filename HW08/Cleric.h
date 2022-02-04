#pragma once
#include "Monk.h"
class Cleric : public Monk
{
public:
	Cleric();
	Cleric(int PP, int HP, int MP);
	void SetMagicTwo(string magicTwo);
	string GetMagicTwo();
	void Print();
private:
	string _magicTwo;

};

