//napisz program, ktory przyjmie od uzytkownika 10 liczb i wypisze je w odwrotnej kolejnosci

#include <iostream>
int main() {
    
    const int ROZMIAR = 10;
    
    int tablica[ROZMIAR]; //square brackets with size inside the brackets
    //here we create array with 10 int, index starting with zero - so here from 0 to 9; tablica[0], tablica[1], etc.
    std::cin >> tablica[0] >> tablica[1];
    
    for (int i = 0; i < ROZMIAR; i += 1) {
        std::cin >> tablica[i];
    }

    for (int i = 0; i < ROZMIAR; i += 1) {
        std::cout << "tablica[" << i << "] = " << tablica[i] << "\n";
    }
}
