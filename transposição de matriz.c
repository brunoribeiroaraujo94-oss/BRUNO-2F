#include <stdio.h>
int main (){
    int i, j, m[2][2], transposta[2][2];
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
            transposta[j][i]=m[i][j];
        }
    }
    printf("Matriz transposta:\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}