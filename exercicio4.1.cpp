#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int WIDTH = 640;
const int HEIGHT = 480;

int main() {
    srand(time(nullptr));

    // Representa a imagem
    int imagem[WIDTH][HEIGHT];

    // Preenchendo a matriz com valores aleatórios entre 0 e 255
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            imagem[x][y] = rand() % 256;
        }
    }

    // Construção e impressão do histograma
    int histograma[256] = {0};
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            int intensidade = imagem[x][y];
            histograma[intensidade]++;
        }
    }

    for (int i = 0; i < 256; i++) {
        cout << i << ": " << histograma[i] << endl;
    }

    return 0;
}