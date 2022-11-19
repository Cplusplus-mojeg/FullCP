#include <iostream>

// skladnia/synthax:
//TYP_ZWRACANY NAZWA(argumenty) {
//    tresc funkcji
//}
// void - typ oznaczajacy brak zwracanej wartosci (typ ktory znacza nic - czyli funcja nie przyjmuje zadnefo argumentu i nic nie zwraca)

void hello() {
    std::cout << "Hello!\n";
}
void argument (int a) {
    //wewnatrz tej funkcji zmienna a jest juz zdefiniowana
    std::cout << "Argument = " << a << "\n";
}
void dwa_argumenty (int a, int b) {
    //wewnatrz tej funkcji zmienna a jest juz zdefiniowana
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
}
int nastepnik(int x) {
    return x+1; //return zwraca wartosc wyrazenia jako wynik funkcji i konczy jej dzialanie
    //WAZNE:  jezeli typ zwracany nie jest void to funkcja MUSI zawsze skonczyc sie return'em
}  
int main() {
    hello(); //wywolanie funcji hello
    std::cout << "hej!\n";
    hello();
    argument(10);
    argument(20);
    int x = 13;
    argument(x);
    dwa_argumenty(12, 34);
    int a = nastepnik(0); //przypisujemy wynik funckcji do zmiennej 'a'
    std::cout << 10 + nastepnik(0) << "\n";
    return 0;
}
