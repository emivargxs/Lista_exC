//Escreva um programa que recebe um inteiro n e diz se os dígitos de n estão em ordem crescente ou não.
#include <stdio.h>

int main() {
    int n; //Declarei um numero inteiro n

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    int ultimoDigito = n % 10; // Obtenho o último dígito do número n
    n = n / 10; // Divido n por 10 para eliminar o último dígito
    int crescente = 1;  // Assumimos que os dígitos estão em ordem crescente inicialmente.

    while (n > 0) { // Enquanto n for maior que zero, continua o loop
        int digito = n % 10; // Obtenho o dígito atual
        if (digito > ultimoDigito) { // Se o dígito atual for maior que o último dígito
            crescente = 0;  // Os dígitos não estão em ordem crescente.
            break; // Sai do loop
        }
        ultimoDigito = digito; // Atualiza o último dígito
        n = n / 10; // Divide n por 10 para eliminar o dígito atual
    }

    if (crescente) { // Se os dígitos estiverem em ordem crescente
        printf("Os dígitos estão em ordem crescente.\n");
    } else { // Se os dígitos não estiverem em ordem crescente
        printf("Os dígitos não estão em ordem crescente.\n");
    }

    return 0;
}

/*
Vou explicar como o programa verifica os dígitos do número 1234:

Obtenção do último dígito (ultimoDigito): Inicialmente, ultimoDigito é igual a 1234 % 10, o que resulta em ultimoDigito sendo igual a 4.

Eliminação do último dígito de n: O número n é atualizado para 1234 / 10, o que remove o último dígito, e agora n é igual a 123.

Variável crescente é inicializada com 1: Assumimos inicialmente que os dígitos estão em ordem crescente.

Agora, o programa entra no loop while para verificar os dígitos:

Primeira iteração:

digito é igual a 123 % 10, o que resulta em digito sendo igual a 3.
O programa verifica se digito é maior do que ultimoDigito. Neste caso, 3 não é maior do que 4, portanto, a condição não é atendida.
ultimoDigito é atualizado para 3.
n é atualizado para 123 / 10, o que remove o dígito 3.
Segunda iteração:

digito é igual a 12 % 10, o que resulta em digito sendo igual a 2.
O programa verifica se digito é maior do que ultimoDigito. Neste caso, 2 não é maior do que 3, portanto, a condição não é atendida.
ultimoDigito é atualizado para 2.
n é atualizado para 12 / 10, o que remove o dígito 2.
Terceira iteração:

digito é igual a 1 % 10, o que resulta em digito sendo igual a 1.
O programa verifica se digito é maior do que ultimoDigito. Neste caso, 1 é menor do que 2, portanto, a condição não é atendida.
ultimoDigito é atualizado para 1.
n é atualizado para 1 / 10, o que remove o dígito 1.
Neste ponto, o loop while continua, mas n agora é igual a 0, então o loop termina.

Após o loop, o programa verifica o valor da variável crescente. Como crescente nunca foi definido como 0 (pois as condições não foram atendidas), o programa imprime "Os dígitos estão em ordem crescente.".

Portanto, para o número 1234, o programa corretamente determina que os dígitos estão em ordem crescente.
*/
