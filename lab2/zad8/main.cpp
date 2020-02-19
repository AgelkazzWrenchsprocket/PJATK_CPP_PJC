/*
 * Utwórz i wypełnij jeszcze jedną tablicę znaków, a następnie wykorzystując poprzednie zadanie wstaw wskaźnik do tablicy wskaźników pomiędzy 0 i 1 element.
 */

#include <iostream>

int main() {
    int tab1[3] = {3,5,7}, *ptab1 = tab1,
        tab2[3] = {9,25,49}, *ptab2 = tab2,
        tab3[3] = {27,125,343}, *ptab3 = tab3,
        tab4[3] = {81,625,2401}, *ptab4 = tab4,
        *ptab[4] = {ptab1,ptab2,ptab3},
        len = sizeof(ptab) / sizeof(int*);
    for (int i = len; i > 1; i--) ptab[i] = ptab[i-1];
    ptab[1] = ptab4;

    for (int i = 0; i < len; i++)   std::cout << ptab[i] << std::endl;
                                    std::cout << std::endl;
    for (int i = 0; i < len; i++)   std::cout << *ptab[i] << std::endl;
                                    std::cout << std::endl;
    for (int i = 0; i < len; i++)   std::cout << &ptab[i] << std::endl;
}