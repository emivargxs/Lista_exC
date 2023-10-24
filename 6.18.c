//Aqui está uma função em C que inverte um número inteiro genérico, não limitado a três dígitos:

#include <stdio.h>

// Função para inverter um número inteiro
int inverterNumero(int n) {
    int numeroReverso = 0; //Vai armazenar o resultado

    while (n != 0) {
        int digito = n % 10;  // Obtém o último dígito
        numeroReverso = numeroReverso * 10 + digito;  // Adiciona o dígito invertido ao resultado
        n = n / 10;  // Remove o último dígito do número original
    }

    return numeroReverso; //função retorna numeroReverso, que agora contém o número original invertido.
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int numeroReverso = inverterNumero(numero); // Chama a função para inverter o número

    printf("Número reverso: %d\n", numeroReverso); // Imprime o número reverso

    return 0;
}
