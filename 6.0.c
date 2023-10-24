#include <stdio.h>

// Função que recebe um inteiro n e retorna n/2
int dividirPorDois(int n) {
    return n / 2;
}

// Função que recebe um inteiro n e retorna 3n + 1
int multiplicarPorTresMaisUm(int n) {
    return 3 * n + 1;
}

// Função que usa as funções anteriores para tratar números pares e ímpares
int novaFuncao(int n) {
    if (n % 2 == 0) {
        return dividirPorDois(n);
    } else {
        return multiplicarPorTresMaisUm(n);
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Chamando a função novaFuncao com o número e imprimindo o resultado
    int resultado = novaFuncao(numero);
    printf("Resultado: %d\n", resultado);

    return 0;
}
