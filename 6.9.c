#include <stdio.h>

// Função para imprimir uma matriz 10x10
void imprimirMatriz(int matriz[10][10]) {
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%2d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
}

// Função para transpor uma matriz 10x10
void transporMatriz(int matriz[10][10]) {
    int matrizTransposta[10][10];

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            matrizTransposta[linha][coluna] = matriz[coluna][linha];
        }
    }

    // Copiar a matriz transposta de volta para a matriz original
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            matriz[linha][coluna] = matrizTransposta[linha][coluna];
        }
    }
}

int main() {
    int matriz[10][10];

    // Preencher a matriz com valores de exemplo (você pode modificar os valores)
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            matriz[linha][coluna] = linha * 10 + coluna;
        }
    }

    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    transporMatriz(matriz);

    printf("\nMatriz transposta:\n");
    imprimirMatriz(matriz);

    return 0;
}
