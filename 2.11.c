#include<stdio.h>

int main(){
int divida, entrada, parcelamento, parcelas;
int valor = 1000;
int Valor_a_pagar;
int valor_minimo = 200;

    printf("---Insira o valor da sua divida:---\n");
    scanf("%d", &divida);

    entrada = divida * 0.10;

    if(entrada>valor){
    printf("VALOR ENTRADA: %d.\n", valor);
    }
    else{
    printf("VALOR ENTRADA: %d.\n", entrada);
    }

    printf("---Numero de parcelas desejada:---\n");
    scanf("%d", &parcelas);
    printf("NUMERO DE PARCELAS: %d\n", parcelas);

    Valor_a_pagar = divida - entrada;
    parcelamento = Valor_a_pagar/parcelas;
    
    if(parcelamento>200){
        printf(" **PARCELAMENTO APROVADO **.\n VALOR PRESTACAO: %d\n\n", parcelamento);
    }
    else{
        printf("nao possivel fazer seu parcelamento");
    }


    return 0;
}