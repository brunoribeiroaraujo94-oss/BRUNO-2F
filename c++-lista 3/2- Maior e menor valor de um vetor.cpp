#include <iostream>
using namespace std;
int main (){
    int vetor [15], maior, menor;
    for(int i=0;i<15;i++){
        cin>>vetor[i];
        if(i==0){
            maior = vetor[i];
            menor = vetor[i];
        } else {
            if(vetor[i]>maior) maior = vetor[i];
            if(vetor[i]<menor) menor = vetor[i];
        }
    }
    cout << "Maior valor = " << maior << endl;
    cout << "Menor valor = " << menor << endl;
    return 0;
}
