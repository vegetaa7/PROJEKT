#include "obrabiarka.h"
#include "wczytanie_pliku.h"
#include "branze.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string> CzytaczPliku::rozdziel_linie(string linia)
{
	vector<string> wyrazy;
	stringstream iss(linia);

	string wyraz;
	while (getline(iss, wyraz, ' '))
	{
		wyrazy.push_back(wyraz);
	}
	return wyrazy;
}

vector<WpisyBranzowe> CzytaczPliku::wczytaj(string sciezka) {

	fstream plik;
	string linia;
	int nr_linii;
	vector<WpisyBranzowe> wektor;

	plik.open(sciezka,ios::in);

	while(getline(plik,linia)){
		nr_linii++;
		vector<string> wyrazy = rozdziel_linie(linia);

		
		 WpisyBranzowe wb(wyrazy[0], wyrazy[1],stof(wyrazy[2],NULL),stof(wyrazy[3],NULL));
		 wektor.push_back(wb);
		

	}

	plik.close();
	return wektor;
}
