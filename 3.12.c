#include <stdio.h>

int main() {
  int n;

  printf("Digite um valor n: ");
  scanf("%d", &n);

  // Use um loop para imprimir o valor n repetidamente
  for (int i = 0; i < n;
       i++) { // O valor n vai repetir o numero de vezes que o usuario digitou
    printf("%d ", n);
  }

  return 0;
}
