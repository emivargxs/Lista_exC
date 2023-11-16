//Dois produtos tem um desconto de 50% no produto mais barato, escreva aonde recebe dois preços e calcula o valor final pago.
#include <stdio.h>
int main(){
  int p1,p2;

  printf("Preço dos dois produtos para aplicar o desconto:\n");
  scanf("%d %d", &p1, &p2);

  if(p1>p2){
    int desc2 = p2*0.5;
    int vf2 = desc2 + p1;
    printf("Valor normal:R$%d\n Peça com desconto:R$:%d\nValorTotal:R$%d", p1,desc2, vf2);
  }
  if(p1<p2){
    int desc1 = p1*0.5;
    int vf1 = desc1 + p2;
    printf("Valor normal:R$%d\n Peça com desconto:R$:%d\nValorTotal:R$%d", p2,desc1, vf1);
  }
  return 0;
}
