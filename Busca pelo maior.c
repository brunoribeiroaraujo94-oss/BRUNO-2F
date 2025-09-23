#include <stdio.h>
int main (){
    int i, j, m[4][4];
    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            printf("Digite o elemento da linha %d da coluna %d para que descobrimos o maior elemento: ", i, j);
            scanf("%d",&m[i][j]);
        }
    }
    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            if (m[i][j]>m[0][0]){
                m[0][0]=m[i][j];
            }
        }
    }
    printf("O maior elemento é: %d\n", m[0][0]);
    return 0;
}