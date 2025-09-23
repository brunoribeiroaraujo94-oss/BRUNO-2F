#include <stdio.h>
int main(){
    int n[1], i, calculofatorial;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n[0]);
    calculofatorial = 1;
    for(i = 1; i <= n[0]; i++) {
        calculofatorial *= i;
    }
    printf("Fatorial de %d = %d\n", n[0], calculofatorial);
    return 0;
}
