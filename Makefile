kompiluj: src/main.cpp src/branze.cpp src/obrabiarka.cpp src/wczytanie_pliku.cpp include/branze.h include/obrabiarka.h include/wczytanie_pliku.h
	g++ -o Program1.exe src/main.cpp src/branze.cpp src/obrabiarka.cpp src/wczytanie_pliku.cpp -Iinclude
