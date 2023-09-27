#include<stdio.h.>

int main(){

int p1, p2;
int p1_maisbarato, p2_maisbarato;
int valortotal2, valortotal1;

printf("Insira o valor dos seus produtos:\n");
scanf("%d %d", &p1, &p2);
    
    if(p1>p2){
        p2_maisbarato = p2 *0.5;
    printf("O Produto mais barato custava %d, mas com o desconto agora tera um custo de %d!\n", p2, p2_maisbarato);
        valortotal2 = p1 + p2_maisbarato; 
    printf("***O valor final da sua compra sera: %d***", valortotal2);
    }

    else{
        p1_maisbarato = p1 * 0.5;
    printf("O Produto mais barato custava %d, mas com o desconto agora tera um custo de %d!\n", p1, p1_maisbarato);
        valortotal1 = p2 + p1_maisbarato; 
    printf("O valor final da sua compra sera: %d", valortotal2);

    }

    
    return 0;
}