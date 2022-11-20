#include <iostream>
//zmienna typu char to pojedynczy bajt (pod nim kryje sie jakas mala liczba

//char to tak na naprawde maly int (1 bajt), wiec mozemy na nim wynokywac operacje takie same dzialania (arytmetyczne) jak na zwyklych int'ach
int main() {
    char znak = 'a';//sluzy do przechowywania pojedyncego znaku - uzywamy apostrofow (pojedynczego znaku ')
    std::cout << znak << '\n';
    char c = 66;
    std::cout << c << '\n';
    std::cout << "sizeof(char) = " << sizeof(char) << '\n';
    
    std::cout << "napis\n";
    //char tab[6] = {'a', 'b', 'c', 'd', 'e', 0};
    //std::cout << tab << '\n';
    //char tab[6] = "abcde";
    char tab[] = "abcde"; //jezeli inicjalizujemy tablice jakimis wartosciami, to mozemy pominac jej rozmiar przy deklaracji
    std::cout << tab << '\n';
    tab[3] = 'G';
    std::cout << tab << '\n';
}
