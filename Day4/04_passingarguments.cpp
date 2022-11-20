//Passing ARGUMENTS
#include <iostream>

// w C/C++ argumenty domyslnie przekazywane sa przez kopie (passed by copy)
// to oznacza, ze kazdy argument do funkcji jest kopiowany na jej potrzeby

void f(int x) {
    x = 20;
}

int main() {
    int x = 10;
    f(x);
    std::cout << x << "\n";
}
