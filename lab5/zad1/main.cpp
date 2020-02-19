/*
 * Przygotuj klasę Osoba z polami char* imie i int wiek.
 * Następnie utwórz dwa obiekty zdefiniowanej klasy, używając konstruktorów wykorzystujących mechanizmy: dynamicznego alokowania pamięci oraz lokalnej definicji.
 */

class Osoba {
    char* imie;
    int wiek;
};

int main() {
    Osoba *obiekt1 = new Osoba(),
          *obiekt2 = new Osoba();
}