#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed para gerar números aleatórios
    srand(time(0));

    // Defina o número de estações meteorológicas
    const int numEstacoes = 250;

    // Crie um array para armazenar as temperaturas reportadas
    float temperaturas[numEstacoes];

    // Preencha o array com temperaturas aleatórias entre 10 e 40
    for (int i = 0; i < numEstacoes; i++) {
        temperaturas[i] = 10 + 30.0 * (rand() % 100) / 3000.0;
    }

    // Inicialize as variáveis para temperatura máxima, mínima e média
    float temperaturaMaxima = temperaturas[0];
    float temperaturaMinima = temperaturas[0];
    float temperaturaMedia = temperaturas[0];

    // Calcule a temperatura máxima, mínima e média
    for (int i = 1; i < numEstacoes; i++) {
        if (temperaturas[i] > temperaturaMaxima) {
            temperaturaMaxima = temperaturas[i];
        }
        if (temperaturas[i] < temperaturaMinima) {
            temperaturaMinima = temperaturas[i];
        }
        temperaturaMedia += temperaturas[i];
    }

    temperaturaMedia /= numEstacoes;

    // Imprima os resultados
    cout << "Temperatura máxima: " << temperaturaMaxima << " graus Celsius" << endl;
    cout << "Temperatura mínima: " << temperaturaMinima << " graus Celsius" << endl;
    cout << "Temperatura média: " << temperaturaMedia << " graus Celsius" << endl;

    // Atualize o array de acordo com o modelo de predição
    for (int i = 0; i < numEstacoes; i++) {
        if (temperaturas[i] > temperaturaMedia) {
            temperaturas[i] += 1.0; // Aumenta 1 grau para estações acima da média
        } else {
            temperaturas[i] -= 2.0; // Diminui 2 graus para estações abaixo da média
        }
    }

    // Imprima as temperaturas atualizadas
    cout << "Temperaturas após uma hora:" << endl;
    for (int i = 0; i < numEstacoes; i++) {
        cout << "Estação " << i + 1 << ": " << temperaturas[i] << " graus Celsius" << endl;
    }

    return 0;
}
