//Um programa que recebe dois numeros e depois imprime o menor dos dois numeros.
#include<stdio.h>
int main(){

  int n1,n2;
  printf("Introduza dois numeros:");
  scanf("%d %d", &n1, &n2);

  if(n1>n2){
    printf("O menor numero é %d", n2);
  } else{
    printf("O menor numero é %d", n1);
  }
   
  return 0;
}
