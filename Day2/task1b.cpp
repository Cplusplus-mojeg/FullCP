//przyjmij 3 liczby i wypisz najwieksza:

#include <iostream>

int main() {
    
    int x;
    std::cout << "Podaj liczbe x:";
    std::cin >> x;
    
    int y;
    std::cout << "Podaj liczbe y: ";
    std::cin >> y;
    
    int z;
    std::cout << "Podaj liczbe z: ";
    std::cin >> z;
    
    if (x > y && x >= z) {
        if (x == z) {
        std::cout << "X jest rowne Z\n ";
    }
        else { 
        std::cout << "Liczba " << x << "jest najwieksza\n ";
        }}
    else if (y >= x && y >= z) {
        std::cout << "Y jest max\n ";
    }
    else if { 
        std::cout << "Liczba " << z << "jest najwieksza\n ";
        } 
}
