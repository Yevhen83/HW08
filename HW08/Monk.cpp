#include "Monk.h"
Monk::Monk() : Warrior()
{
	this->SetWeapon("Runes");//Runii
	this->_magic = "Treatment";//Lechenie
	this->_MP = 10;

}

Monk::Monk(int PP, int HP, int MP) : Warrior(PP, HP), _MP(MP)
{
	this->SetWeapon("Runes");//Runii
	this->_magic = "Treatment";//Lechenie
}

void Monk::SetMagic(string magic)
{
	_magic = magic;
}

string Monk::GetMagic()
{
	return _magic;
}

void Monk::SetMP(int MP)
{
	_MP = MP;
}

int Monk::GetMP()
{
	return _MP;
}

void Monk::Print()
{
	cout << "=============== Monk ================" << endl;
	cout << " Weapon :" << this->GetWeapon() << endl;
	cout << " Power (PP):" << this->GetPP() << endl;
	cout << " Health (HP):" << this->GetHP() << endl;
	cout << " Mage (MP) :" << this->_MP << endl;
	cout << " Magic :" << this->_magic << endl;

}
