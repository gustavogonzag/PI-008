#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Inicializar a semente do gerador de números aleatórios
    srand(time(0));
    
    int array[100];
    
    for(int i = 0; i < 100; i++) {
        array[i] = 1 + rand()%20;
    }
    
    return 0;
}