//Przyjmij liczbe i wypisz czy jest wieksza od zera, mniejsza od zera lub rowna 0:


#include <iostream>

int main() {
    // bool - true/false
    //bool prawda = true;
    //bool falsz = false;
    int a;
    
    std::cout << "Podaj zmienna a:";
    std::cin >> a;
   
    
    //std::cout << a << " liczba a " << b << " dzieli sie przez " << ((a % b) == 0) << "\n";
    
    if (a > 0) {
        std::cout << "Jest wieksza od zero\n ";
    }
    else {
        if (a < 0) {
        std::cout << "Jest mniejsza od zero\n ";
    }
        else { // a == 0
        std::cout << "Jest rowne zero\n ";
        }
    }
}
