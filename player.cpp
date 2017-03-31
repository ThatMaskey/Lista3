//Funkcje Player

#include "player.h"

using namespace std;

void Player::print()
{
	cout << "gracz   :  " << get_name() << endl;
	cout << "atak    :  " << get_attack() << endl;
	cout << "magia   :  " << get_magic() << endl;
	cout << "zycie   :  " << get_health() << endl;
	cout << endl;
}

Player::Player() {cout << "<<Gracz stworzony>>" << endl;};	// Konstruktor podstawowy

Player::Player(string imie, int atak, int magia, double hp)		//Konstruktor z wartosciami obiektu
	:name (imie), attack (atak), magic (magia), health (hp)
{
	setter(imie, atak, magia, hp);
	cout << "<<Gracz stworzony>>" << endl << endl;
}

Player::~Player() { cout << "<<Gracz zniszczony>>" << endl << endl; };			//Destruktor