/*
 * Utwórz funkcje fun1, fun2 i fun3, które jako parametr będą przyjmować odpowiednio int, wskaźnik i odnośnik.
 * Celem wszystkich funkcji będzie wyświetlenie wartości dostarczonych jako parametry, inkrementacja tych wartości i ponowne wyświetlenie.
 * W funkcji main:
 * - zadeklaruj i zainicjuj zmienna wrt typu int
 * - wyświetl jej wartość na ekran
 * - wywołaj funkcje fun1, fun2 i fun3 dostarczając jako parametr wrt
 * - ponownie wyświetl wartość zmiennej wrt
 */

#include <iostream>

void fun1(int a) {
    std::cout   << "fun1" << std::endl
                << a << std::endl;
    a++;
    std::cout   << a << std::endl;
}
void fun2(int *a) {
    std::cout   << "fun2" << std::endl
                << *a << std::endl;
    (*a)++;
    std::cout   << *a << std::endl;
}
void fun3(int &a) {
    std::cout   << "fun3" <<std::endl
                << a << std::endl;
    a++;
    std::cout   << a << std::endl;
}

int main() {
    int wrt = 5,
        *pwrt = &wrt,
        &awrt = wrt;
    std::cout << "Pierwotna wartosc zmiennej wrt to: " << wrt << std::endl;
    fun1(wrt);
    fun2(pwrt);
    fun3(awrt);
}