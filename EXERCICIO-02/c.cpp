#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int numAlunos = 15;
    float notasPrimeiraAvaliacao[numAlunos];
    float notasSegundaAvaliacao[numAlunos];
    float mediaNotas[numAlunos];

    // Inicializa o gerador de números aleatórios com a hora atual
    srand(time(NULL));

    // Preenche os arrays com notas aleatórias entre 0 e 10 para as duas avaliações
    for (int i = 0; i < numAlunos; ++i) {
        notasPrimeiraAvaliacao[i] = ((float)rand() / RAND_MAX) * 10;
        notasSegundaAvaliacao[i] = ((float)rand() / RAND_MAX) * 10;
    }

    // Compara as notas da segunda avaliação em relação à primeira e calcula a média
    for (int i = 0; i < numAlunos; ++i) {
        mediaNotas[i] = (notasPrimeiraAvaliacao[i] + notasSegundaAvaliacao[i]) / 2.0;

        printf("Aluno %d: ", i + 1);

        if (notasSegundaAvaliacao[i] > notasPrimeiraAvaliacao[i]) {
            printf("Melhorou\n");
        } else if (notasSegundaAvaliacao[i] < notasPrimeiraAvaliacao[i]) {
            printf("Piorou\n");
        } else {
            printf("Manteve a nota\n");
        }
    }

    // Imprime as médias das notas
    printf("Médias das notas:\n");
    for (int i = 0; i < numAlunos; ++i) {
        printf("Aluno %d: %.2f\n", i + 1, mediaNotas[i]);
    }

    return 0;
}
