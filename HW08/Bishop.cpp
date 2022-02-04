#include "Bishop.h"

Bishop::Bishop() : Monk()
{
	this->SetWeapon("Holy_Skiptere ");//Svjtoii skipetr
	_magicTwo = "Therapeutic wave"; //lechebnaj volna
}

Bishop::Bishop(int PP, int HP, int MP) : Monk(PP, HP, MP)
{
	this->SetWeapon("Holy_Skiptere ");//Svjtoii skipetr
	_magicTwo = "Therapeutic wave"; //lechebnaj volna
}

void Bishop::SetMagicTwo(string magicTwo)
{
	_magicTwo = magicTwo;
}

string Bishop::GetMagicTwo()
{
	return _magicTwo;
}

void Bishop::Print()
{
	cout << "=============== Warlock ================" << endl;
	cout << " Weapon :" << this->GetWeapon() << endl;
	cout << " Power (PP):" << this->GetPP() << endl;
	cout << " Health (HP):" << this->GetHP() << endl;
	cout << " Mage (MP) :" << this->GetMP() << endl;
	cout << " Magic :" << this->GetMagic() << endl;
	cout << " MagicTwo :" << this->_magicTwo << endl;
}
