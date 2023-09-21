#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

using namespace std;

int main() {
    srand(time(0));

    const int numStrings = 10;
    const int strLength = 10;

    vector<string> listaDeStrings;

    for (int i = 0; i < numStrings; i++) {
        string str;
        for (int j = 0; j < strLength; j++) {
            char caractere = 'a' + rand() % 26;
            str += caractere;
        }
        
        if (!str.empty()) {
            str[0] = toupper(str[0]);
        }
        
        listaDeStrings.push_back(str);
    }

    cout << "Lista de Strings:" << endl;
    for (const string& str : listaDeStrings) {
        cout << str << endl;
    }

    return 0;
}
