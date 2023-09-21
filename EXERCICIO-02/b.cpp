#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    const int numEstacoes = 250;
    double temperaturas[numEstacoes];
    double temperaturaMaxima = -100.0; // Inicializa com um valor baixo
    double temperaturaMinima = 100.0;  // Inicializa com um valor alto
    double temperaturaMedia = 0.0;

    // Inicializa o gerador de números aleatórios com a hora atual
    srand(static_cast<unsigned>(time(nullptr)));

    // Preenche o array com temperaturas aleatórias entre 10 e 40 graus
    for (int i = 0; i < numEstacoes; ++i) {
        temperaturas[i] = 10.0 + 30.0 * (rand() % 100) / 3000.0;
        temperaturaMedia += temperaturas[i];

        if (temperaturas[i] > temperaturaMaxima) {
            temperaturaMaxima = temperaturas[i];
        }
        if (temperaturas[i] < temperaturaMinima) {
            temperaturaMinima = temperaturas[i];
        }
    }

    // Calcula a temperatura média
    temperaturaMedia /= numEstacoes;

    // Atualiza as temperaturas de acordo com o modelo de predição
    for (int i = 0; i < numEstacoes; ++i) {
        if (temperaturas[i] > temperaturaMedia) {
            temperaturas[i] += 1.0;
        } else {
            temperaturas[i] -= 2.0;
        }
    }

    // Imprime os resultados
    std::cout << "Temperatura máxima: " << temperaturaMaxima << " graus Celsius" << std::endl;
    std::cout << "Temperatura mínima: " << temperaturaMinima << " graus Celsius" << std::endl;
    std::cout << "Temperatura média: " << temperaturaMedia << " graus Celsius" << std::endl;

    return 0;
}
