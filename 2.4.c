#include<stdio.h>
int main(){
    int idade;
    
    printf("Insira sua idade:\n");
    scanf("%d", &idade);

    if(idade <=7){
        printf("Valor do ingresso eh 5 reais");
    }
    else if(idade >= 8 && idade <= 18){
        printf("Valor do ingresso eh 10 reais");
    }
    else if(idade >= 19 && idade <=58){
        printf("Valor do ingresso eh 12 reais");
    }
    else{
    printf("Valor do ingresso eh 8 reais");
    }



    return 0;
}