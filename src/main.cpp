#include<iostream>
#include<vector>
#include<string>
#include <fstream>
#include "obrabiarka.h"
#include "wczytanie_pliku.h"
#include "branze.h"
#include "tworze_plik.h"
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

<<<<<<< HEAD
//Tylko dla informacji:
for(int i=0;i<obrobka.size();i++){

	printf("%.2f %% \n",obrobka[i]*100);//cout<<obrobka[i]<<endl;
=======
for(int i=0;i<obrobka.size();i++){

	printf("%.2f \n",obrobka[i]);//cout<<obrobka[i]<<endl;
>>>>>>> 463348dd7d35005500ab8f7ceaaca8dacf708688
	
}

Tworze_Plik plikt;

plikt.tworze_do_algorytmu(obrobka);




	return 0;
}
