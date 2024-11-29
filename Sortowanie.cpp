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

