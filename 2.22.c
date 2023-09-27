#include<stdio.h>

int main(){

    float n1,n2,n3,n4,n5,n6,n7,n8;
    float notamais_baixa; notamais_alta;
    float nota_final;
    
    printf("Digite as oito notas:\n");
    scanf("%f %f %f %f %f %f %f %f", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8);

    menor_nota = nota1;
    maior_nota = nota1;
    
    if (nota2 < menor_nota) menor_nota = nota2;
    if (nota3 < menor_nota) menor_nota = nota3;
    if (nota4 < menor_nota) menor_nota = nota4;
    if (nota5 < menor_nota) menor_nota = nota5;
    if (nota6 < menor_nota) menor_nota = nota6;
    if (nota7 < menor_nota) menor_nota = nota7;
    if (nota8 < menor_nota) menor_nota = nota8;

    if (nota2 > maior_nota) maior_nota = nota2;
    if (nota3 > maior_nota) maior_nota = nota3;
    if (nota4 > maior_nota) maior_nota = nota4;
    if (nota5 > maior_nota) maior_nota = nota5;
    if (nota6 > maior_nota) maior_nota = nota6;
    if (nota7 > maior_nota) maior_nota = nota7;
    if (nota8 > maior_nota) maior_nota = nota8;

    // Calcula a soma das notas restantes (descartando a menor e a maior)
    soma_notas = nota1 + nota2 + nota3 + nota4 + nota5 + nota6 + nota7 + nota8 - menor_nota - maior_nota;

    // Calcula a nota final como a média das seis notas restantes
    float nota_final = soma_notas / 6;

    // Imprime a nota final do atleta
    printf("A nota final do atleta é: %.2f\n", nota_final);

    return 0;
}