#include <iostream>


int main() {
    int tablica[10]; //square brackets with size inside the brackets
    //here we create array with 10 int, index starting with zero - so here from 0 to 9; tablica[0], tablica[1], etc.
    std::cin >> tablica[0] >> tablica[1];

    for (int i = 0; i < 10; i += 1) {
        std::cout << "tablica[" << i << "] = " << tablica[i] << "\n";
    }
}
