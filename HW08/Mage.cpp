#include "Mage.h"

Mage::Mage(): Warrior()
{
	this->SetWeapon("Staff");
	this->_magic = "Fire_Arrow";
	this->_MP = 10;
	
}

Mage::Mage(int PP, int HP, int MP):Warrior(PP,HP),_MP(MP)
{
	this->SetWeapon("Staff");
	this->_magic = "Fire_Arrow";
}

void Mage::SetMagic(string magic)
{
	_magic = magic;
}

string Mage::GetMagic()
{
	return _magic;
}

void Mage::SetMP(int MP)
{
	_MP = MP;
}

int Mage::GetMP()
{
	return _MP;
}

void Mage::Print()
{
	cout << "=============== Mage ================" << endl;
	cout << " Weapon :" << this->GetWeapon() << endl;
	cout << " Power (PP):" << this->GetPP() << endl;
	cout << " Health (HP):" << this->GetHP() << endl;
	cout << " Mage (MP) :" << this->_MP << endl;
	cout << " Magic :" << this->_magic << endl;

}
