#include "Sortowanie.h"
#include <iostream>

using namespace std;

Sortowanie::~Sortowanie() {
    delete[] tablica;
}

void Sortowanie::print(int* tablica, int size) {
    for (int i = 0; i < size; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

void Sortowanie::laczenie(int tablica[], int start, int srodek, int koniec) {
    int i = start, j = srodek + 1, k = 0;
    int* tabela_pomocniczna = new int[koniec - start + 1];

    while (i <= srodek && j <= koniec) {
        if (tablica[i] <= tablica[j]) {
            tabela_pomocniczna[k++] = tablica[i++];
        }
        else {
            tabela_pomocniczna[k++] = tablica[j++];
        }
    }

    while (i <= srodek) {
        tabela_pomocniczna[k++] = tablica[i++];
    }

    while (j <= koniec) {
        tabela_pomocniczna[k++] = tablica[j++];
    }

    for (int i = 0; i < k; i++) {
        tablica[start + i] = tabela_pomocniczna[i];
    }

    delete[] tabela_pomocniczna;
}


void Sortowanie::algorytm_sortowania(int tablica[], int start, int koniec) {
    if (start < koniec) {
        int srodek = (start + koniec) / 2;
        algorytm_sortowania(tablica, start, srodek);
        algorytm_sortowania(tablica, srodek + 1, koniec);
        laczenie(tablica, start, srodek, koniec);
    }
}