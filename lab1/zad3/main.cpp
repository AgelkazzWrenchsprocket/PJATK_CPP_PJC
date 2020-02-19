/*
 *	Napisz program wczytujący z konsoli trzy liczby i wypisujący na ekranie największą z nich.
 *	Można użyć najwyżej dwóch if-ów (bez fraz else lub else if).
 */

#include <iostream>

int main() {
    int a, b, c, maxn;

    std::cout << "Number 1 " << std::endl;
    std::cin >> a;
    maxn = a;
    std::cout << "Number 2 " << std::endl;
    std::cin >> b;
    if (b > maxn) maxn = b;
    std::cout << "Number 3 " << std::endl;
    std::cin >> c;
    if (c > maxn) maxn = c;
    std::cout << "Max is " << maxn << std::endl;
}
