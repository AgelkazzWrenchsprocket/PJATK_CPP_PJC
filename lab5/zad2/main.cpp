/*
 * Rozwiń definicje klasy Osoba o konstruktory:
 * - pusty – wprowadzający wartości pól do dynamicznie alokowanych zasobów,
 * - przyjmujący dwa parametry (char*, int) – inicjujący pola przez listę inicjacyjną.
 * Oba z konstruktorów powinny wyświetlić na ekranie informacje o utworzeniu obiektu Osoba.
 * Dodefiniuj destruktor, wyświetlający informacje o zniszczeniu obiektu i zwalniający dynamicznie zaalokowane zasoby.
 * Przedstaw tworzenie obiektów klasy z użyciem obu typów konstruktorów.
 */

#include <iostream>

class Osoba {
    char* imie;
    int wiek;
public:
    Osoba() { std::cout << "utworzono obiekt" << std::endl; }
    Osoba(char* a, int b) {
        this->imie=a;
        this->wiek=b;
        std::cout << "utworzono obiekt" << std::endl;
    }
    ~Osoba() { std::cout << "skasowano obiekt" << std::endl; }
};

int main() {
    Osoba *obiekt1 = new Osoba("Asia",29),
          *obiekt2 = new Osoba();
    delete obiekt1,
           obiekt2;
}