#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

const int largura = 640;
const int altura = 480;
const int numPixels = largura * altura;



vector<int> construirHistograma(const vector<int>& imagem) {
    vector<int> histograma(256, 0);

    for (int pixel : imagem) {
        histograma[pixel]++;
    }

    return histograma;
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    vector<int> imagem(numPixels);


    for (int i = 0; i < numPixels; i++) {
        imagem[i] = rand() % 256;
    }

    vector<int> histograma = construirHistograma(imagem);
    
    cout << "Histograma da imagem gerada:" << endl;

    for (int i = 0; i < 256; i++) {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }

    return 0;
}
