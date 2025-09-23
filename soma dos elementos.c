#include <stdio.h>
int main (){
    int i, j, m[5][5], soma=0;
    for (i=0; i<5; i++)
    {
        for (j=0;j<5;j++)
        {
            printf("Digite o elemento da linha %de da coluna %d da ", i, j);
            scanf("%d",&m[i][j]);
            soma=soma+m[i][j];
        }
    }
    printf("A soma dos elementos da matriz e: %d",soma);
    return 0;

}