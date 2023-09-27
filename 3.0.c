#include<stdio.h>
int main(){
    int a;
    int b;
    int soma;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &a, &b);

    while(a>b){
    soma = a+b;
    printf("%d + %d = %d\n", a, b, soma);
    soma++;
    while(a<b){
    soma = a+b;
    printf("%d + %d = %d\n", a, b, soma);
    soma++;
    }
    }

    return 0;
}
/*Es
reva um programa que re
ebe dois números a e b e a
ha a soma de todos os números
entre a e b. Faça seu programa fun
ionar até mesmo se a for maior do que b.*/