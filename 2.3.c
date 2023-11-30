//Recebe tres numeros e diz se esta em ordem crescente

#include<stdio.h>
int main(){
  int a,b,c;
  printf("Introduza tres numeros: ");
  scanf(" %d %d %d",&a,&b,&c);
  if(a<b<c){
    printf("Esta em ordem crescente");
  }else{
    printf("Nao esta em ordem crescente");

    
  }
  return 0;
}
