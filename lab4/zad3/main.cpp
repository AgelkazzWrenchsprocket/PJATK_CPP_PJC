/*
 * Utwórz cztery zmienne typu wskaźnikowego o nazwach p1, p2, p3, p4, będące częścią struktury.
 * Połącz je w cykl, tak aby pierwszy z wskaźników pokazywał strukturę z drugim, drugi strukturę z trzecim, (…), a ostatni strukturę z pierwszym.
 * Następnie napisz i wywołaj funkcje rekurencyjną wyświetlającą wszystkie wskaźniki cyklu.
 * Załóż, że funkcja przyjmie jako parametry dwie zmienne typu wskaźnikowego, z których pierwsza wskazuje na początek cyklu, a druga element cyklu.
 */

#include <iostream>
#include <malloc.h>

struct Str { struct Str* next; };
void show(struct Str *p1, struct Str *p2) {
    std::cout << p1 << " -> " << p1->next << std::endl;
    p1 = p1->next;
    if(p1 != p2) show(p1,p2);
}
int main () {
    struct Str  *p1 = (struct Str*) malloc(sizeof(struct Str)),
                *p2 = (struct Str*) malloc(sizeof(struct Str)),
                *p3 = (struct Str*) malloc(sizeof(struct Str)),
                *p4 = (struct Str*) malloc(sizeof(struct Str));
    p1->next = p2;
    p2->next = p3;
    p3->next = p4;
    p4->next = p1;
    show(p1,p1);
}
