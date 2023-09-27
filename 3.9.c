#include <stdio.h>

int main() {
    int i, j;

    // Loop externo para o multiplicando (1 a 10)
    for (i = 1; i <= 10; i++) {
        // Loop interno para o multiplicador (1 a 10)
        for (j = 1; j <= 10; j++) {
            // Calcula o produto e imprime na tela
            int produto = i * j;
            printf("%d x %d = %d\n", i, j, produto);
        }
        // Quebra de linha após cada linha da tabuada
        printf("\n");
    }

    return 0;
}
