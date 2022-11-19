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

int main() {
    hello(); //wywolanie funcji hello
    std::cout << "hej!\n";
    hello();
    argument(10);
    argument(20);
    int x;
    std::cin >> x;
    argument(x);
    
}
