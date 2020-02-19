/*
 * Utwórz 5 elementowa statyczna tablice zmiennych typu int i wypełnij ją dowolnymi wartościami.
 * Następnie utwórz wskaźnik pokazujący ostatni element tej tablicy.
 * Dysponując wskaźnikami pokazującymi elementy pierwszy i ostatni, napisz pętlę wykorzystującą te wskaźniki sumującą wszystkie elementy tej tablicy.
 */

#include <iostream>

int main() {
    int tab[5] = {1, 3, 5, 7, 11},
        len = sizeof(tab) / sizeof(int),
			*pfirst = &tab[0],
			*plast = &tab[len-1],
			sum = 0;
    while (pfirst <= plast) {
        sum += *pfirst;
        pfirst++;
    }
    std::cout << sum;
}
