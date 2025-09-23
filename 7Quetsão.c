#include <stdio.h>
int main(){
    int n[10], i, vetorinver;
    printf("Digite 10 numeros inteiros:\n");
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }   
    printf("O vetor na ordem inversa e:\n");
    for(i=9;i>=0;i--){
        vetorinver=n[i];
        printf("%d\n",vetorinver);
    }
    return 0;
}