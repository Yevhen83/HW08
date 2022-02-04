#include "Barbarian.h"

Barbarian::Barbarian():Knight()
{
	this->SetWeapon("Two_Sword");//dva mecha
	this->_abilityTwo = "Rage "; //Jarost
}

Barbarian::Barbarian(int PP, int HP, int EP):Knight(PP,HP,EP)
{
	this->SetWeapon("Two_Sword");//dva mecha
	this->_abilityTwo = "Rage "; //Jarost
}

void Barbarian::SetAbilityTwo(string abilityTwo)
{
	_abilityTwo = abilityTwo;
}

string Barbarian::GetAbilityTwo()
{
	return _abilityTwo;
}

void Barbarian::Print()
{
	cout << "=============== Barbarian ================" << endl;
	cout << " Weapon :" << this->GetWeapon() << endl;
	cout << " Power (PP):" << this->GetPP() << endl;
	cout << " Health (HP):" << this->GetHP() << endl;
	cout << " Mage (EP) :" << this->GetEP() << endl;
	cout << " Ability :" << this->GetAbility() << endl;
	cout << " GetAbilityTwo :" << this->GetAbilityTwo() << endl;

}
