
//Faça uma função que recebe uma matriz A5×5 e dois inteiros i e j e troque as linhas i e j da matriz. Imprima o resultado e  confirme.


#include <stdio.h>

// Função para imprimir uma matriz 5x5
void imprimirMatriz(int matriz[5][5]) {
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            printf("%2d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
}

// Função para trocar as linhas i e j de uma matriz 5x5
void trocarLinhas(int matriz[5][5], int i, int j) {
    if (i >= 0 && i < 5 && j >= 0 && j < 5) {
      //garante que i e j sejam valores não negativos e estejam dentro dos limites válidos para índices de linha em uma matriz 5x5. Se ambas as condições forem atendidas, a troca das linhas será realizada. Caso contrário, a troca não será executada, evitando índices inválidos.
      
        for (int coluna = 0; coluna < 5; coluna++) {
         // variável auxiliar para armazenar o valor da linha i 
          int temp = matriz[i][coluna];
            matriz[i][coluna] = matriz[j][coluna];
            matriz[j][coluna] = temp;
        }
    }
}

int main() { // Função principal
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    printf("Matriz original:\n");
    imprimirMatriz(matriz); // chama a função para imprimir a matriz original

    int i, j; // declara as variáveis i e j como inteiros

    printf("Digite os valores de i e j (entre 0 e 4): ");
    scanf("%d %d", &i, &j);

    trocarLinhas(matriz, i, j); // chama a função para trocar as linhas i e j

    printf("Matriz com linhas %d e %d trocadas:\n", i, j);
    imprimirMatriz(matriz); // chama a função para imprimir a matriz com as linhas trocadas

    return 0;
}
