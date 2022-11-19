// fib(1) =1
// fib(2) =1
// fib(n) = fib(n-1) +fib(n-2)
//
//1 1 2 3 5 8 13 21 34 55
//napisz fukcje, ktora policzy n-ty wyraz ciagu fibonacciego

#include<iostream>

int fib(int n) {
    if (n == 0)
        return 1;
    return n + fib(n -1);
}

int main() {
    int x;
    std::cout << "Enter number n: \n";
    std::cin >> x;
    std::cout << fib(x) << "\n";
}
