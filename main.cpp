#include <iostream>
#include <gtest/gtest.h>
#include "Sortowanie.h"
using namespace std;

/// Funkcja glowna programu.
/// Pobiera liczby od uzytkownika, sortuje je i wyswietla.
/// Dodatkowo generuje losowe liczby, sortuje je i wyswietla.
int main() {
    int liczby = 0;

    /// Pobranie od uzytkownika liczby elementow do posortowania.
    cout << "Podaj ilosc liczb do posortowania: ";
    cin >> liczby;

    /// Dynamiczna alokacja tablicy na liczby wprowadzone przez uzytkownika.
    int* tablica = new int[liczby];

    /// Pobranie liczb od uzytkownika.
    cout << "Podaj liczby, ktore chcesz posortowac : ";
    for (int i = 0; i < liczby; i++) {
        cin >> tablica[i];
    }

    /// Utworzenie obiektu klasy Sortowanie do sortowania wprowadzonej tablicy.
    Sortowanie tabela(liczby, tablica);

    /// Wywolanie algorytmu sortowania dla tablicy wprowadzonej przez uzytkownika.
    tabela.algorytm_sortowania(tablica, 0, liczby - 1);

    /// Wyswietlenie posortowanej tablicy.
    cout << "Posortowane liczby od uzytkownika: ";
    tabela.print(tablica, liczby);

    /// Statyczna tablica na losowe liczby (100 elementow).
    int tablica2[100];

    /// Wypelnienie tablicy losowymi liczbami z przedzialu [-50, 49].
    for (int i = 0; i < 100; i++) {
        tablica2[i] = rand() % 100 - 50;
    }

    /// Utworzenie obiektu klasy Sortowanie do sortowania losowej tablicy.
    Sortowanie tabela2(100, tablica2);

    /// Wywolanie algorytmu sortowania dla losowej tablicy.
    tabela2.algorytm_sortowania(tablica2, 0, 99);

    /// Wyswietlenie posortowanej tablicy losowych liczb.
    cout << "Posortowane liczby losowe: ";
    tabela2.print(tablica2, 100);

    return 0;
}
