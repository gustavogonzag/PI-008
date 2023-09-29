#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>

using namespace std; 

int main() {
    srand(time(nullptr));

    // Gerando um caractere aleatório entre 'a' e 'z'
    auto gerarCaractereAleatorio = []() {
        return 'a' + rand() % ('z' - 'a' + 1);
    };

    // Gerando uma string aleatória e transformar o primeiro caractere em maiúscula
    auto gerarStringAleatoria = [&gerarCaractereAleatorio]() {
        string str;
        for (int j = 0; j < 10; j++) {
            str += gerarCaractereAleatorio();
        }
        if (!str.empty()) {
            str[0] = toupper(str[0]);
        }
        return str;
    };

    // Gerar a lista de 10 strings aleatórias
    vector<string> strings;
    for (int i = 0; i < 10; i++) {
        strings.push_back(gerarStringAleatoria());
    }

    // Ordenar as strings em ordem alfabética
    sort(strings.begin(), strings.end());

    // Imprimir as strings
    for (const string& str : strings) {
        cout << str << endl;
    }

    return 0;
}
