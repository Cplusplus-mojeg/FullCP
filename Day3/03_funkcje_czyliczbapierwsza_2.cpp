#include <iostream>
bool prime_nr(int n) {
    int counter = 0;
    int x;
    for (x = 1; x <= n; x+= 1) {
        if (n % x == 0)
            counter += 1;
    }
    return counter == 2;
}

int main() {
    int n;
    std::cin >> n;
    if (prime_nr(n)) {
        std::cout << "Ok, is divisible\n";
    }
}



//  int divisor_sum(int a) {
//      int x;
//      int counter = 0;
//      for (x = 1; x < a; x += 1) {
//  // return a > b ? a : b;
//         if ((a % x) == 0) {
//             counter += x;
//         }
//      }
//      return counter;
//  }    
// int main() {
//     int a;
//     std::cin >> a;
//     std::cout << divisor_sum(a)<< "\n";
//}
