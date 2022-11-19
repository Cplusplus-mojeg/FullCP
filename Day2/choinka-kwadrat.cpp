//przyjmij liczbe N i wypisz na ekran trojkat o wysokosci N, ///zlozony ze znakow '#'/Dla N =4:

//wersja latwiejsza:
//#
//##
//###
//####

//wersja trudniejsza:
//     #
//    ###
//   #####
//  #######


#include <iostream>

int main() {
  
   int counter = 0;
   int n = 0;
    std::cout << "Enter a number N: \n";
    std::cin >> n;
  
    while (counter < n) {
        for (int i = 0; i < n; i += 1) {
            std::cout << "#";
        }
        counter += 1;
        std::cout << "\n";
    }
    //std::cout << max << "\n";
}
