#pragma once
#include "Mage.h"
class Wizard :  public Mage
{
public:
	Wizard();
	Wizard(int PP, int HP, int MP);
	void SetMagicTwo(string magicTwo);
	string GetMagicTwo();
	void Print();
private:
	string _magicTwo;


};

