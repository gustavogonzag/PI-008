#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    const int tamanhoArray = 100;
    int array[tamanhoArray];
    int contador[20] = {0}; // Inicializa o array de contagem com zeros

    // Inicializa o gerador de números aleatórios com a hora atual
    srand(static_cast<unsigned>(time(nullptr)));

    // Preenche o array com valores aleatórios entre 1 e 20
    for (int i = 0; i < tamanhoArray; ++i) {
        array[i] = 1 + rand() % 20;
    }

    // Conta a ocorrência de cada número no array
    for (int i = 0; i < tamanhoArray; ++i) {
        contador[array[i] - 1]++;
    }

    // Encontra o(s) número(s) que mais vezes aparecem
    int maxRepeticoes = 0;
    for (int i = 0; i < 20; ++i) {
        if (contador[i] > maxRepeticoes) {
            maxRepeticoes = contador[i];
        }
    }

    // Imprime os números que mais vezes aparecem
    std::cout << "Número(s) que mais vezes aparecem no array:" << std::endl;
    for (int i = 0; i < 20; ++i) {
        if (contador[i] == maxRepeticoes) {
            std::cout << i + 1 << " ";
        }
    }
    std::cout << "(aparecem " << maxRepeticoes << " vezes)" << std::endl;

    return 0;
}
