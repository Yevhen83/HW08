#include "Cleric.h"
Cleric::Cleric() : Monk()
{
	this->SetWeapon("Scepter");//skipetr
	_magicTwo = "Therapeutic wave"; //lechebnaj volna
}

Cleric::Cleric(int PP, int HP, int MP) : Monk(PP, HP, MP)
{
	this->SetWeapon("Scepter");//skipetr
	_magicTwo = "Therapeutic wave"; //lechebnaj volna
}

void Cleric::SetMagicTwo(string magicTwo)
{
	_magicTwo = magicTwo;
}

string Cleric::GetMagicTwo()
{
	return _magicTwo;
}

void Cleric::Print()
{
	cout << "=============== Warlock ================" << endl;
	cout << " Weapon :" << this->GetWeapon() << endl;
	cout << " Power (PP):" << this->GetPP() << endl;
	cout << " Health (HP):" << this->GetHP() << endl;
	cout << " Mage (MP) :" << this->GetMP() << endl;
	cout << " Magic :" << this->GetMagic() << endl;
	cout << " MagicTwo :" << this->_magicTwo << endl;
}
