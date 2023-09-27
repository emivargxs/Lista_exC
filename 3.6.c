#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("Sequencia %d:\n", n);

    while (n != 1) { //Enquanto n for diferente de 1 
        printf("%d ", n);

        if (n % 2 == 0) {
            // Se n for par, divida por 2
            n = n / 2;
        } else {
            // Se n for ímpar, aplique 3n + 1
            n = 3 * n + 1;
        }
    }

    // Imprima o último valor (1)
    printf("%d\n", n);

    return 0;
}
