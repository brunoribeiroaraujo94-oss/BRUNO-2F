 #include <stdio.h>
int main (){ 
    int m[3][3], i, j, soma=0, diagonal1=0, diagonal2=0;
    for (i=0; i<3; i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Digite o elemento da linha %de da coluna %d da ", i, j);
            scanf("%d",&m[i][j]);
            soma=soma+m[i][j];
            if (i==j){
                diagonal1=diagonal1+m[i][j];
            }
            if ((i+j)==2){
                diagonal2=diagonal2+m[i][j];
            }
        }
    }
    printf("A soma dos elementos da matriz e: %d\n",soma);
    printf("A soma dos elementos da diagonal principal e: %d\n",diagonal1);
    printf("A soma dos elementos da diagonal secundaria e: %d\n",diagonal2
    );
    return 0;

}
