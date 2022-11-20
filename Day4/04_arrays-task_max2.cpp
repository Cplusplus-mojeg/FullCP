//Napisz array/tablice, ktora przyjmie tablice intow i jej rozmiar i zwroci najwiekszy element z tej tablicy

#include <iostream>

int max(int* tab, int size) {
    int maximum = tab[0];
    for (int i = 1; i < size; i += 1) {
        if (tab[i] > maximum) {
        maximum = tab[i];
        }
    }
    return maximum;
}

int main() {
    
    int tab[5] = {4, 40 , 8, 3, 5};
    for (int i = 0; i < 5; i += 1)
        std::cin >> tab[i];
    std::cout << "Max element is: " << max(tab, 5) << "\n";



    
}


    
