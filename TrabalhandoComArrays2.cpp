#include <iostream>

using namespace std;

int main(void){
    int qEst = 250;
    float temp[qEst];
    float max = 0, min = 50, media = 0;
    for(int i=0;i<qEst;i++){
        //temp[i] = 10 + (rand()%3000)/2999.0*30;
        temp[i] = 10 + 30*(1.0*rand()/RAND_MAX);
        if(temp[i]>max)
            max = temp[i];
        if(temp[i]<min)
            min = temp[i];
        media += temp[i];
    }
    media = media/qEst;
    cout << "Tmin: " << min << ", Tmax: " << max << ", Media: " << media << endl;
    cout << "T_atual - T_futuro" << endl;
    for(int i=0;i<qEst;i++){
    cout << temp[i] << " - ";
        if(temp[i]>media)
            temp[i]++;
        else if(temp[i]<media)
            temp[i]-=2;
        cout << temp[i] << endl;
    }
    return 0;
}