#include <iostream>

int main() {
    int kot = 0;
    std::cout << "kot = " << kot << "\n";
    std::cout << "adres zmiennej 'kot' = " << &kot << "\n";
    int* adres_kota = &kot; // variable 'adres' stores address of specific value of type 'int'
    // or int64_t x; &x - for 64-bit architectures
    std::cout << "adres = " << adres_kota << "\n";
    
    //derefrencja - dobranie sie do wartosci zmiennej pod zadanym adresem
    std::cout << "*adres_kota = " << *adres_kota << "\n";
    *adres_kota = 17;
    std::cout << "kot = " << kot << "\n";
    
    //nullptr - wskaznik/pointer w nic (into nowhere) - feature of C++ (w C it's just NULL)
    
    
    return 0;
    
}
