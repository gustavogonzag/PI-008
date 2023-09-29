#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Função para verificar se um ano é bissexto
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Função para verificar se uma data é válida
bool isValidDate(int day, int month, int year) {
    if (year < 0 || month < 1 || month > 12 || day < 1) {
        return false;
    }

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(year)) {
        daysInMonth[2] = 29;
    }

    return (day <= daysInMonth[month]);
}

// Função para obter o nome do mês por extenso
string getMonthName(int month) {
    string monthNames[] = {"", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    return monthNames[month];
}

int main() {
    string inputDate;
    cout << "Digite uma data no formato dd/mm/aaaa: ";
    getline(cin, inputDate);

    int day, month, year;
    char discard;

    stringstream ss(inputDate);
    ss >> day >> discard >> month >> discard >> year;

    if (ss.fail() || !ss.eof()) {
        cout << "Formato de data inválido." << endl;
        return 1;
    }

    if (!isValidDate(day, month, year)) {
        cout << "Data inválida." << endl;
        return 1;
    }

    cout << "Dia: " << day << endl;
    cout << "Mês: " << getMonthName(month) << endl;
    cout << "Ano: " << year << endl;

    cout << day << " de " << getMonthName(month) << " de " << year << endl;

    return 0;
}
