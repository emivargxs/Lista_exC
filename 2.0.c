#include<stdio.h>

int main(void) {

int temp, depen, ano, tempr, tempr2;
float sal, aum;

printf("Digite o valor do salario: ");
scanf("%f", &sal);

printf("\nEntre com o numero de dependentes: ");
scanf("%d", &depen);

printf("\nEntre com o tempo trabalhado na empresa: ");
scanf("%d", &temp);

tempr = temp / 5;
tempr2 = temp / 6;

printf("\nEntre com o ano: ");
scanf("%d", &ano);

if (depen <= 5)
aum = (sal * 0.03) * depen;

if (depen > 5){
aum = aum + (sal * 0.03) * 5;
}

if ((depen < 4) && (tempr != 0) && (tempr <= 6)){
aum = aum + (sal * 0.04) * tempr;
}
if ((depen < 4) && (tempr != 0) && (tempr > 6)){
aum = aum + (sal * 0.04) * 6;
}

if ((depen >= 4) && (tempr2 != 0) && (tempr2 <= 7)){
aum = aum + (sal * 0.07) * tempr2;
}
if ((depen >= 4) && (tempr2 != 0) && (tempr2 > 7)){
aum = aum + (sal * 0.07) * 7;
}

if (((ano% 4==0) && (ano% 100!=0)) || (ano% 400==0)){
aum = aum + (sal * 0.01);
}
printf("\nO aumento total ficou de: %.2fR$\n", aum);
printf("\nO salário ficou: %.2fR$", sal + aum);
printf("\n\n");

return 0;

}