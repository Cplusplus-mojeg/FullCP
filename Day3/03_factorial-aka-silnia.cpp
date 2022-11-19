
//napisz funkcje, ktora policzy silnie z n
//n! = 1*2*3*4*...*n

#include <iostream>

int factorial(int n) {
    int multiplier = 1;
    for (int i = 1; i <= n; i +=1) {
        multiplier *= i;
    }
            return multiplier;
}

int main() {
    int x;
    std::cin >> x;
    std::cout << x << "! = " << factorial(x) << "\n";
}
