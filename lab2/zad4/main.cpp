/*
 * Zaimplementuj funkcje bool isPalindrom(char*) zwracającą wartość 1 jeżeli dostarczony ciąg znaków jest palindromem lub 0 w przeciwnym przypadku.
 */

#include <iostream>

bool isPalindrome(char *a){
    char *pa = a;
    int len = 0;
    while (*pa++) len++;
    for (int i=0; i <= len/2; i++) if (a[i] != a[len-i-1]) return false;
    return true;
}

int main() {
    bool isIt = isPalindrome("kajak");
    std::cout << isIt;
}
