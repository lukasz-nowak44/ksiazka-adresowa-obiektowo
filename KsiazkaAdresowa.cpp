#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    cout << "Zalogowany uzytkownik: " << uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() << endl;

    adresatMenedzer.ustawIdZalogowanegoUzytkownika(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();

    cout << "Zalogowany uzytkownik: " << uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() << endl;

}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    cout << "Zalogowany uzytkownik: " << uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() << endl;
}

int KsiazkaAdresowa::dodajAdresata()
{
    adresatMenedzer.dodajAdresata();
    cout << "Zalogowany uzytkownik: " << uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() << endl;
}
