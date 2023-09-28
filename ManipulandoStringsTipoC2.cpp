#include <iostream>

using namespace std;

int main(void){
    char string1[11], string2[11];
    for (int i=0;i<10;i++){
        string1[i] = 'a' + rand()%('a'-'z');
        string2[i] = 'a' + rand()%('a'-'z');
    }
    string1[10] = '\0';
    string2[10] = '\0';

    string1[0]-=32;
    string2[0]-=32;
    if (string1<string2)
        cout << string1 << endl << string2;
    else
         cout << string2 << endl << string1;
    return 0;
}