#include <stdio.h>

int main() {
    int a, b;

    printf("Introduza dois numeros:\n");
    scanf("%d %d", &a, &b);

    if (a <= b) {
        for (int i = a; i <= b; i++) { //Inicia com o valor de a, i<=b b pode ser maior igual a i=a, e acrescenta +1
            printf("%d + %d = %d\n", a, i, a + i);
        }
    } else {
        for (int i = a; i >= b; i--) {
            printf("%d + %d = %d\n", a, i, a + i);
        }
    }

    return 0;
}
