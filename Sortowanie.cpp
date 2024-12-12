// Sortowanie.cpp
#include "Sortowanie.h"
#include <algorithm>
#include <iostream> // Dodajemy naglowek iostream

Sortowanie::Sortowanie(int size, int* data) {

}

void Sortowanie::algorytm_sortowania(int* data, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Sortowanie pierwszej i drugiej polowy
        algorytm_sortowania(data, left, mid);
        algorytm_sortowania(data, mid + 1, right);

        // Scalanie posortowanych polowek
        scalanie(data, left, mid, right);
    }
}

void Sortowanie::scalanie(int* data, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Tworzenie tablic tymczasowych
    int* L = new int[n1];
    int* R = new int[n2];

    // Kopiowanie dane do tymczasowych tablic L[] i R[]
    for (int i = 0; i < n1; i++)
        L[i] = data[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = data[mid + 1 + j];

    // Scalanie tymczasowych tablic z powrotem do data[left..right]
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

    // Kopiowanie pozostalych elementow L[], jesli sa
    while (i < n1) {
        data[k] = L[i];
        i++;
        k++;
    }

    // Kopiowanie pozostaych elementow R[], jesli sa
    while (j < n2) {
        data[k] = R[j];
        j++;
        k++;
    }

	// Zwalnianie pamieci z tablic tymczasowych
    delete[] L;
    delete[] R;
}

void Sortowanie::print(int* data, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}
