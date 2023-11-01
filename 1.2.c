//Declare duas variaveis imprima elas e depois imprima elas ao contrario

#include<stdio.h>
int main(){

  int a=5 ;
  int b=10;

  printf("%d e %d\n", a,b);
  int aux = a;
       a  = b;
      b = aux;
  printf("%d e %d\n", a,b);
  
  
  
  return 0;
}
