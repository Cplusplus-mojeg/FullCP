//przyjmij liczbe i wypisz sume jej cyfr:

#include <iostream>

int main() {
    
    int x;
    std::cout << "Podaj liczbe x:";
    std::cin >> x;
    int suma = 0;
    while ( x != 0) {
     suma += x % 10; //dodajemy ostatnia cyfre liczby do sumy
     x /= 10; //usuwamy ostantia cyfre z liczby
    }
     std::cout << "suma cyfr to:"  << suma << "\n";
}
     
     
     
