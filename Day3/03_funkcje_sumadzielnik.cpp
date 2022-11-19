#include <iostream>
 int divisor_sum(int a) {
     int x;
     int counter = 0;
     for (x = 1; x < a; x += 1) {
 // return a > b ? a : b;
        if ((a % x) == 0) {
            counter += x;
        }
     }
     return counter;
 }    
int main() {
    int a;
    std::cin >> a;
    std::cout << divisor_sum(a)<< "\n";
}
