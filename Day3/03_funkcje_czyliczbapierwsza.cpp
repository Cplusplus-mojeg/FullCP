#include <iostream>
bool prime_nr(int n) {
    int counter = 0;
    int x;
    for (x > 1; x <= (n - 1); x+= 1) {
        if (n % x == 0);
            counter += x;
    }
    return counter;
}

int main() {
    if counter < 2 {
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
