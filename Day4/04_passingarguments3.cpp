//Passing ARGUMENTS
#include <iostream>

//napisz funkcje, ktora zwroci informacje ile rozwiazan posiada rownie 0 = ax +b (dla nieskonczenie wieu zwroc -1)
//jesli istnieje dokladnie jedno rozwiazanie, to wpisz je pod adres 'rozw'

int rownanie_liniowe(double a, double b, double* rozw) {
   if (a == 0 && b == 0) {
       return -1;
   }
   else if ( a == 0 && b != 0) {
       return 0;
   }
   else {
       *rozw = -b/a;
   }
   return 1;
}


int main() {
    double a = 0.0;
    double b = 0.0;
    double r = 0.0;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    int ile = rownanie_liniowe(a, b, &r);
    if (ile == 1) {
        std::cout << "Rozwiazanie = " << r << "\n";
    }
    else if (ile == 0) {
        std::cout << "Brak rozwiazan\n";
    }
    else {
        std::cout << "Nieskonczenie wiele rozwiazan\n";
    }
    
}

