//przyjmij liczbe N, a nastepnie przyjmij N roznych liczb i wypisz najwieksza z nich;
//np. 5
// 2 3 4 1 1
//wynik: 4

#include <iostream>

int main() {
 //test   
   int n = 0;
    std::cout << "Enter a number N: \n";
    std::cin >> n;
    int max = 0;
    std::cin >> max; // first entered number ends up being inside variable max
    for (int i = 1; i < n; i += 1) {
        int x = 0;
        std::cin >> x;
        if(x > max) {
        max = x;
        }
    }
    std::cout << max << "\n";
}
