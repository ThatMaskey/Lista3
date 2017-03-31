#pragma once

//Plik nag³ówkowy z danymi player.cpp

#include "monsters.h"

using namespace std;

class Player
{
private:

	string name;
	int attack;
	int magic;
	double health;

public:

	void setter(string imie, int atak, int magia, double hp)		//Mutator
	{
		name = imie;
		attack = atak;
		magic = magia;
		health = hp;
	}
	string get_name() const			//Akcesory
	{
		return name;
	}
	int get_attack() const
	{
		return attack;
	}
	int get_magic() const
	{
		return magic;
	}
	double get_health() const
	{
		return health;
	}

	void print();		//Metoda print
	Player();		//Konstruktor
	Player(string imie, int atak, int magia, double hp);		//Konstruktor z wartoœciami
	~Player();		//Destruktor
};