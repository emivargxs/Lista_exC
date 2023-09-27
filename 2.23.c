#include <stdio.h>

int main() {
    int ano, seculo;

    // Recebe o ano como entrada do usuário
    printf("Digite um ano maior do que zero: ");
    scanf("%d", &ano);

    // Calcula o século ao qual o ano pertence
    seculo = (ano - 1) / 100 + 1;

    // Imprime o século correspondente
    printf("O ano %d pertence ao seculo %d\n", ano, seculo);

    return 0;
}