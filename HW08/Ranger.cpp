#include "Ranger.h"

Ranger::Ranger():Rogue()
{
	this->SetWeapon("Bow");//Luk
	this->_abilityTwo = "Mesh "; //Setka
}

Ranger::Ranger(int PP, int HP, int EP) : Rogue(PP, HP, EP)
{
	this->SetWeapon("Bow");//Luk
	this->_abilityTwo = "Mesh "; //Setka
}

void Ranger::SetAbilityTwo(string abilityTwo)
{
	_abilityTwo = abilityTwo;

}

string Ranger::GetAbilityTwo()
{
	return _abilityTwo;
}

void Ranger::Print()
{
	cout << "=============== Ranger ================" << endl;
	cout << " Weapon :" << this->GetWeapon() << endl;
	cout << " Power (PP):" << this->GetPP() << endl;
	cout << " Health (HP):" << this->GetHP() << endl;
	cout << " Mage (EP) :" << this->GetEP() << endl;
	cout << " Ability :" << this->GetAbility() << endl;
	cout << " AbilityTwo :" << this->GetAbilityTwo() << endl;

}
