/*
 *	Napisz program wczytujący liczby całkowite aż do pojawienia się zera i wypisujący na ekranie ile razy znak dwóch kolejno wczytanych liczb był różny.
 */

#include <iostream>

int main() {
    int a, old, scount = 0;

    while (a > 0 || a < 0) {
        std::cout << "Gimme a number " << std::endl;
        old = a;
        std::cin >> a;
        if ((old * a) < 0) scount++;
    }
    std::cout << scount << std::endl;
}
