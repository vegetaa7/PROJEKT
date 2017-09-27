#include<iostream>
#include<vector>
#include<string>
#include <fstream>
#include "obrabiarka.h"
#include "wczytanie_pliku.h"
#include "branze.h"

//Przerobić odpowiednio
WpisyBranzowe::WpisyBranzowe(std::string Kategoria, std::string Nazwa, float CenaAkcji, float Zmiana)
{
	this->kategoria = Kategoria;
	this->nazwa=Nazwa;
	this->cenaAkcji=CenaAkcji;
	this->zmiana=Zmiana;
}
