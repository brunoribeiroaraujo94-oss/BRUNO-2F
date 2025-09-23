#include<stdio.h>
int main(){
    int n[5], i, n2[10], i2, vetorcriado;
    printf("Digite 5 numeros inteiros:\n");
    for(i=0;i<5;i++){
        scanf("%d",&n[i]);
    }
    printf("Digite 10 numeros inteiros:\n");
    for(i2=0;i2<10;i2++){
        scanf("%d",&n2[i2]);
    }
    printf("O vetor criado e:\n");
    for(i=0;i<5;i++){
        vetorcriado=n[i];
        printf("%d\n",vetorcriado);
    }   
    for(i2=0;i2<10;i2++){
        vetorcriado=n2[i2];
        printf("%d\n",vetorcriado);
    }
    return 0;
}