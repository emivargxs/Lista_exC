#include <stdio.h>

// Função que recebe um inteiro n e retorna n/2
int dividirPorDois(int n) {
    return n / 2;
}

// Função que recebe um inteiro n e retorna 3n + 1
int multiplicarPorTresMaisUm(int n) {
    return 3 * n + 1;
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Números intermediários:\n");

    while (numero != 1) {
        if (numero % 2 == 0) {
            numero = dividirPorDois(numero);
        } else {
            numero = multiplicarPorTresMaisUm(numero);
        }
        printf("%d\n", numero);
    }

    return 0;
}
