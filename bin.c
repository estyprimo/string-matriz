#include <stdio.h>

int main() {
    int num, i = 0;
    int binario[32];  // Vetor para armazenar o número binário (até 32 bits)

    printf("Digite um número decimal: ");
    scanf("%d", &num);

    // Convertendo o número decimal para binário
    while (num > 0) {
        binario[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Imprimindo o número binário na ordem correta
    printf("O número binário é: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}