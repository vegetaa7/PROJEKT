vector<int> Obrabiarka::obrob(vector<WpisyBranzowe> wpisy) {

	int cena;
	int zmiana;
	float wynik;
	vector<int>procentowa_zmiana;

	for(int i=0;i<wpisy.size();i++) {
		cena+=wpisy[i].cenaAkcji;
		zmiana+=wpisy[i].zmiana;
	}
	wynik=zmiana/cena;
	procentowa_zmiana.push_back(wynik);

}//p
