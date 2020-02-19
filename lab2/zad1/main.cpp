/*
 * Przedstaw deklaracje zmiennych typów char, double i int, po czym utwórz wskaźniki do tych zmiennych.
 * Następnie wyświetl na ekranie wszystkie zadeklarowane zmienne.
 */

#include <iostream>

int main() {
    char a = 'a';
    double b = 12.5;
    int c = 50;

    char *pa = &a;
    double *pb = &b;
    int *pc = &c;

    std::cout << a << std::endl
              << b << std::endl
              << c << std::endl
              << *pa << std::endl
              << *pb << std::endl
              << *pc << std::endl;
}
