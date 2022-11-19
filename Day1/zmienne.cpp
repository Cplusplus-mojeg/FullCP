#include <iostream>

int main() {
    // to jest komantarz
    // this is comment
    // int - liczby calkowite (integers)
    // double - liczby rzeczywiste
    std::cout << "Liczba calkowita: " << 5 << "\n";
    std::cout << "Liczba rzeczywista: " << 3.14 << "\n";
    std::cout << 2 + 2 << "\n";
    std::cout << 2 + 2 * 2 << "\n";
    std::cout << "7 + 3 = " << 7 + 3 << "\n";
    std::cout << "7 / 3 = " << 7 / 3 << "\n";
    // % is modulo - reszta z dzielenia
    std::cout << "7 % 3 = " << 7 % 3 << "\n";
    std::cout << "7 / 3.0 = " << 7 / 3.0 << "\n";
    
    //zmienne (variables) - trzeba zadeklarowac
    
    int calkowita = 5; //deklaracja zmiennej 'calkowita' (int = integer); good habit to assign value
    std::cout <<calkowita << "\n";
    int a = 7;
    int b = 3;
    std::cout << a << " + " << b << " = " << a + b << "\n";
    
    calkowita = 10;
    std::cout << "calkowita = " << calkowita << "\n";
    
    calkowita = calkowita + 3;
    std::cout << "calkowita = " << calkowita << "\n";
    
    calkowita = calkowita + 4.7;
    std::cout << "calkowita = " << calkowita << "\n";
    
    double rzeczywista = calkowita + 6.3;
    std::cout << "rzeczywista = " << rzeczywista << "\n";
}
