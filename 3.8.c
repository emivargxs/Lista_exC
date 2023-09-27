#include <stdio.h>

int main() {

  int n;

  printf("Entre com n: ");
  scanf("%d", &n );

  int tinha33 = 0; /*INICIALIZAÇÃO Uma variável chamada tinha33 é declarada e inicializada com 0. 
  Esta variável será usada para indicar se a sequência "33" foi encontrada no número.*/

  while ( n > 0 ) { // CONDIÇÃO Entra em um loop while que continua enquanto n for maior que zero.
    if ( n % 100 == 33 ) {/*Verifica se os dois ultimos digitos de n são iguais
    a 22 usando a operação n%100 == 33, pega os dois ultimos digitos de n, 
    se essa condição for verdadeira significa qur a sequencia 33 foi encontrada*/
      tinha33 = 1; //Tinha 33 =1 loop interrompido.
      break;
    }
    n = n / 10; /*A linha de código n = n / 10; é usada para remover
     o último dígito do número inteiro n. Isso é feito 
     dividindo n por 10, 
    o que resulta na remoção do dígito da direita.*/
  }

  if ( tinha33 == 1 ) //se tinha33 = 1 tem 33 se nao, nao tem
    printf("Tem um 33\n");
  else
    printf("Nao tem um 33\n");

}
