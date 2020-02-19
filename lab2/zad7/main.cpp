/*
 * Utwórz i wypełnij dowolnymi wartościami trzy tablice znaków.
 * Następnie utwórz czteroelementowa tablice wskaźników i wypełnij jej pola wskaźnikami do tworzonych tablic.
 * Użyj pętli aby wyświetlić wszystkie ciągi znaków.
 */

#include <iostream>

int main() {
    int tab1[3] = {3,5,7}, *ptab1 = tab1,
        tab2[3] = {9,25,49}, *ptab2 = tab2,
        tab3[3] = {27,125,343}, *ptab3 = tab3,
        *ptab[4] = {ptab1,ptab2,ptab3},
        len = sizeof(ptab) / sizeof(int*);
    for (int i = 0; i < len; i++)   std::cout << ptab[i] << std::endl;
                                    std::cout << std::endl;
    for (int i = 0; i < len; i++)   std::cout << *ptab[i] << std::endl;
                                    std::cout << std::endl;
    for (int i = 0; i < len; i++)   std::cout << &ptab[i] << std::endl;
}