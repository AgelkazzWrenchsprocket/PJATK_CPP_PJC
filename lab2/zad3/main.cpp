/*
 * Zaimplementuj funkcje int mystrlen(char*) zwracającą długość dostarczonego ciągu znaków.
 * Program powinien przedstawiać wykorzystanie arytmetyki wskaźników.
 */

#include <iostream>

int mystrlen(char *a) {
    char *pa = a;
    int len = 0;
    while (*pa++) len++;
    std::cout << len;
}

int main() { mystrlen("word"); }