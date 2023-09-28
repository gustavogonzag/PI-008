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
    
    int count[20] = {0}; // Array para contar a ocorrência de cada valor
    
    for(int i = 0; i < 100; i++) {
        count[array[i] - 1]++;
    }
    
    return 0;
}