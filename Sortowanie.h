#pragma once
#include <iostream>

class Sortowanie {
public:
    Sortowanie(int size, int* tablica) : rozmiar(rozmiar), tablica(tablica) {};
    ~Sortowanie();
    void laczenie(int tablica[], int poczatek, int srodek, int koniec);

    void algorytm_sortowania(int tablica[], int poczatek, int koniec);

    void print(int* tablica, int size);

private:



    Sortowanie();
    int rozmiar;
    int* tablica = new int[rozmiar];
    int* posortowana_tablica = new int[rozmiar];



};