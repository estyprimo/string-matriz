#include <stdio.h>

int main() {
    int linhas, colunas, i, j, soma = 0;
    int matriz[100][100]; // Considerando uma matriz de no máximo 100x100

    // Lendo as dimensões da matriz
    scanf("%d", &linhas);

    scanf("%d", &colunas);

    // Lendo os elementos da matriz
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calculando a soma dos elementos
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
    }

    // Imprimindo a soma
    printf("%d\n", soma);

    return 0;
}
