#include<stdio.h>
 int main(){
    int n[5],i, n2[5], i2, produtorescalar;
    printf("Digite 5 numeros inteiros:\n");
    for(i=0;i<5;i++){
        scanf("%d",&n[i]);
    }   
    printf("Digite outros 5 numeros inteiros:\n");
    for(i2=0;i2<5;i2++){
        scanf("%d",&n2[i2]);
    }   
    printf("O produto escalar e:\n");
    produtorescalar=0;
    for(i=0;i<5;i++){
        produtorescalar=produtorescalar+(n[i]*n2[i]);
    }
    printf("%d\n",produtorescalar);
    return 0;
 }