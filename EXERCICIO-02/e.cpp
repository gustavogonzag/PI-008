#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>

//<cstdlib>: Esta biblioteca fornece funções relacionadas a operações de C (como alocação de memória dinâmica e conversões de tipos). 
//No entanto, a parte relevante para o código é a função rand(), que gera números aleatórios em C++.

//<ctime>: Esta biblioteca permite trabalhar com funções relacionadas ao tempo, como obter a hora atual. 
//Neste caso, estamos interessados na função time(0), que retorna o tempo atual em segundos desde a "época" 
//(um ponto de referência no tempo, geralmente 1 de janeiro de 1970).

using namespace std;

int main() {
    srand(time(0)); // Semente para gerar números aleatórios

    // Gere duas strings aleatórias com 10 caracteres cada
    string string1, string2;
    for (int i = 0; i < 10; i++) {
        char randomChar1 = 'a' + rand() % ('z' - 'a' + 1);
        char randomChar2 = 'a' + rand() % ('z' - 'a' + 1);
        string1 += randomChar1;
        string2 += randomChar2;
    }

    // Transforme o primeiro caractere de cada string em maiúscula
    if (!string1.empty()) {
        string1[0] = toupper(string1[0]);
    }
    if (!string2.empty()) {
        string2[0] = toupper(string2[0]);
    }

    // Imprima as strings em ordem alfabética
    if (string1 < string2) {
        cout << string1 << endl;
        cout << string2 << endl;
    } else {
        cout << string2 << endl;
        cout << string1 << endl;
    }

    return 0;
}
