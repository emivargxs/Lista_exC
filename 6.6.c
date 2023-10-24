//Escreva uma função que recebe um inteiro n devolve o fatorial de n em c



#include <stdio.h>

// Função para calcular o fatorial de um número inteiro

unsigned long long calcularFatorial(int n) { // Função para calcular o fatorial de um número inteiro
    if (n < 0) {
        // Fatorial de números negativos não é definido
        return 0;// Função para calcular o fatorial de um número inteiro
    }

    unsigned long long fatorial = 1; // Variável para armazenar o fatorial

    for (int i = 1; i <= n; i++) { // Loop para calcular o fatorial
        fatorial = fatorial * i; // Cálculo do fatorial
    }

    return fatorial; // Retorna o fatorial calculado
}

int main() {
    int numero; // Variável para armazenar o número a ser calculado o fatorial

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    unsigned long long resultado = calcularFatorial(numero); // Chamada da função para calcular o fatorial

    printf("O fatorial de %d é %llu\n", numero, resultado); // Impressão do resultado

    return 0;
}
