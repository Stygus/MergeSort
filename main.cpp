#include <iostream>
#include "Sortowanie.h"

using namespace std;

int main() {
    int liczby = 0;
    cout << "Podaj ilosc liczb do posortowania: ";
    cin >> liczby;
    int* tablica = new int[liczby];
    cout << "Podaj liczby, ktore chcesz posortowac : ";
    for (int i = 0; i < liczby; i++) {
        cin >> tablica[i];
    }
    Sortowanie tabela(liczby, tablica);
    tabela.algorytm_sortowania(tablica, 0, liczby - 1);
    cout << "Posortowane liczby od uzytkownika: ";
    tabela.print(tablica, liczby);

    int tablica2[100];
    for (int i = 0; i < 100; i++) {
        tablica2[i] = rand() % 100 - 50;
    }
    Sortowanie tabela2(100, tablica2);
    tabela2.algorytm_sortowania(tablica2, 0, 99);
    cout << "Posortowane liczby losowe: ";
    tabela2.print(tablica2, 100);

    return 0;
}


