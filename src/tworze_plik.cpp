#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "obrabiarka.h"
#include "wczytanie_pliku.h"
#include "branze.h"
#include "tworze_plik.h"




void Tworze_Plik::tworze_do_algorytmu(vector<float> branze){

fstream plik;
string nazwa;
cout<<"Do jakiego pliku zapisac?: "<<endl;
cin>>nazwa;
plik.open(nazwa, ios::out );

for(int i=0;i<branze.size();i++){
plik<<branze[i]<<" ";

}
plik.close();
}

