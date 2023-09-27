#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite três números: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a >= b && a <= c)) {
        printf("O valor do meio é: %d\n", a);
    } else if ((b >= a && b <= c)) {
        printf("O valor do meio é: %d\n", b);
    } else {
        printf("O valor do meio é: %d\n", c);
    }

    return 0;
}