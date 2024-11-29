#include <iostream>
#include "Sortowanie.h"

using namespace std;

int main() {
    int liczby = 0;
    cout << "Podaj ilosc liczb do posortowania: ";
    cin >> liczby;
    int* tablica = new int[liczby];
    cout << "Podaj liczby, ktore chcesz posortowac posortowania: ";
    for (int i = 0; i < liczby; i++) {
        cin >> tablica[i];
    }
    Sortowanie tabela(liczby, tablica);
    tabela.algorytm_sortowania(tablica, 0, liczby - 1);
    cout << "Posortowane liczby od uzytkownika: ";
    tabela.print(tablica, liczby);

 