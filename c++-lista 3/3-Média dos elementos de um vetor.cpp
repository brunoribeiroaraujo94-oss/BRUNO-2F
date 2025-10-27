#include <iostream>
using namespace std;
int main (){
    float vetor [8], soma=0, media;
    for(int i=0;i<8;i++){
        cin>>vetor[i];
        soma+=vetor[i];
    }
    media = soma / 8;
    cout << "Media dos elementos = " << media << endl;
    return 0;
}