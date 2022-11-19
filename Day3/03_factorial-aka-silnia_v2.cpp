
//napisz funkcje, ktora policzy silnie z n
//n! = 1*2*3*4*...*n
//0! = 1
// n! = n*(n-1)!
#include <iostream>

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n-1);
}
int main() {
    int x;
    std::cin >> x;
    std::cout << x << "! = " << factorial(x) << "\n";
}
