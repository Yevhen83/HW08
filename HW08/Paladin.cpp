#include "Paladin.h"
Paladin::Paladin() :Knight()
{
	this->SetWeapon("Holy_Blade");//svjtoii klinok
	this->_abilityTwo = "Blessing"; //blagoslovenie
}

Paladin::Paladin(int PP, int HP, int EP) :Knight(PP, HP, EP)
{
	this->SetWeapon("Holy_Blade");//svjtoii klinok
	this->_abilityTwo = "Blessing"; //blagoslovenie
}

void Paladin::SetAbilityTwo(string abilityTwo)
{
	_abilityTwo = abilityTwo;
}

string Paladin::GetAbilityTwo()
{
	return _abilityTwo;
}

void Paladin::Print()
{
	cout << "=============== Paladin ================" << endl;
	cout << " Weapon :" << this->GetWeapon() << endl;
	cout << " Power (PP):" << this->GetPP() << endl;
	cout << " Health (HP):" << this->GetHP() << endl;
	cout << " Mage (EP) :" << this->GetEP() << endl;
	cout << " Ability :" << this->GetAbility() << endl;
	cout << " AbilityTwo :" << this->GetAbilityTwo() << endl;

}
