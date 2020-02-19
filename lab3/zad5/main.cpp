/*
 * Wykorzystując zdefiniowany w poprzednim zadaniu typ, poszerz go o funkcje void show(), która wyświetli stan wszystkich pól.
 */

#include <iostream>

struct Osoba {
    char *imie;
    int wiek;
    bool plec;
}test{"Roman",9,true};

void show(Osoba *os) {
    std::cout << "Size: " << sizeof(&os) << std::endl
              << "Name: " << os->imie << std::endl
              << "Age: " << os->wiek << std::endl
              << "Sex: " << os->plec;
}

int main() { show(&test); }
