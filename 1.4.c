#include<stdio.h>

int main(){
    int casa, terreno, area_livre;

    printf("Digite o Tamanho da area do seu terreno:\n");
    scanf("%d", &terreno);

    printf("Digite o Tamanho da sua casa:\n");
    scanf("%d", &casa);

    area_livre = terreno - casa;

    printf("o Tamanho da sua area livre eh: %d", area_livre);

    return 0;
}