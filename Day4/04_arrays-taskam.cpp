#include <iostream>
int main() {
    
    //const int ROZMIAR = 10;
    
    int tab[5] = {10, 20, 30, 40, 50};
    
    
    std::cout << tab << "\n";
    std::cout << &tab[0] << "\n";
    std::cout << &tab[1] << "\n";
    std::cout << &tab + 1 << "\n";
    
}
