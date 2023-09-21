#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int largura = 640;
const int altura = 480;
const int niveisDeCinza = 256;

int main() {
    srand(time(0)); // Semente para geração de números aleatórios

    int imagem[altura][largura] = {0}; // Inicialize a imagem com zeros
    int histograma[niveisDeCinza] = {0}; // Inicialize o histograma com zeros

    // Preencha a imagem com valores de intensidade aleatórios
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            imagem[i][j] = rand() % niveisDeCinza;
        }
    }

    // Construa o histograma da imagem
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            histograma[imagem[i][j]]++;
        }
    }

    // Imprima o histograma
    for (int i = 0; i < niveisDeCinza; i++) {
        cout << "Nível de cinza " << i << ": " << histograma[i] << " pixels" << endl;
    }

    return 0;
}
