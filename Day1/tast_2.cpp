#include <iostream>

int main() {
    // bool - true/false
    bool prawda = true;
    bool falsz = false;
    int a = 0;
    int b =0;
    
    std::cout << "Podaj zmienna a:";
    std::cin >> a;
    std::cout << "Podaj podzielnik:";
    std::cin >> b;
    
    std::cout << a << " liczba a " << b << " dzieli sie przez " << ((a % b) == 0) << "\n";
    
    if ((a % b) == 0) {
        std::cout << "Jest podzielne przez 2\n ";
    }
    if ((a % b) != 0) {
        std::cout << "Nie jest  podzielne przez 2\n ";
    }
}
