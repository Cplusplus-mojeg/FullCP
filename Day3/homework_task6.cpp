#include <iostream>
int main() {
    int n = 0;
    std::cin >> n;
    while (n != 0) {
        std::cout << n % 10 << "\n";
        n /= 10; // n = n/10;
    }
}
    
    
