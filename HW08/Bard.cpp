#include "Bard.h"
Bard::Bard() :Rogue()
{
	this->SetWeapon("Spear ");//Kope
	this->_abilityTwo = "Melody"; //melodij
}

Bard::Bard(int PP, int HP, int EP) : Rogue(PP, HP, EP)
{
	this->SetWeapon("Spear ");//Kope
	this->_abilityTwo = "Melody"; //melodij
}

void Bard::SetAbilityTwo(string abilityTwo)
{
	_abilityTwo = abilityTwo;
}

string Bard::GetAbilityTwo()
{
	return _abilityTwo;
}

void Bard::Print()
{
	cout << "=============== Bard ================" << endl;
	cout << " Weapon :" << this->GetWeapon() << endl;
	cout << " Power (PP):" << this->GetPP() << endl;
	cout << " Health (HP):" << this->GetHP() << endl;
	cout << " Mage (EP) :" << this->GetEP() << endl;
	cout << " Ability :" << this->GetAbility() << endl;
	cout << " AbilityTwo :" << this->GetAbilityTwo() << endl;

}
