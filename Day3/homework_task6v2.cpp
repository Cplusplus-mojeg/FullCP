#include <iostream>
int main() {
    int n = 0;
    std::cin >> n;
    if (n < 0)
        n = -n;
    while (n > 10) {
        std::cout << n %10 << ",";
        n /= 10; // n = n/10;
    }
    std::cout << n << "\n";
}
    
    
