#include<stdio.h>
int main (){
    int a, b,c;

    printf("InAsira tres numeros:\n");
    scanf("%d %d %d", &a, &b ,&c );
        
    int menor = a; // Assumimos inicialmente que 'a' é o menor dos três números

    // Verifica se 'b' é menor que 'menor'
    if (b < menor) {
        menor = b;
    }

    // Verifica se 'c' é menor que 'menor'
    if (c < menor) {
        menor = c;
    }

    printf("O menor número é: %d\n", menor);


    return 0;
}