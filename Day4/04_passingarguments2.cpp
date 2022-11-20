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

void dajWspolrzedne(double* x, double* y) {
    *x = 44.575;
    *y = 13.664;
}

int main() {
    int x = 10;
    f(x); //wartosc 'x' jest kopiowana do argumentu 'a' w funkcji 'f'
    std::cout << x << "\n";
    
    g(&x);// do funkcji g przekazujemy adres 'x'
    std::cout << x << "\n";
    
    double a = 0.0;
    double b =0.0;
    
    dajWspolrzedne(&a, &b);
    std::cout << a << " " << b << "\n";
}
