#include <iostream>


//bool czy_male_litery(char c) {
    //return c >= 'a' && c <= 'z';


//Napisz funkcje, ktora sprawdzi, czy podany napis sklada sie tylko z malych czy_mala_litera


bool czy_male_litery(const char* napis) {
     
     //int counter = 0;
     for (int i = 0; napis[i] != 0; i += 1) {
         if (napis[i] < 'a' || napis[i] >'z') { //czy napis[i] NIE jest mala litera
             return false;
         }
     }
     return true;
}
         
    


int main() {
    //char word[] = "FuTbol";
    //std::cout << "Write a word : \n";
    //std::cin >> word >> '\n';
    //char word[] = "FuTbol";
    //if (czy_male_litery(char word))
    std::cout << czy_male_litery("NieWszystkie litery sa male") << "\n";
    std::cout << czy_male_litery("malelitery") << "\n";
}
