#include "AdresatMenedzer.h"

int AdresatMenedzer::pobierzIdZalogowanegoUzytkownika()
{
    return idZalogowanegoUzytkownika;
}

void AdresatMenedzer::ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika)
{
    if(noweIdZalogowanegoUzytkownika >= 0)
        idZalogowanegoUzytkownika = noweIdZalogowanegoUzytkownika;
}

void AdresatMenedzer::ustawIdOstatniegoAdresata(int noweIdOstatniegoAdresata)
{
    if(noweIdOstatniegoAdresata >= 0)
        idOstatniegoAdresata = noweIdOstatniegoAdresata;
}

int AdresatMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);
}

int AdresatMenedzer::dodajAdresata()
{
    Adresat adresat;

    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    Adresat adresat;

    adresat.ustawID(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    string imie;
    cin >> imie;
    adresat.ustawImie(imie);

    cout << "Podaj nazwisko: ";
    string nazwisko;
    cin >> nazwisko;
    adresat.ustawNazwisko(nazwisko);

    cout << "Podaj numer telefonu: ";
    string nrTelefonu;
    cin >> nrTelefonu;
    adresat.ustawNumerTelefonu(nrTelefonu);

    cout << "Podaj email: ";
    string email;
    cin >> email;
    adresat.ustawEmail(email);

    cout << "Podaj adres: ";
    string adres;
    cin >> adres;
    adresat.ustawAdres(adres);

    return adresat;
}

