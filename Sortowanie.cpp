// Sortowanie.cpp
#include "Sortowanie.h"
#include <algorithm>
#include <iostream> // Dodajemy nag³ówek iostream

Sortowanie::Sortowanie(int size, int* data) {
    // Konstruktor mo¿e byæ pusty, jeœli nie potrzebujemy inicjalizacji
}

void Sortowanie::algorytm_sortowania(int* data, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Sortuj pierwsz¹ i drug¹ po³owê
        algorytm_sortowania(data, left, mid);
        algorytm_sortowania(data, mid + 1, right);

        // Scal posortowane po³ówki
        merge(data, left, mid, right);
    }
}

void Sortowanie::merge(int* data, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Utwórz tymczasowe tablice
    int* L = new int[n1];
    int* R = new int[n2];

    // Skopiuj dane do tymczasowych tablic L[] i R[]
    for (int i = 0; i < n1; i++)
        L[i] = data[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = data[mid + 1 + j];

    // Scal tymczasowe tablice z powrotem do data[left..right]
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            data[k] = L[i];
            i++;
        }
        else {
            data[k] = R[j];
            j++;
        }
        k++;
    }

    // Skopiuj pozosta³e elementy L[], jeœli s¹
    while (i < n1) {
        data[k] = L[i];
        i++;
        k++;
    }

    // Skopiuj pozosta³e elementy R[], jeœli s¹
    while (j < n2) {
        data[k] = R[j];
        j++;
        k++;
    }

    // Zwolnij pamiêæ
    delete[] L;
    delete[] R;
}

void Sortowanie::print(int* data, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}
