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
  
   //int counter = 0;
   int n = 0;
    std::cout << "Enter a number N: \n";
    std::cin >> n;
  
    for (int wiersz = 0; wiersz < n; wiersz += 1) {
        //wypisz 'n - wiersz -1' spacji
        for (int i = 0; i < n - wiersz - 1; i += 1) {
            std::cout << " ";
        }
        //counter += 1;
        
        
        for (int i = 0; i <  2 * wiersz +1; i += 1) {
            std::cout << "#";
    }
    std::cout << "\n";
    }
}
