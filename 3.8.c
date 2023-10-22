/* 
Escrever um programa que examina um numero e diz quantos 33 tem dentro dele.
*/
#include <stdio.h>

int main() {

  int n; //Usuario introduz um numero

  printf("Entre com n: ");
  scanf("%d", &n );

  int tinha33 = 0; //contador inicia em 0

  while ( n > 0 ) { //N tem que ser maior que 0
    if ( n % 100 == 33 ) { //Se o resto da divisao de n por 100 for igual a 33 roda o seguinte:
      tinha33 = 1; //Tem 33 e da um  break
      break; //Programa encerra
    }
    n = n / 10; //Se nao o valor n é dividido por 10 ate tentar achar um n com 33.
  }

  if ( tinha33 == 1 )
    printf("Tem um 33\n");
  else
    printf("Nao tem um 33\n");

}

/*
Esse programa em C tem o objetivo de verificar se um número n fornecido pelo usuário contém o dígito "33" em qualquer parte de sua representação decimal. Vou explicar o programa passo a passo:

Declaração de variáveis:

O programa começa declarando as variáveis necessárias:
int n: Esta variável armazenará o número fornecido pelo usuário.
int tinha33 = 0: Esta variável é uma flag que é inicializada com 0. Ela será usada para indicar se o número contém o dígito "33".
Entrada de dados:

O programa solicita que o usuário insira um número inteiro n e armazena o valor inserido na variável n.
Loop while:

O programa entra em um loop while que continuará até que n seja maior que zero.
No interior do loop:
Verifica se os dois últimos dígitos de n são iguais a "33" usando a condição if (n % 100 == 33).
Se essa condição for verdadeira, o programa define a variável tinha33 como 1 (indicando que encontrou "33") e sai do loop usando break.
Caso contrário, o programa remove o último dígito de n dividindo-o por 10 (n = n / 10) para continuar verificando os dígitos restantes.
Verificação e saída:

Após o loop, o programa verifica o valor de tinha33.
Se tinha33 for igual a 1, o programa imprime "Tem um 33" para indicar que o número contém o dígito "33".
Caso contrário, se tinha33 for igual a 0, o programa imprime "Nao tem um 33" para indicar que o número não contém o dígito "33".
Resumindo, o programa verifica os dois últimos dígitos do número n em cada iteração do loop while. Se encontrar "33" em algum lugar do número, a flag tinha33 é definida como 1, e o programa imprime que "Tem um 33". Caso contrário, se o loop terminar sem encontrar "33", o programa imprime "Nao tem um 33".
*/
