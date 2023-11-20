//Repita o exercicio anterior, mas ache apenas a soma dos numeros que não são multiplos de sete

#include <stdio.h>

int main() {
    int a, b;

    printf("Introduza dois numeros:\n");
    scanf("%d %d", &a, &b);

    int soma = 0;

    if (a <= b) {
        for (int i = a; i <= b; i++) {
            if (i % 7 != 0) { // Verifica se i não é múltiplo de sete
                soma = soma + i; // Atualiza a variável soma
            }
        }
    } else {
        for (int i = a; i >= b; i--) {
            if (i % 7 != 0) { // Verifica se i não é múltiplo de sete
                soma = soma + i; // Atualiza a variável soma
            }
        }
    }

    printf("A soma dos numeros nao multiplos de sete entre %d e %d e: %d\n", a, b, soma);

    return 0;
}
