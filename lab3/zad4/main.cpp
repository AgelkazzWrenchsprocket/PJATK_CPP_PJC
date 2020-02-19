/*
 * Wykorzystując technikę tworzenia struktur, zdefiniuj typ złożony Osoba z polami char* imie, int wiek i bool plec.
 * Wykorzystując utworzony typ spreparuj zmienna osoba wprowadzając swoje imię i płeć oraz losowy wiek.
 * W funkcji main wydaj polecenia wyświetlające na ekran:
 * - rozmiar osoby,
 * - osobę,
 * - wartości wszystkich pól w tej osobie
 */

#include <iostream>

struct Osoba {
    char *imie;
    int wiek;
    bool plec;
}test{"Roman",9,true};

int main() {
    std::cout << "Size: " << sizeof(test) << std::endl
              << "Name: " << test.imie << std::endl
              << "Age: " << test.wiek << std::endl
              << "Sex: " << test.plec;
}
