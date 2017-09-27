#include <string>
#include <vector>
class CzytaczPliku;
class Obrabiarka;

class WpisyBranzowe {

public:
	WpisyBranzowe(std::string, std::string, float, float);

	std::string kategoria;
	std::string nazwa;
	float cenaAkcji;
	float zmiana;

	friend vector<string> rozdziel_linie(string linia);
    friend vector<WpisyBranzowe> wczytaj(string sciezka);

};
