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
    delete adresatMenedzer;
    adresatMenedzer = NULL;

    cout << "Zalogowany uzytkownik: " << uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() << endl;
}

int KsiazkaAdresowa::dodajAdresata()
{
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer -> dodajAdresata();
        cout << "Zalogowany uzytkownik: " << uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() << endl;
    }
    else
    {
        cout << "Aby dodac uzytkownika, nalezy najpierw sie zalogowac" << endl;
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer -> wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::usunAdresata()
{
    adresatMenedzer -> usunAdresata();
}


bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    uzytkownikMenedzer.czyUzytkownikJestZalogowany();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";

    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";

    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

void KsiazkaAdresowa::edytujAdresata()
{
    adresatMenedzer -> edytujAdresata();
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    adresatMenedzer -> wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    adresatMenedzer -> wyszukajAdresatowPoNazwisku();
}

