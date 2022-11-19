#include <iostream>
bool czy_podzielne(int n, int k) {
    return n % k == 0;
}

int main() {
    if (czy_podzielne(15, 3)) {
        std::cout << "Ok\n";
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
