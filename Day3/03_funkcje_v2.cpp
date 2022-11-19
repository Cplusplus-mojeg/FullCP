#include <iostream>
 int max(int x, int y) {
     std::cin >> x;
     std::cin >> y;
     if (x < y) {
         return std::cout << y << "\n";
     }
    else {
        return std::cout << x << "\n";
     }
 }
int main() {
    max(); 
}
