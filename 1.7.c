#include <stdio.h>

int main() {
  int r;
  int n100, n50, n10, n5, n1;

  printf("Digite o valor a ser pago: ");
  scanf("%d", &r);

  n100 = r / 100; // Calcular o numero de notas
  r = r % 100;    // O resto da divisão do valor é as futuras notas.

  n50 = r / 50; // Calcular o numero de notas
  r = r % 50;   // O resto da divisão do valor é as futuras notas.

  n10 = r / 10; // Calcular o numero de notas
  r = r % 10;   // O resto da divisão do valor é as futuras notas.

  n5 = r / 5; // Calcular o numero de notas
  r = r % 5;  // O resto da divisão do valor é as futuras notas.

 n1 = r/1;
  printf("Notas de 100: %d\n", n100);
  printf("Notas de 50: %d\n", n50);
  printf("Notas de 10: %d\n", n10);
  printf("Notas de 5: %d\n", n5);
  printf("Notas de 1: %d\n", n1);

  return 0;
}
