//Passing ARGUMENTS
#include <iostream>

// w C/C++ argumenty domyslnie przekazywane sa przez kopie (passed by copy)
// to oznacza, ze kazdy argument do funkcji jest kopiowany na jej potrzeby

void f(int a) {
    a = 20;
}

// do funkcji g jest przekazywana kopia jakiegos adresu inta
//adres pozwala nam na modyfikacje wartosci (zmiennej), na ktora wskazuje
void g(int* b) {
    *b = 30;
}

int main() {
    int x = 10;
    f(x); //wartosc 'x' jest kopiowana do argumentu 'a' w funkcji 'f'
    std::cout << x << "\n";
    
    g(&x);
    std::cout << x << "\n";
}
