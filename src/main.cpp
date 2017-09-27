#include<iostream>
#include<vector>
#include<string>
#include <fstream>
#include "obrabiarka.h"
#include "wczytanie_pliku.h"
#include "branze.h"

using namespace std;

int main()
{
	CzytaczPliku obj;

	string sciezka;
	cout<<"Podaj sciezke: "<<endl;
	cin>>sciezka;
    Obrabiarka objekt;
	cout<<endl<<objekt.obrob(obj.wczytaj(sciezka))[0]<<endl;



	//wczytac z pliku

	// odpalic czytacz

	// wynik czytacz dac do obrabiarki

	// wypisac wektor otrzymany z obrabiarki...
	return 0;
}
