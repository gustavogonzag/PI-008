#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int num_estacoes = 250;
    double temperaturas[num_estacoes];

    srand(time(NULL));

    // Preenche o array de temperaturas com valores aleatórios entre 10 e 40
    for (int i = 0; i < num_estacoes; i++) {
        temperaturas[i] = 10 + 30.0 * (rand() % 100) / 3000.0;
    }

    // Determina a temperatura máxima, mínima e média
    double temperatura_maxima = temperaturas[0];
    double temperatura_minima = temperaturas[0];
    double soma_temperaturas = temperaturas[0];

    for (int i = 1; i < num_estacoes; i++) {
        if (temperaturas[i] > temperatura_maxima) {
            temperatura_maxima = temperaturas[i];
        }
        if (temperaturas[i] < temperatura_minima) {
            temperatura_minima = temperaturas[i];
        }
        soma_temperaturas += temperaturas[i];
    }

    double temperatura_media = soma_temperaturas / num_estacoes;

    cout << "Temperatura Máxima: " << temperatura_maxima << " graus Celsius" << endl;
    cout << "Temperatura Mínima: " << temperatura_minima << " graus Celsius" << endl;
    cout << "Temperatura Média: " << temperatura_media << " graus Celsius" << endl;

    for (int i = 0; i < num_estacoes; i++) {
        if (temperaturas[i] > temperatura_media) {
            temperaturas[i] += 1.0;
        } else {
            temperaturas[i] -= 2.0;
        }
    }

    cout << "\nTemperaturas Atualizadas:" << endl;
    for (int i = 0; i < num_estacoes; i++) {
        cout << "Estação " << (i + 1) << ": " << temperaturas[i] << " graus Celsius" << endl;
    }

    return 0;
}
