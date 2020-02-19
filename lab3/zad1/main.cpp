/*
 * Wykorzystując operator new, zadeklaruj tablice 10 elementów typu char.
 * Następnie wprowadź do tej tablicy ciąg znaków wprowadzony z klawiatury.
 */

#include <iostream>

int main() {
    char *tab = new char[10];
    for (int i = 0; i < 10; i++) {
        std::cout << "Podaj znak nr " << i+1 << std::endl;
        std::cin >> tab[i];
    }
}