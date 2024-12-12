/// Klasa odpowiedzialna za sortowanie danych.
class Sortowanie {
public:
    /// Konstruktor klasy Sortowanie.
    /// @param size Rozmiar tablicy.
    /// @param data Wskaznik na tablice danych do posortowania.
    Sortowanie(int size, int* data);

    /// Funkcja realizujaca algorytm sortowania (np. Merge Sort).
    /// @param data Wskaznik na tablice danych.
    /// @param left Indeks poczatkowy podtablicy.
    /// @param right Indeks koncowy podtablicy.
    void algorytm_sortowania(int* data, int left, int right);

    /// Funkcja wyswietlajaca elementy tablicy na standardowym wyjsciu.
    /// @param data Wskaznik na tablice danych.
    /// @param size Rozmiar tablicy.
    void print(int* data, int size); // Deklaracja metody print

private:
    /// Funkcja laczaca dwie posortowane podtablice w jedna.
    /// @param data Wskaznik na tablice danych.
    /// @param left Indeks poczatkowy podtablicy.
    /// @param mid Srodkowy indeks, dzielacy tablice na dwie czesci.
    /// @param right Indeks koncowy podtablicy.
    void scalanie(int* data, int left, int mid, int right);
};
