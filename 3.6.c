/*
Recebe n
a) Se n for par: n/2
b) Se n for impar = 3*n+1
*/

#include <stdio.h>

int main() {
    int n;

    printf("Introduza um numero n: ");
    scanf("%d", &n);

    printf("Sequencia de numeros:\n");

    while (n != 1) { //repete enquanto n for diferente de 1
        printf("%d\n", n); //imprime o numero n que repete

        if (n % 2 == 0) { //se esse numero for par
            n = n / 2; 
        } else { //se for impar
            n = 3 * n + 1;
        }
    }

    printf("1\n");

    return 0;
}
/*
  O usuario insere um valor n e esse valor n na estrutura
  de repetição passa por while(n!=1) {Enquanto n for diferente de 1, a estrutura repete. o printf mostra o numero n sendo imprimido.}
  Se esse numero for if(n%2==0) ele é par{
  Esse n já se considera um valor na lista de n's e n/2 e esse n/2 é o numero que vai entrar na lista de n's. Vai rodar esse n na formula e o resultado estara na lista e sera perguntado novamente se ele é par ou impar
  }
  {Se esse numero for Impar entao sera usado a formula 
  n= 3 * n +1;
  } 
  E Isso se repete ate n = 1
  */
