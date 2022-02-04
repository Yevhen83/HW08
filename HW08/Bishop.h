#pragma once
#include "Monk.h"
class Bishop : public Monk
{
public:
	Bishop();
	Bishop(int PP, int HP, int MP);
	void SetMagicTwo(string magicTwo);
	string GetMagicTwo();
	void Print();
private:
	string _magicTwo;

};

