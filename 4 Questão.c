#include <stdio.h>
int main (){
    int n[15], i, im, par;
    printf("Digite 15 numeros inteiros:\n"); 
    for(i=0;i<15;i++){
        scanf("%d", &n[i]);
        par= n[i] % 2;
        if(par==0){
            im=n[i];
            printf("Os numeros pares sao %d\n",im);
        }
        
        im=0;
        if(par!=0){
            im=n[i];
            printf("Os numeros impares sao %d\n",im);
        }
    }
    return 0;
}   