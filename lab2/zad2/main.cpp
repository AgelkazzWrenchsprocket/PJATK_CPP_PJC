/*
 * Dany jest ciąg znaków “fantasmagoria” przechowywany w zmiennej tab.
 * Utwórz wskaźniki ptr1 i ptr2 pokazujące odpowiednio pierwszy i ostatni znak ciągu tab.
 * Następnie wypisz na ekranie wyniki operacji matematycznych + i -.
 */

#include <iostream>

int main() {
    char    tab[] = "fantasmagoria",
            *ptr1 = &tab[0],
            *ptr2 = &tab[1];
    std::cout << *ptr1 << std::endl << *ptr2 << std::endl;
    std::cout << ptr1 - ptr2;
}
