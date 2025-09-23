#include <stdio.h>

void somaMatrizes(int a[3][3], int b[3][3], int resultado[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int matriz1[3][3], matriz2[3][3], soma[3][3];
    printf("Preencha a primeira matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Posição [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("Preencha a segunda matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Posição [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    somaMatrizes(matriz1, matriz2, soma);
    printf("Resultado da soma das matrizes:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
