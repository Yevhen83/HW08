#include "Warlock.h"

Warlock::Warlock() :Mage()
{
	this->SetWeapon("Ruby_Staff");
	_magicTwo = "Chain_Lightning";
}

Warlock::Warlock(int PP, int HP, int MP) :Mage(PP, HP, MP)
{
	this->SetWeapon("Ruby_Staff");
	_magicTwo = "Chain_Lightning";
}

void Warlock::SetMagicTwo(string magicTwo)
{
	_magicTwo = magicTwo;
}

string Warlock::GetMagicTwo()
{
	return _magicTwo;
}

void Warlock::Print()
{
	cout << "=============== Warlock ================" << endl;
	cout << " Weapon :" << this->GetWeapon() << endl;
	cout << " Power (PP):" << this->GetPP() << endl;
	cout << " Health (HP):" << this->GetHP() << endl;
	cout << " Mage (MP) :" << this->GetMP() << endl;
	cout << " Magic :" << this->GetMagic() << endl;
	cout << " MagicTwo :" << this->_magicTwo << endl;
}
