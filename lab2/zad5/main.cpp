/*
 * Utwórz dwie zmienne typu int o wartościach 5 i 8.
 * Następnie utwórz wskaźnik ptr do pierwszej ze zmiennych i odnośnik ref do drugiej zmiennej.
 * Wartość wskazywana przez zmienną ptr przypisz do odnośnika ref i wypisz wartości wszystkich zmiennych.
 */

#include <iostream>

int main() {
    int     a = 5,
            b = 8,
            *ptr = &a,
            &ref = b;
    std::cout << a << std::endl
              << b << std::endl
              << *ptr << std::endl
              << ref << std::endl
              << "---" << std::endl;
    ref = *ptr;
    std::cout << a << std::endl
              << b << std::endl
              << *ptr << std::endl
              << ref;
}