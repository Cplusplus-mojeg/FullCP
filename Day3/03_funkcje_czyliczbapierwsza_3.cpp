#include <iostream>
bool czy_podzielne(int n) {
    return n % k == 0;
}

int suma_dzielnikow(int x) {
    int suma = 0;
    for (int i = 1; i < x ; i += 1) {
        if (x % i == 0)
            suma += 1;
    }

bool czy_pierwsza(int n) {
    return suma_dzielnikow(n) == 1;
}

int main() {
    int n;
    std::cin >> n;
    if (czy_pierwsza(n)) {
        std::cout << "Ok, is divisible\n";
    }
}
