#include <iostream>

int main() {
    // bool - true/false
    bool prawda = true;
    bool falsz = false;
    
    //logic operators
    int a = 3;
    int b = 5;
    std::cout << a << " < " << b << " = " << (a < b) << "\n";
    std::cout << a << " <= " << b << " = " << (a <= b) << "\n";
    std::cout << a << " > " << b << " = " << (a > b) << "\n";
    std::cout << a << " >= " << b << " = " << (a >= b) << "\n";
    //std::cout << (5 < 7) << "\n";
  
    
    // if (warunek) { // to sie wykona jesli warunek jest 'true'}
    if (true) {
        std::cout << "Zawsze\n";
    }
    
    if (false) {
        std::cout << "Nigdy\n ";
    }  
        if (a < b) {
            std::cout << "a jest mniejsze od b \n ";
        }
        else {
            std::cout << "a NIE jest mniejsze od b\n";
        }
}
