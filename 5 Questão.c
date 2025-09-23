#include <stdio.h>
int main(){
    int n[10],i,verifique;
    printf("Digite 10 numeros inteiros:\n");
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    printf("Digite um numero para verificar se ele esta no vetor:\n");
    scanf("%d",&verifique);
    for(i=0;i<10;i++){
        if(n[i]==verifique){
            printf("O numero %d esta no vetor\n",verifique);
        }
    }
    return 0;
}