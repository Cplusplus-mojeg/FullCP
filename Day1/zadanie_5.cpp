//przyjmij liczbe i wypisz czy znajduje sie ona w przedziale
//[10; 20) - rowne lub wieksze od 10 a mniejsze od 20


#include <iostream>

int main() {
    
    int x;
    
    std::cout << "Podaj zmienna x:";
    std::cin >> x;
   
    
    
    if (x >= 10) {
        std::cout << "Jest wieksze lub rowne 10 \n ";
    }
    if (x < 20) {
        std::cout << "Jest mniejsza od 20\n ";
    }
        else { 
        std::cout << "Liczba nie jest w przedziale\n ";
        
    }
}
