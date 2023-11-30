//Dois produtos, 50% no mais barato

#include<stdio.h>
int main(){
  int p1,p2;
  printf("Valor do Produto 1 e Produto 2:\n"); 
  scanf("%d %d", &p1, &p2);

  if(p1>p2){
    int p2barato = p2 * 0.5;
    printf("%d valor final, %d sem desconto", p2barato, p2);
  }
  else{
    int p1barato = p1 * 0.5;
    printf("%d valor final, %d sem desconto", p1barato, p1);
  }

  
  return 0;
}
