#include <iostream>
// bool czy_podzielne(int n) {
//     return n % k == 0;
// }
// 
// int suma_dzielnikow(int x) {
//     int suma = 0;
//     for (int i = 1; i < x ; i += 1) {
//         if (x % i == 0)
//             suma += 1;
//     }

bool czy_pierwsza(int n) {
//    return suma_dzielnikow(n) == 1;
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    
    for (int i = 3; i * i <= n; i +=2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    if (czy_pierwsza(n)) {
        std::cout << "Ok, is divisible\n";
    }
}
