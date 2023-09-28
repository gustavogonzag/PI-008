#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed para gerar números aleatórios
    srand(time(0));

    // Preencha um array com 100 elementos de tipo int
    const int tamanhoArray = 100;
    int array[tamanhoArray];

    // Preenche o array com valores aleatórios entre 1 e 20
    for (int i = 0; i < tamanhoArray; i++) {
        array[i] = 1 + rand() % 20;
    }

    // Utilize um array de 20 posições para determinar quantas vezes se repete cada valor gerado no array
    const int tamanhoContagem = 20;
    int contagem[tamanhoContagem] = {0}; // Inicializa todas as posições com zero

    for (int i = 0; i < tamanhoArray; i++) {
        contagem[array[i] - 1]++; // Decrementa 1 para ajustar o índice
    }

    // Determine qual ou quais números aparecem mais vezes no array
    int maxRepeticoes = 0;

    for (int i = 0; i < tamanhoContagem; i++) {
        if (contagem[i] > maxRepeticoes) {
            maxRepeticoes = contagem[i];
        }
    }

    cout << "Número(s) que mais aparece(m) no array:" << endl;

    for (int i = 0; i < tamanhoContagem; i++) {
        if (contagem[i] == maxRepeticoes) {
            cout << i + 1 << " ";
        }
    }

    cout << "aparece(m) " << maxRepeticoes << " vez(es)" << endl;

    return 0;
}
