#include <iostream>


int main() {
    
    const int stala = 17;
    int zmienna = 14;
    
    int* wsk = &zmienna;
    const int* c_wsk = &zmienna;//pointer to const - nie pozwala na modyfikacje wartosci pod przechowywanym w nim adresem (nie mozna uzyc tego wskaznika do modyfikacji int'a)
    int* const wsk_c = &zmienna; //pointer jest staly, ale mozna go uzyc do modyfikacji wartosci (tylko adres jest read-only, ale wartoss pod adresem mozna zmienic -> nie mozna przestawic wskaznika, ale mozna zmodyfikowac komorke)
    const int* const cwc = &zmienna;// const wskaznik na const - nie mozna zmienic ani adresu, ani zmodyfikowac wartosci zmiennej
    
    std::cout << *c_wsk << "\n";
    c_wsk = &x;
}
