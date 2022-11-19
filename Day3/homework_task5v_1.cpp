#include <iostream>

int main() 
    {
    for (int i = 1; i <= 100; i +=1) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout  << "HopsasaTralala\n";
        }
        else if (i % 3 == 0){
            std::cout  << "Hopsasa\n";
        }
        else if (i % 5 == 0){
            std::cout  << "Tralala\n";
        }
        else {
        std::cout << i << "\n";
        }
    }
}
    
    
    
