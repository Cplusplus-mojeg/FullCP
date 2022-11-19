#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i += 1) {
        if (i % 2 == 0) { // dla parzysztych wierszy
            for (int j = 0; j < n; j += 1) {
                std::cout << j % 2;
            }
        }
        else { // dla nieparzysztych wierszy
            for (int j = 0; j < n; j+=1) {
                std::cout << 1 - j % 2;
            }
        }
        std::cout << "\n";
    }
}
