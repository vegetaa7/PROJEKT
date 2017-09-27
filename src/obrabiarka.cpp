#include<iostream>
#include<vector>
#include<string>
#include <fstream>
#include "obrabiarka.h"
#include "wczytanie_pliku.h"
#include "branze.h"


vector<float> Obrabiarka::obrob(vector<WpisyBranzowe> wpisy) {

	float cena[3];
	float zmiana[3];
	float wynik;
	vector<float>procentowa_zmiana;

	vector<WpisyBranzowe>podzial[3];
	
	for(int j=0;j<wpisy.size();j++){

	if (wpisy[j].kategoria=="Banki")
		podzial[0].push_back(wpisy[j]);
	else if (wpisy[j].kategoria=="Paliwa")
		podzial[1].push_back(wpisy[j]);
	else if (wpisy[j].kategoria=="Budow")
		podzial[2].push_back(wpisy[j]);
}

		
	for(int k=0;k<3;k++){
	
	for(int i=0;i<podzial[k].size();i++) {
		cena[k]+=podzial[k][i].cenaAkcji;
		zmiana[k]+=podzial[k][i].zmiana;
	}
	wynik=zmiana[k]/cena[k];
	procentowa_zmiana.push_back(wynik);
}
	
	
	return procentowa_zmiana;

}
