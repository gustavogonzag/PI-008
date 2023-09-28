#include <iostream>
//#include <string>
using namespace std;

int main(void){
    char  data[10] = "", temp[5] = "";
    int dia, mes, ano;
    cout << "Digite a data em formato dd/mm/aaaa: ";
    cin >> data;
    int i = 0,j=0;
    while(data[i] != '/'){
        temp[j] = data[i];
        j++;
        i++;
    }
    j=0;
    i++;
    temp[i] = '\0';
    dia = atoi(temp);
    while(data[i] != '/'){
        temp[j] = data[i];
        j++;
        i++;
    }
    j=0;
    i++;
    temp[i] = '/0';
    mes = atoi(temp);
    while(data[i] != '\0'){
        temp[j] = data[i];
        i++;
        j++;
    }
    temp[i+1]='\0';
    ano = atoi(temp);

    cout << endl;
    if((dia>31)||(dia<1)||(mes>12)||(mes<1)||(ano<1))
        cout << "data invalida" << endl;
    else{
        cout << "dia " << dia << endl;
        cout << "mes " << mes << endl;
        cout << "ano " << ano << endl;
        cout << endl << dia << " de ";
        switch (mes){
            case 1:
            cout << "janeiro de ";
            break;
            case 2:
            cout << "fevereiro de ";
            break;
            case 3:
            cout << "marco de ";
            break;
            case 4:
            cout << "abril de ";
            break;
            case 5:
            cout << "maio de ";
            break;
            case 6:
            cout << "junho de ";
            break;
            case 7:
            cout << "julho de ";
            break;
            case 8:
            cout << "agosto de ";
            break;
            case 9:
            cout << "setembro de ";
            break;
            case 10:
            cout << "outubro de ";
            break;
            case 11:
            cout << "novembro de ";
            break;
            case 12:
            cout << "dezembro de ";
            break;
        }//switch
        cout << ano << endl;
    }//else
    return 0;
}