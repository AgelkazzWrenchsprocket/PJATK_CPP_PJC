/*
 * Liczby zespolone składają się z części rzeczywistej i urojonej opisanych przez zmienne typu double.
 * Napisz klasę Cplx implementującą:
 * - prywatne pola obu liczb
 * - dwuparametrowy konstruktor
 * - funkcje dodawania (add(Cplx))
 * - funkcje odejmowania (sub(Cplx*))
 * - funkcje mnożenia (mul(Cplx&))
 * - funkcje zwiększającą część rzeczywistą o jeden (inc())
 * - funkcje show wyświetlającą daną liczbę zespoloną w formacie 4 + 5i
 * Działanie zdefiniowanej klasy przedstaw na przykładach trzech różnych liczb.
 */

#include <iostream>

class Cplx {
private:
    double a, b;
public:
    Cplx(double a, double b) {
        this->a=a;
        this->b=b;
    }
    void add(Cplx cplx);
    void sub(Cplx* cplx);
    void mul(Cplx& cplx);
    void inc();
    void show();
    ~Cplx() {};
};

void Cplx::add(Cplx asd) {
    this->a = a + asd.a;
    this->b = b + asd.b;
}
void Cplx::sub(Cplx* asd) {
    this->a = a - asd->a;
    this->b = b - asd->b;
}
void Cplx::mul(Cplx& asd) {
    this->a = a * asd.a;
    this->b = b * asd.b;
}
void Cplx::inc() { this->b = b + 1; }
void Cplx::show() { std::cout << a <<  " + " << b << "i" << std::endl; }

int main() {
    Cplx l1 = Cplx(2,3);
    l1.show();
    Cplx l2 = Cplx(4,5);
    l2.show();
    l1.add(l2);
    l1.show();
    Cplx* l3 = new Cplx(1,2);
    l1.sub(l3);
    l1.show();
    l1.mul(l2);
    l1.show();
    l1.inc();
    l1.show();
}