#include <stdio.h>

int contarOcorrencias(int matriz[4][4], int numero) {
    int contador = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == numero) {
                contador++;
            }
        }
    }
    return contador;
}

int main() {
    int matriz[4][4];
    int num;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Digite o número para contar as ocorrências: ");
    scanf("%d", &num);
    
    int resultado = contarOcorrencias(matriz, num);
    printf("O número %d aparece %d vezes na matriz.\n", num, resultado);
    
    return 0;
}
