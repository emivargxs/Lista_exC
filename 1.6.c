#include <stdio.h>

int main() {
    int num1, num2, num3;
    int impar = 0;
    int par = 0; 
    printf("Digite três números inteiros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Verificar se num1 é ímpar ou par
    if (num1 % 2 == 0) {
        par++;
    } else {
        impar++;
    }

    // Verificar se num2 é ímpar ou par
    if (num2 % 2 == 0) {
        par++;
    } else {
        impar++;
    }

    // Verificar se num3 é ímpar ou par
    if (num3 % 2 == 0) {
        par++;
    } else {
        impar++;
    }

    printf("Quantidade de números ímpares: %d\n", impar);
    printf("Quantidade de números pares: %d\n", par);

    return 0;
}