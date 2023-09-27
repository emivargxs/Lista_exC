#include<stdio.h>

int main(){

    float c, fa;

    printf("Escreva a temperatura em Fahrenheit:\n");
    scanf("%f", &fa);

    c = (5.0/9.0) *(fa-32.0);

    printf("%.2f em Celsius", c);
    
    return 0;

}
