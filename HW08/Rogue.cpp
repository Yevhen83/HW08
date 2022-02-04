#include "Rogue.h"
Rogue::Rogue() : Warrior()
{
	this->SetWeapon("Dagger"); //kingal
	this->_ability = "Secrecy ";//skritnost
	this->_EP = 10;
}

Rogue::Rogue(int PP, int HP, int EP) :Warrior(PP, HP), _EP(EP)
{
	this->SetWeapon("Dagger"); //kingal
	this->_ability = "Secrecy ";//skritnost
}

void Rogue::SetAbility(string ability)
{
	_ability = ability;
}

string Rogue::GetAbility()
{
	return _ability;
}

void Rogue::SetEP(int EP)
{
	_EP = EP;
}

int Rogue::GetEP()
{
	return _EP;
}

void Rogue::Print()
{
	cout << "=============== Rogue ================" << endl;
	cout << " Weapon :" << this->GetWeapon() << endl;
	cout << " Power (PP):" << this->GetPP() << endl;
	cout << " Health (HP):" << this->GetHP() << endl;
	cout << " Mage (EP) :" << this->_EP << endl;
	cout << " Ability :" << this->_ability << endl;
}
