#include <vector>
#include <string>
using namespace std;

class WpisyBranzowe;
class Obrabiarka;
class CzytaczPliku {


public:
	vector<string> rozdziel_linie(string linia);
    	vector<WpisyBranzowe> wczytaj(string sciezka);

    	friend vector<int> obrob(vector<WpisyBranzowe> wpisy);
};
