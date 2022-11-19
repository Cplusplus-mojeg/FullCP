#include <iostream>
int main() {
    int n = 0;
    std::cin >> n;
    while (n != 0) {
        if (n < 10) // jendocyfrowa = ostatnia cyfra do wypisania
            std::cout << n % 10;
        else
            std::cout << n % 10 << ",";
        n /= 10; // n = n/10;
    }
    std::cout << "\n";
}
    
    
