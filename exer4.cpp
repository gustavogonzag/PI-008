#include <iostream>
#include <vector>

const int WIDTH = 640;
const int HEIGHT = 480;
const int MAX_INTENSITY = 256;

int main() {
    // Parte A: Geração de uma imagem em tons de cinza
    std::vector<std::vector<int>> imagem(WIDTH, std::vector<int>(HEIGHT));

    // Preencha a matriz de imagem com valores aleatórios entre 0 e 255
    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            imagem[i][j] = rand() % MAX_INTENSITY;
        }
    }

    // Parte B: Criação do histograma
    std::vector<int> histograma(MAX_INTENSITY, 0);

    // Preencha o histograma com a contagem de intensidades na imagem
    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            histograma[imagem[i][j]]++;
        }
    }

    // Exibir o histograma
    for (int i = 0; i < MAX_INTENSITY; i++) {
        std::cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << std::endl;
    }

    return 0;
}
