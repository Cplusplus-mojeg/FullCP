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

int main() {
    hello(); //wywolanie funcji hello
    std::cout << "hej!\n";
    hello();
    argument(10);
    argument(20);
    int x = 13;
    argument(x);
    dwa_argumenty(12, 34);
    
}
