#include <stdio.h>
#include <string.h>

int main() {
    char data[20];
    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%s", data);

    // Extrair dia, mês e ano da string usando sscanf
    sscanf(data, "%d/%d/%d", &dia, &mes, &ano);

    // Verificar se o ano é bissexto
    int bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);

    // Verificar a validade da data
    int diasNoMes[] = {0, 31, 28 + bissexto, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dataValida = (mes >= 1 && mes <= 12 && dia >= 1 && dia <= diasNoMes[mes]);

    if (dataValida) {
        printf("Dia: %d\n", dia);
        printf("Mês: %d\n", mes);
        printf("Ano: %d\n", ano);

        // Nomes dos meses
        char* nomesMeses[] = {"", "janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho",
                              "agosto", "setembro", "outubro", "novembro", "dezembro"};
        printf("%d de %s de %d\n", dia, nomesMeses[mes], ano);
    } else {
        printf("Data inválida.\n");
    }

    return 0;
}
