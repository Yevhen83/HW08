#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Warrior
{
public:
	Warrior();
	Warrior(int PP, int HP);
	void SetWeapon(string weapon);
	string GetWeapon();
	void SetPP(int PP);
	int GetPP();
	void SetHP(int HP);
	int GetHP();
	void Print();
private:
	string _weapon;		//orugie
	int _PP; //power	//sila
	int _HP; //health	//zdorove
};

