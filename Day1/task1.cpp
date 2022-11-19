#include <iostream>

int main() {
    
    int x = 0;
    std::cout << "Podaj integer x:";
    std::cin >> x;
    std::cout << "reszta z dzielenia przez 3 = " << x % 3 << "\n";
    
    
    std::cout << "kwadrat to x * x = " << x * x << "\n";
    
    //std::cout << "x * x = " << x * x << "\n";
    
    std::cout << "cyfra jednosci to = " << x % 10 << "\n";
    
    std::cout << "cyfra dziesatek tej liczby = " << x / 10 % 10 << "\n";
}
