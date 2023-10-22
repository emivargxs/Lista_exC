//Voce recebeu dois numeros inteiros a e b e sabe que eles represenam dois lados de um triangulo. escreva um programa que imprime todos os valores inteiros que o terceiro lado poderia ter
//recebe um numero n, imprime a soma dos digitos de n.
// exemplo 57, 5 + 7.

#include<stdio.h>
int main(){
  int n;
  int soma = 0;

  printf("Digite um numero n e saiba a soma do numero desse digito:\n");
  scanf("%d",&n);

  if(n<0){
  n = -n; //Transforma o n em positivo
  }
  while(n>0){
    soma = soma + n % 10; //Nessa posição a soma inicia em 0 e recebe o resto da divisão de n por 10.
    n = n/10; //Nessa posição o n recebe o n dividido por 10.

    //Essa estrutura se repete enquanto n>0
    /* 1- retição
      Exemplo: n=57;
      soma = soma + n % 10;
      {
      soma = 0 + 57 % 10 
      soma = (resto) 7 segundo digito
      }
      n = n/10;
      {
      n = 57/10 = 5 primeiro digito 
      }
      */

    /* 2- Repetição
     soma = soma + n % 10;
    soma = 7 + 5 % 10; soma = 1
    n = n/10; n=5/10 = 0.5 INVALIDO n<0
    
    */
  
    
  }  
  printf("A soma dos digitos de n eh: %d", soma);
  return 0;
}

/*
Quando n é igual a 57, o while funciona assim:

1ª iteração:

n é igual a 57, que é maior do que zero.
soma é inicialmente zero.
n % 10 calcula o último dígito, que é 7. soma é atualizada para 7.
n / 10 remove o último dígito, deixando n igual a 5.
2ª iteração:

n agora é igual a 5, que ainda é maior do que zero.
soma é 7 (do passo anterior).
n % 10 calcula o último dígito, que é 5. soma é atualizada para 7 + 5, que é 12.
n / 10 remove o último dígito, deixando n igual a 0.
3ª iteração:

n é igual a 0, o que não atende mais à condição n > 0, portanto, o loop while termina.
No final, a soma dos dígitos do número 57 é calculada como 12, conforme mostrado anteriormente. O loop while funciona perfeitamente para somar os dígitos do número fornecido.*/
