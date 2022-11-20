//napisz funkcje, ktora przyjmie 2 tablice i zwroci info, czy zawieraja takie same elementy w takiej samej kolejnosci (czy sa rowne)
#include <iostream>

bool two_arrays(const int* tab1, int rozmiar1, const int* array2, int size2){

    if (rozmiar1 != size2) {
        return false; // arrays ave different lengths
    }
    for (int i = 0; i < rozmiar1; i += 1) {
        if (tab1[i] != array2[i]) {
            return false;
        }
        }
    return true;
}


int main() {
    
    int tab1[5] = {1, 2, 3};
    int array2[5] = {2, 3, 4};  
   
   
    for (int i = 0; i < 5; i += 1) {
        std::cin >> tab1[i];
    }
    for (int j = 0; j < 5; j += 1) {
        std::cin >> array2[j];
    }
    if (two_arrays(tab1, 5, array2, 5))
        std::cout << "Arrays are identical \n";
    else
        std::cout << "Arrays are different \n";
    
}
