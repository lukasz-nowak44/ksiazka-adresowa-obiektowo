#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer
{
    vector <Adresat> adresaci;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    int idZalogowanegoUzytkownika;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void wyswietlDaneAdresata(Adresat adresat);

    PlikZAdresatami plikZAdresatami;

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    : plikZAdresatami(nazwaPlikuZAdresatami), idZalogowanegoUzytkownika(idZalogowanegoUzytkownika)
    {
        idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);

    };
    int dodajAdresata();
    int pobierzIdZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void ustawIdOstatniegoAdresata(int noweIdOstatniegoAdresata);
    void wyswietlWszystkichAdresatow();
    void oproznijVector();

};

#endif
