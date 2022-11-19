#include <iostream>
 int absolut(int x) {
     if (x < 0) 
        return -x;
    else
        return x;
 }
int main() {
    std::cout << absolut(5) << "\n";
    std::cout << absolut(-3) << "\n";
}
