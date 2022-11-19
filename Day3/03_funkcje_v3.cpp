#include <iostream>
 int max(int a, int b) {
 // return a > b ? a : b;
     if (a > b) 
         return  a;
        return b;
 }    
int main() {
    std::cout << max(5, 3) << "\n";
    std::cout << max(-3, -7) << "\n";
    
}
