// Lista3.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include "player.h"
#include "monsters.h"

using namespace std;



int main()
{
	Monster *Smok, *Duch, *Nieumarly, *Krowa, *Pajak;		//Tworzenie klas i ustawianie wartosci
	Smok = new Monster;
	Duch = new Monster;
	Nieumarly = new Monster;
	Krowa = new Monster;
	Pajak = new Monster;
	Smok->setter("Draconis", MonsterType::DRAGON, 15, 28);		
	Duch->setter("Spirit", MonsterType::GHOST, 5, 2);
	Nieumarly->setter("Skeletor", MonsterType::UNDEAD, 4, 15);
	Krowa->setter("Moo", MonsterType::COW, 1, 1);
	Pajak->setter("Janusz", MonsterType::SPIDER, 12, 4);
	cout << endl;
	Player * Gracz;
	Gracz = new Player;
	Gracz->setter("Gracz", 13, 0, 15);
	cout << endl;

	Monster::print_ilosc();

	srand(time(NULL));
	int a;
	cout << "Dostepne potwory: " << endl << endl;		//Wyswietlanie danych wybranego potwora
	cout << "[1] Smok" << endl;				
	cout << "[2] Duch" << endl;
	cout << "[3] Nieumarly" << endl;
	cout << "[4] Krowa" << endl;
	cout << "[5] Pajak" << endl << endl;
	cout << "Wybierz potwora: ";
	cin >> a;
	cout << endl;
		
	switch (a)
	{
	case 1:
		Smok->print();
		break;
	case 2:
		Duch->print();
		break;
	case 3:
		Nieumarly->print();
		break;
	case 4:
		Krowa->print();
		break;
	case 5:
		Pajak->print();
		break;
	default:
		cout << "Potwor nie istnieje!" << endl;
		cout << endl;
		break;
	}

	cout << "Niszczenie wstepnie stworzonych potworow:" << endl << endl;		//Niszczenie klas stworzonych na poczatku programu
	delete Smok;
	delete Duch;
	delete Nieumarly;
	delete Krowa;
	delete Pajak;
	cout << endl;

	Monster::print_ilosc();

	cout << "Dane gracza: " << endl << endl;		//Wyswietlanie danych gracza i niszczenie gracza
	Gracz->print();
	delete Gracz;

	Player *Seba;		//Tworzenie klas, wyswietlanie wartosci i niszczenie klas
	Seba = new Player;
	Seba->setter("Gracz Seba", 5, 20, 12);
	cout << endl;
	Seba->print();
	delete Seba;
	
	Monster *Janusz;
	Janusz = new Monster;
	Janusz->setter("Smok Janusz", MonsterType::DRAGON, 12, 10);
	cout << endl;
	Monster::print_ilosc();
	Janusz->print();
	delete Janusz;
	cout << endl;

	Monster::print_ilosc();

	int x;
	cout << "Podaj liczbe potworow do losowej generacji: ";		//Wprowadzenie liczby potworow, jaka ma zostac losowo wygenerowana do tablicy
	cin >> x;
	cout << endl;

	Monster *losowe;
	losowe = new Monster[x];

	cout << endl;

	MonsterType tab[] = { MonsterType::DRAGON, MonsterType::COW,MonsterType::GHOST,MonsterType::SPIDER,MonsterType::UNDEAD };

	for (int i = 0; i < x; i++)
	{
		losowe[i].setter("Losowy", (tab[rand() % 5]), ((rand() % 14) + 5), ((rand() % 19) + 10));
		losowe[i].print();
	}

	Monster::print_ilosc();		//Wyswietlenie ilosci potworow w tablicy i niszczenie ich

	delete[] losowe;
	cout << endl;

	Monster::print_ilosc();

	cout << "Test konstruktora:" << endl << endl;
	Monster Xyz("Xyx", MonsterType::COW, 10, 12);		//Test drugiego konstruktora
	cout << endl;
	Xyz.print();

    return 0;
}