#include <iostream>

using namespace std;

int main(){
    int val[100], cont[20] = {0};
    srand(time(NULL));

    for (int i=0; i<100; i++){
        val[i] = i + rand()%20;
        cout << i << " - " << val[i] << endl;
    }
    for (int i = 0; i<100; i++){
        cont[val[i]--]++;
    }
    for (int i = 0; i < 20; i++){
        cout << i+1 << " - "<< cont[i] << endl;
        for (int j = 0; j<cont[i]; j++){
            cout << "#" << endl;
        }
        cout << "\n" << endl;
    }

    int max = 0, min = 100;

    for (int i = 0; i < 20; i++){
        if (max < cont[i]){
            max = cont[i];
        }
        if (min > cont[i]){
            min = cont[i];
        }
    }

    cout << "O numero que mais se repete aparece " <<max<< " vezes" << endl;
    cout << "O numero que menos se repete aparece " <<min<< " vezes" << endl;

    cout << "O numero que mais se repete é: ";
    for (int i = 0; i < 20; i++){
        if (cont[i] == max){
            cout << i+1 << " ";
        }
    }
    cout << "\nO numero que menos se repete é: ";
    for (int i = 0; i < 20; i++){
        if (cont[i] == min){
            cout << i-1 << " ";
        }
    }
    return 0;
}