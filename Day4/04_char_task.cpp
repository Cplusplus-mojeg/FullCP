#include <iostream>


//bool czy_male_litery(char c) {
    //return c >= 'a' && c <= 'z';
}

//Napisz funkcje, ktora sprawdzi, czy podany napis sklada sie tylko z malych czy_mala_litera


bool czy_male_litery(char c) {
     
     //int counter = 0;
     for (i = 0; char[i] != 0; i += 1) {
         if (char[i] >= 65 && <=90)
             return false;
     }
     return true;
}
         
    


int main() {
    //char word[] = "FuTbol";
    //std::cout << "Write a word : \n";
    //std::cin >> word >> '\n';
    char word[] = "FuTbol";
    if (czy_male_litery(char word))
        std::cout << "Wszystkie litery sa male\n";
    else
        std::cout << "Nie wszystkie litery sa male\n";
}
