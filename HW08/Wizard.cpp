#include "Wizard.h"

Wizard::Wizard():Mage()
{
	this->SetWeapon("Crystal_Staff");
	_magicTwo = "Fire_Ball";
}

Wizard::Wizard(int PP, int HP, int MP):Mage(PP,HP,MP)
{
	this->SetWeapon("Crystal_Staff");
	_magicTwo = "Fire_Ball";
}

void Wizard::SetMagicTwo(string magicTwo)
{
	_magicTwo = magicTwo;
}

string Wizard::GetMagicTwo()
{
	return _magicTwo;
}

void Wizard::Print()
{
	cout << "=============== Wizard ================" << endl;
	cout << " Weapon :" << this->GetWeapon() << endl;
	cout << " Power (PP):" << this->GetPP() << endl;
	cout << " Health (HP):" << this->GetHP() << endl;
	cout << " Mage (MP) :" << this->GetMP() << endl;
	cout << " Magic :" << this->GetMagic() << endl;
	cout << " MagicTwo :" << this->_magicTwo << endl;
}
