#include <stdio.h>

int main() {
    int valor;
    int notas100, notas50, notas10, notas5, notas1; //Numero de notas

    printf("Digite o valor a ser pago: "); //Valor inserido pelo usúario
    scanf("%d", &valor);

    // Calcula o número de notas de 100
    notas100 = valor / 100; // Calcula o numero de notas de 100 usadas, dividi o valor do usuario por 100.
    valor %= 100; //se o resto da divisão do valor for diferente de 100, eh o numero de notas.

    // Calcula o número de notas de 50
    notas50 = valor / 50; // Calcula o numero de notas de 50 usadas, dividi o valor do usuario por 100.
    valor %= 50; //se o resto da divisão do valor for diferente de 100, eh o numero de notas.

    // Calcula o número de notas de 10
    notas10 = valor / 10; // Calcula o numero de notas de 100 usadas, dividi o valor do usuario por 100.
    valor %= 10; //se o resto da divisão do valor for diferente de 100, eh o numero de notas.

    // Calcula o número de notas de 5
    notas5 = valor / 5; // Calcula o numero de notas de 100 usadas, dividi o valor do usuario por 100.
    valor %= 5; //se o resto da divisão do valor for diferente de 100, eh o numero de notas.

    // Calcula o número de notas de 1
    notas1 = valor;

    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 1: %d\n", notas1);

    return 0;
}