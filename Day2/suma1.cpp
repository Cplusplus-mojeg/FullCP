//oblicz sume z podanych przez uzytkownika liczb.
// przyjmij liczbe dopoki uzytkownik nie poda 0.

// 3 5 9 32 87 54 92 14 7 0.
//wynik suma liczb

#include <iostream>
int main() {
    
    int suma = 0;
   
    while (true) { // alternative option "while (1) - to have continous loop, where you will use break later out of"
        int i = 0;
        std::cout << "Enter a number different than zero: \n";
        std::cin >> i;
        if (i == 0)
            break; 
        suma += i;
        }
        //break interupts current action
    //for (int k = 10; k < 20; k += 1) {
        //if (k == 13) {
            //continue;
    std::cout << "Suma: " << suma << "\n";
}
