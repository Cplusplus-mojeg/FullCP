//Napisz program, ktory swtwierdzi, czy rok jest rokiem przestelnym
#include <iostream>

int main() {
    
    int x;
    
    std::cout << "Podaj rok x:";
    std::cin >> x;
   
    
    
    if ((((x % 4) == 0) && (((x % 100) != 0))) || ((x % 400) == 0))
    { std::cout << "Jest rokiem przestepnym\n ";
    }
    else { 
        std::cout << "Rok nieprzestepny\n ";
        }
}
        
