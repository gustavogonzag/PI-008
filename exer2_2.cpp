#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int numAlunos = 15;
    float notasAvaliacao1[numAlunos];
    float notasAvaliacao2[numAlunos];
    float mediaNotas[numAlunos];

    // Inicializa o gerador de números aleatórios com o tempo atual
    srand(static_cast<unsigned int>(time(nullptr)));

    // Preenche os arrays com notas aleatórias entre 0 e 10 para as duas avaliações
    for (int i = 0; i < numAlunos; i++) {
        notasAvaliacao1[i] = static_cast<float>(rand()) / RAND_MAX * 10;
        notasAvaliacao2[i] = static_cast<float>(rand()) / RAND_MAX * 10;
    }

    // Compara as notas e calcula a média
    for (int i = 0; i < numAlunos; i++) {
        if (notasAvaliacao2[i] > notasAvaliacao1[i]) {
            cout << "Aluno " << i + 1 << ": Melhorou" << endl;
        } else if (notasAvaliacao2[i] < notasAvaliacao1[i]) {
            cout << "Aluno " << i + 1 << ": Piorou" << endl;
        } else {
            cout << "Aluno " << i + 1 << ": Manteve a nota" << endl;
        }

        // Calcula a média das notas das duas avaliações
        mediaNotas[i] = (notasAvaliacao1[i] + notasAvaliacao2[i]) / 2;
    }

    // Imprime as médias das notas
    cout << "Médias das notas:" << endl;
    for (int i = 0; i < numAlunos; i++) {
        cout << "Aluno " << i + 1 << ": " << mediaNotas[i] << endl;
    }

    return 0;
}
