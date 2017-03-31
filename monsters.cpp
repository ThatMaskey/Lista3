//Funkcje Monster

#include "monsters.h"

using namespace std;

string getTypeName(const MonsterType & type)
{
	string g;
	if (type == MonsterType::DRAGON)
	{
		g = "Smok";
		return g;
	}
	else if (type == MonsterType::GHOST)
	{
		g = "Duch";
		return g;
	}
	else if (type == MonsterType::UNDEAD)
	{
		g = "Nieumarly";
		return g;
	}
	else if (type == MonsterType::COW)
	{
		g = "Krowa";
		return g;
	}
	else if (type == MonsterType::SPIDER)
	{
		g = "Pajak";
		return g;
	}
}

void Monster::print()
{
	cout << "potwor  :  " << get_name() << endl;
	cout << "typ     :  " << get_type() << endl;
	cout << "atak    :  " << get_attack() << endl;
	cout << "zycie   :  " << get_health() << endl;
	cout << endl;
}

int Monster::il = 0;

void Monster::print_ilosc()
{
	cout << "Ilosc potworow:  " << il << endl << endl;
}

Monster::Monster() { il++;  cout << "<<Potwor stworzony>>" << endl; }

Monster::Monster(string imie, MonsterType typ, int atak, double hp)
	:name(imie), type (typ), attack(atak), health(hp)
{
	il++;
	setter(imie, typ, atak, hp);
	cout << "<<Potwor stworzony>>" << endl;
}

Monster::~Monster() { il=il-1; cout << "<<Potwor zniszczony>>" << endl; }

//Monster Monster::createRandomMonster()
//{
//	MonsterType tab[] = { MonsterType::DRAGON, MonsterType::COW,MonsterType::GHOST,MonsterType::SPIDER,MonsterType::UNDEAD };
//	Monster Random("Losowy", (tab[rand() % 5]), ((rand() % 14) + 5), (rand() % 19) + 10);
//	Random.print();
//	il=il+1;
//	print_ilosc();
//	return Random;
//}