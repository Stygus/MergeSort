// Sortowanie.h
#pragma once

class Sortowanie {
public:
    Sortowanie(int size, int* data);
    void algorytm_sortowania(int* data, int left, int right);
    void print(int* data, int size); // Deklaracja metody print

private:
    void merge(int* data, int left, int mid, int right);
};
