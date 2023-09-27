#include <stdio.h>

int main() {
    int n;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    int soma = 0;
    int digito;

    // Calcula a soma dos dígitos
    while (n != 0) {
        digito = n % 10;  // Pega o dígito da unidade
        soma = soma + digito;   // Adiciona o dígito à soma
        n = n/ 10;          // Remove o dígito da direita
    }

    printf("A soma dos digitos do numero é: %d\n", soma);

    return 0;
}
