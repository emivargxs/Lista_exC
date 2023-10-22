#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    int soma = 0; // Inicializa a variável de soma

    for (int i = a; i <= b; i++) {
        soma = soma + i; // Acumula os números entre a e b
    }

    printf("A soma de todos os números entre %d e %d é: %d\n", a, b, soma);

    return 0;
}
