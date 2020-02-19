/*
 * Należy napisać program, który wczyta wartość z klawiatury i przechowa ja w zmiennej wrt.
 * Następnie używając wszystkich znanych rodzajów pętli wyświetli na ekranie napis “Hello” powtarzając go tyle razy ile określa wartość wrt.
 * Program będzie nieskończenie powtarzał powyższe operacje.
 * Należy zadbać aby zapis wszystkich pętli był optymalnie skondensowany.
 */

#include <iostream>

int main() {
    int wrt = 0;
    std::cout << "Gimme a number" << std::endl;
    std::cin >> wrt;
    int tmp = wrt;

    std::cout << "WHILE:" << std::endl;
    while (tmp > 0) {
        std::cout << "Hello" << std::endl;
        tmp--;
    } tmp = wrt;

    std::cout << "DO-WHILE:" << std::endl;
    do {
        std::cout << "Hello" << std::endl;
        tmp--;
    } while (tmp > 0);
    tmp = wrt;

    std::cout << "FOR:" << std::endl;
    for (int i = wrt; i > 0; i--) std::cout << "Hello" << std::endl;
}
