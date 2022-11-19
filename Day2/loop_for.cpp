//przyjmij liczbe N i wypisz wiersz zlozozny z N znakow '#'

//czyli dla N= 6 wypisujemy ######


#include <iostream>

// for (initialization; condition; increment) {
    // content of the loop
    //}
    
// initialization is executed once before starting the loop, and then next:
// 1. truth of the condition is checked
// 2. if the condition is false then end of the loop
//3. loop is executed
//4. incremental instruction is executed
//5. return to point 1

// for loop has to contain 2 semicolons (;) inside the braces,even if the first initialization is empty, the semicolon has to be there)


int main() {
    
   int n = 0;
    std::cout << "Enter a number N: \n";
    std::cin >> n;
    for (int i = 0; i < n; i += 1) {
        std::cout << i << "\n";
    }
    std::cout << "\n";
}
