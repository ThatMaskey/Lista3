#pragma once

//G³ówny plik nag³ówkowy z danymi monsters.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

enum class MonsterType
{
	GHOST,
	DRAGON,
	UNDEAD,
	COW,
	SPIDER
};

string getTypeName(const MonsterType & type);

class Monster
{
private:

	string name;
	MonsterType type;
	int attack;
	double health;
	

public:
	static int il;
	void setter(string imie, MonsterType typ, int atak, double hp)		//Mutatory
	{
		name = imie;
		type = typ;
		attack = atak;
		health = hp;
	}
	string get_name() const			//Akcesory
	{
		return name;
	}
	string get_type() const
	{
		return getTypeName(type);
	}
	int get_attack() const
	{
		return attack;
	}
	double get_health() const
	{
		return health;
	}

	void print();		//Metoda print
	Monster();			//Konstruktory
	Monster(string imie, MonsterType typ, int atak, double hp);
	~Monster();			//Destruktor
	static void print_ilosc();
	/*Monster createRandomMonster();*/
};