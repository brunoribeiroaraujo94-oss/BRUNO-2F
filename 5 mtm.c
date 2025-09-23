#include <stdio.h>
int main (){
    int i, j, m[2][2], multiplicacao[2][2], terceira[2][2];
    for (i=0; i<2; i++)
    {
        for (j=0;j<2;j++)
        {
            printf("Digite o elemento da linha %de da coluna %d da ", i, j);
            scanf("%d",&m[i][j]);
        }
    }
    for (i=0; i<2; i++)
    {
        for (j=0;j<2;j++)
        {
            printf("Digite o elemento da linha %de da coluna %d da ", i, j);
            scanf("%d",&multiplicacao[i][j]);
        }
    }
    for (i=0; i<2; i++)
    {
        for (j=0;j<2;j++)
        {
            terceira[i][j]=m[i][j]*multiplicacao[i][j];
            printf("%d ",terceira[i][j]);
        }
        printf("\n");
    }
    return 0;
}