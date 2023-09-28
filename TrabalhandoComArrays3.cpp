#include <iostream>

using namespace std;

int main(void){
int qAlunos = 15;
float notas1[qAlunos], notas2[qAlunos], media[qAlunos];
cout << "aluno - avaliacao1 - avaliacao2" << endl;
for(int i=0;i<qAlunos;i++){
    notas1[i]=((float)rand()/RAND_MAX)*10;
    notas2[i]=((float)rand()/RAND_MAX)*10;
    media[i] = (notas1[i]+notas2[i])/2;
    cout << i+1 << " - " << notas1[i] << " - " << notas2[i] << " - ";
    if (notas1[i]<notas2[i])
        cout << "melhorou a nota" << endl;
    else if(notas1[i]>notas2[i])
        cout << "piorou a nota" << endl;
    else
        cout << "manteve a nota" << endl;
}

return 0;
}