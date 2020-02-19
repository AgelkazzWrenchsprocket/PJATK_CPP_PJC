/*
 *	W funkcji main zdefiniuj wszystkie typy proste występujące w języku C++.
 *	Następnie napisz program łączący wszystkie zmienne w jeden ciąg wyjściowy i wyświetl go na ekranie.
 */

#include <iostream>

int main() {
    bool a = true;
    char b = 'b';
    short c = 12;
    int d = 123124124;
    long e = 48956138946;
    float f = 15.3;
    double g = 12123.45;

    std::cout   << a << std::endl
                << b << std::endl
                << c << std::endl
                << d << std::endl
                << e << std::endl
                << f << std::endl
                << g << std::endl;
}
