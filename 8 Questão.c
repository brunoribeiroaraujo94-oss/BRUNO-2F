#include<stdio.h>
int main(){
int n[1], i, sequenciafibonacci;
printf("Digite um numero inteiro:\n");
scanf("%d", &n[0]);
int t1=0, t2=1;
printf("Sequencia de Fibonacci:\n");
for(i=1;i<=n[0];i++){
    printf("%d, ", t1);
    sequenciafibonacci = t1 + t2;
    t1 = t2;
    t2 = sequenciafibonacci;
}
return 0;
}    