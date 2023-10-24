#include <stdio.h>

// Função para contar o número de divisores de n
int numdiv(int n) { //dado um número n, calcula e retorna o número de divisores de n
    int count = 0; //contador de divisores
    for (int i = 1; i <= n; i++) { //percorre todos os números de 1 a n
        if (n % i == 0) { //se n é divisível por i  
            count++; //incrementa o contador de divisores
        }
    }
    return count;
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int divisores = numdiv(numero);
//divisores aonde coloco a função que retorna e dentro da função a variavel que eu quero.
    printf("O número %d tem %d divisores.\n", numero, divisores);

    return 0;
}
