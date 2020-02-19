/*
 * Dana jest globalna tablica zmiennych typu char o rozmiarze 100 elementów i nazwie inputData.
 * Używając operatora cin wprowadzamy do tej tablicy ciąg znaków.
 * Następnie określamy ilość wprowadzonych znaków i tworzymy dedykowana, dynamicznie tworzona tablice o rozmiarze dopasowanym do długości wprowadzonego słowa.
 */

#include <iostream>

char *inputData;

int main() {
    ::inputData = new char[100];
    std::cin >> ::inputData;
    int len = 0;
    for (int i = 0; i < 100; i++) if (::inputData[i] != 0) len += 1;
    char *newTable = new char[len];
}