#include "Warrior.h"

Warrior::Warrior() : _PP(5), _HP(5)
{
	_weapon = "Stick";
}

Warrior::Warrior(int PP, int HP): _PP(PP), _HP(HP)
{
	_weapon = "Stick";
}

void Warrior::SetWeapon(string weapon)
{
	_weapon = weapon;
}

string Warrior::GetWeapon()
{
	return _weapon;
}

void Warrior::SetPP(int PP) 
{
	_PP = PP;
}

int Warrior::GetPP()
{
	return _PP;
}

void Warrior::SetHP(int HP)
{
	_HP = HP;
}

int Warrior::GetHP()
{
	return _HP;
}

void Warrior::Print()
{
	cout << "=============== Warrior ================" << endl;
	cout << " Weapon :" << _weapon << endl;
	cout << " Power :" << _PP << endl;
	cout << " Health :" << _HP << endl;
}
