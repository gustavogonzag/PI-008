#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int num_alunos = 15;
    float notas1[num_alunos];
    float notas2[num_alunos];
    string desempenho[num_alunos];
    float media[num_alunos];

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche o array de notas da primeira avaliação
    for (int i = 0; i < num_alunos; i++) {
        notas1[i] = ((float)rand() / RAND_MAX) * 10;
    }

    // Preenche o array de notas da segunda avaliação e calcula o desempenho
    for (int i = 0; i < num_alunos; i++) {
        notas2[i] = ((float)rand() / RAND_MAX) * 10;

        if (notas2[i] > notas1[i]) {
            desempenho[i] = "Melhorou";
        } else if (notas2[i] < notas1[i]) {
            desempenho[i] = "Piorou";
        } else {
            desempenho[i] = "Manteve a nota";
        }

        // Calcula a média das duas avaliações
        media[i] = (notas1[i] + notas2[i]) / 2;
    }

    // Imprime os resultados
    cout << "Resultados das Avaliações:" << endl;
    for (int i = 0; i < num_alunos; i++) {
        cout << "Aluno " << (i + 1) << ": Nota 1 = " << notas1[i] << ", Nota 2 = " << notas2[i] << ", Desempenho = " << desempenho[i] << ", Média = " << media[i] << endl;
    }

    return 0;
}
