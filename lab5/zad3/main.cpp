/*
 * Wykorzystując operator new, utwórz obiekt klasy Osoba i używając funkcji show wyświetl zawarte w nim pola.
 * Utwórz odnośnik ref do tego obiektu, a następnie utwórz nowy obiekt klasy Osoba dostarczając jako parametr konstruktora odnośnik ref.
 * Ponownie wyświetl stany pól wszystkich utworzonych obiektów.
 * Usuń pierwszy z utworzonych obiektów i wyświetl stan pól pozostałego obiektu.
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
    void show();
};

void Osoba::show() {
    std::cout << imie << std::endl
              << wiek << std::endl;
}

int main() {
    Osoba* obiekt1 = new Osoba("Asia",29);
    std::cout << "stan obiektu 1" << std::endl;
    obiekt1->show();
    Osoba &ref = *obiekt1;
    Osoba* obiekt3 = new Osoba(ref);
    std::cout << "stan obiektu 1" << std::endl;
    obiekt1->show();
    std::cout << "stan obiektu 2" << std::endl;
    ref.show();
    std::cout << "stan obiektu 3" << std::endl;
    obiekt3->show();
    delete obiekt1;
    std::cout << "stan obiektu 2" << std::endl;
    ref.show();
    std::cout << "stan obiektu 3" << std::endl;
    obiekt3->show();
}