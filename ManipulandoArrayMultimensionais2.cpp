#include <iostream>

using namespace std;

int main(void){
    char listaString[10][11];
    for (int i=0;i<10;i++){
        for(int j =0;j<10;j++)
            listaString[i][j] = 'a' + rand()%('a'-'z');
    }
    for(int i=0;i<10;i++){
        listaString[i][10] = '\0';
        listaString[i][0] -= 32;
    }

    for (int i=0;i<10;i++)
        cout << listaString[i] << endl;
    return 0;
}