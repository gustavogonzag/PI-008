#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    string val1, val2;

    // Preenchendo as strings com caracteres aleatórios
    for (int i = 0; i < 10; i++) {
        char randomChar = 'a' + rand() % 26;
        val1 += randomChar;
        randomChar = 'a' + rand() % 26;
        val2 += randomChar;
    }

    // Transformando o primeiro caractere de cada string em maiúscula
    val1[0] = toupper(val1[0]);
    val2[0] = toupper(val2[0]);

    // Imprimindo as strings em ordem alfabética
    if (val1 < val2) {
        cout << val1 << endl;
        cout << val2 << endl;
    } else {
        cout << val2 << endl;
        cout << val1 << endl;
    }

    return 0;
}
