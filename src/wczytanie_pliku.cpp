#include <wczytanie_pliku.h>
#include <iostream>
#include <fstream>
using namespace std;

vector<string> rozdziel_linie(std::string linia)
{
	vector<string> wyrazy;
	isstringstream iss(linia);
	string wyraz;
	while (getline(iss, wyrazy, ' '))
	{
		wyrazy.push_back(wyraz);
	}
	return wyrazy;
}

vector<WpisyBranzowe> CzytaczPliku::wczytaj(std::string sciezka) {
	// napisać
	fstream plik;
	string linia;
	int nr_linii;
	vector<WpisyBranzowe> wektor;
	while(getline(iss,linia)){
		nr_linii++;
		vector<string> wyrazy = rozdziel_linie(linia);

		/*
		 * 1. WpisyBranzowe wb = WpisyBranzowe(wyrazy[0], wyrazy[1]...)
		 * wektor.push_back(wb)
		 * 2. WpisyBranzowe wb(wyrazy[0], wyrazy[1]...)
		 * wektor.push_back(wb)
		 * 3. wektor.push_back(WpisyBranzowe(wyrazy[0], wyrazy[1]...)) <- najkrótsze, ale ktoś
		 * może powiedzieć że to już jest nieczytelne
		 */

		WpisyBranzowe wb(wyrazy[0], wyrazy[1], ?wyrazy[2], ?wyrazy[3]); // poprawić w domu
		wektor.push_back(wb);
	}
	return wektor;
}
