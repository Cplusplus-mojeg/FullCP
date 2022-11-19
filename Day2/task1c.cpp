/przyjmij 3 liczby i wypisz najwieksza:

#include <iostream>

int main() {
    
    int a;
    int b;
    int c;
    std::cout << "Podaj liczbe a, b, c:";
    std::cin >> a >> b >> c;
    
    
    if (a > b && a > c) {
        if (a > c) {
            std::cout << a;
    }
        else {
            std::cout << c;
        }
    }
    else {
        if(b > c) {
            std::cout << b;
        else {
            std::cout << c;
        }
    }
}
