#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string data, dia, mes, ano;
    cout << "Digite a data (separada por barra): ";
    cin >> data;
    stringstream ss(data);
    getline(ss, dia, '/');
    getline(ss, mes, '/');
    getline(ss, ano, '/');
    
    int diaInt = stoi(dia);
    int mesInt = stoi(mes);
    int anoInt = stoi(ano);

    bool dataValida = true;

    if (mesInt < 1 || mesInt > 12) {
        dataValida = false;
    } else {
        int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // Verifica se o ano é bissexto
        if ((anoInt % 4 == 0 && anoInt % 100 != 0) || (anoInt % 400 == 0))
            diasPorMes[2] = 29;

        if (diaInt < 1 || diaInt > diasPorMes[mesInt]) {
            dataValida = false;
        }
    }

    if (dataValida) {
        cout << "Dia: " << dia << "\nMês: " << mes << "\nAno: " << ano <<endl;
        string meses[] = {"", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
        cout << diaInt << " de " << meses[mesInt] << " de " << anoInt << endl;
    } else {
        cout << "Data inválida." << endl;
    }

    return 0;
}
