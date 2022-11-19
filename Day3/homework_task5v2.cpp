#include <iostream>
int main() {
    for (int i = 1; i <= 100; i +=1) {
        if (i % 3 == 0) {
            std::cout  << "Hopsasa";
        }
        if (i % 5 == 0){
            std::cout  << "Tralala";
        }
        if (i % 3 != 0 && i % 5 != 0) {
        std::cout << i;
        }
        std::cout << "\n";
        }
}
    
