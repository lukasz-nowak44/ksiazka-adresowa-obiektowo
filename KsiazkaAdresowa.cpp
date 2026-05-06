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

    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        //adresatMenedzer.ustawIdZalogowanegoUzytkownika(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
        //adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();

        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());

        cout << "Zalogowany uzytkownik: " << uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() << endl;
    }
    else
    {
        cout << "Zaden uzytkownik nie jest zalogowany" << endl;
    }

}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    //adresatMenedzer.oproznijVector();
    cout << "Zalogowany uzytkownik: " << uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() << endl;
}

int KsiazkaAdresowa::dodajAdresata()
{
    adresatMenedzer -> dodajAdresata();
    cout << "Zalogowany uzytkownik: " << uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() << endl;
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer -> wyswietlWszystkichAdresatow();
}


