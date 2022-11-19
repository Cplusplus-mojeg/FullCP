//przyjmij 3 liczby: a b c, gdzie:

//'a' i 'b' oznaczaja odpowiednio godzine i minute obecnie wyswietlona na zegarze elektronicznym
//wypisz godzine i minute, jaka bedzie wyswietlona na zegarze po uplywie c minut 
//przykladowo dla danych:
//16 57 5,

//powinno zostac wyswietlona:
//17 2 (bo to wtedy 17:02)

#include <iostream>

int main() {
    
//     int a;
//     int b;
//     int c;
//     int d = b + c;
//     int e = d / 60;
//     std::cout << "Podaj godzine: \n";
//     std::cin >> a;
//     std::cout << "podaj minute: \n";
//     std::cin >> b;
//     std::cout << "podaj ilosc minut dodania: \n";
//     std::cin >> c;
//     std::cout << "jest godzina " << a << " i minut " << b << "\n ";
//     std::cout << d % 60 << "\n ";
//     
// 
//     std::cout << a + e << c << "\n ";
    //std::cout <<
    
    
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    std::cout << "Obecnie jest godzina " << a << ":" << b << "\n";
    
    int suma_minut = b + c;
    int nowe_minuty = suma_minut % 60;
    int nowe_godziny = a + suma_minut / 60;
    nowe_godziny = nowe_godziny % 24;
    
    std::cout << "Po uplynieciu " << c << " minut bedzie godzina " << nowe_godziny << ":" << nowe_minuty << "\n";
    
}
