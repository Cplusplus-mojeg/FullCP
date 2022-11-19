//przyjmij 3 liczby i wypisz najwieksza:

#include <iostream>

int main() {
    
    int a = 0;
    int b = 0;
    int c = 0;
    std::cout << "Podaj liczbe a, b, c:";
    std::cin >> a >> b >> c;
    
    int max = a;
    if(b > max) {
        max = b;
    }
    if(c > max) {
        max = c;
    }
    std::cout << "\n" << max << "\n";
}
   
