#include <iostream>

//WAZNE: w C++ rozmiar tablicy (array) MUSI byc staly i znany na etapie kompilacji

int main() {
    
    const int ROZMIAR =4;
    
    int tablica[ROZMIAR]; //square brackets with size inside the brackets
    //here we create array with 10 int, index starting with zero - so here from 0 to 9; tablica[0], tablica[1], etc.
    std::cin >> tablica[0] >> tablica[1];
    
    for (int i = 2; i < ROZMIAR; i += 1) {
        std::cin >> tablica[i];
    }

    for (int i = 0; i < ROZMIAR; i += 1) {
        std::cout << "tablica[" << i << "] = " << tablica[i] << "\n";
    }
}
