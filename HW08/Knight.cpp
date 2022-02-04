#include "Knight.h"

Knight::Knight() : Warrior()
{
	this->SetWeapon("Sword"); //mech
	this->_ability = "Strengthening_Attack ";//usilenie ataki
	this->_EP = 10;
}

Knight::Knight(int PP, int HP, int EP) :Warrior(PP, HP), _EP(EP)
{
	this->SetWeapon("Sword"); //mech
	this->_ability = "Strengthening_Attack ";//usilenie ataki

}

void Knight::SetAbility(string ability)
{
	_ability = ability;
}

string Knight::GetAbility()
{
	return _ability;
}

void Knight::SetEP(int EP)
{
	_EP = EP;
}

int Knight::GetEP()
{
	return _EP;
}

void Knight::Print()
{
	cout << "=============== Knight ================" << endl;
	cout << " Weapon :" << this->GetWeapon() << endl;
	cout << " Power (PP):" << this->GetPP() << endl;
	cout << " Health (HP):" << this->GetHP() << endl;
	cout << " Mage (EP) :" << this->_EP << endl;
	cout << " Ability :" << this->_ability << endl;
}
