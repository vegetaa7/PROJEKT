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

	vector<WpisyBranzowe> pierwszy;	
	vector<float> obrobka;
	pierwszy=obj.wczytaj(sciezka);
	
	obrobka=objekt.obrob(pierwszy);

for(int i=0;i<obrobka.size();i++){

	printf("%.2f \n",obrobka[i]);//cout<<obrobka[i]<<endl;
	
}



	//wczytac z pliku

	// odpalic czytacz

	// wynik czytacz dac do obrabiarki

	// wypisac wektor otrzymany z obrabiarki...
	return 0;
}
