#include <iostream>

using namespace std;

int main(void){
    int val[100], cont[20] = {0};
    for(int i=0;i<100;i++){
        val[i] = 1+rand()%20;
        cont[val[i]-1]++;
        cout << i+1 << " - " << val[i] << endl;
    }
    cout << endl << endl;
    int max = 0, min = 100;
    for(int i=0;i<20;i++){
        cout << i+1 << " - " << cont[i] << " - ";
        for(int j=0;j<cont[i];j++)
            cout << "*";
        cout << endl;
        if (cont[i]>max)
            max = cont[i];
        if (cont[i]<min)
            min = cont[i];
    }
    cout << "O numero de maior repeticao e: ";
    for(int i=0;i<20;i++){
        if (cont[i] == max)
        cout << i+1 << " ";
    }
    cout << endl << "O numero de menor repeticao e: ";
    for(int i=0;i<20;i++){
        if (cont[i] == min)
        cout << i+1 << " ";
    }
    return 0;
}