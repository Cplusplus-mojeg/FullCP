#include <iostream>


void wypisz_tablice(int* tab, int n) {
    std::cout << "[";
    for (int i =0; i < n; i += 1) {
        std::cout << tab[i] << ", ";
    }
    std::cout << "]\n";
}

int main() {
    
    //const int ROZMIAR = 10;
    
    int tab[5] = {10, 20, 30, 40, 50};
    
    
    std::cout << tab << "\n";
    std::cout << &tab[1] << "\n";
    std::cout << &tab[2] << "\n";
    std::cout << &tab + 1 << "\n";
    // to jest tym samym co wziecie adresu tablicy i przesuniecie -> *(tab+1)
    std::cout << tab[2] << "\n";
    std::cout << *(tab +2) << "\n";
    
    wypisz_tablice(tab, 5);
}
