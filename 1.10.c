#include<stdio.h>

int main(){
    int horas, minutos, segundos;
    int totalhorasseg, totalminutosseg;
    int fimhoras, fimminutos;
    int fimdodiasegundos, totalhms;

    printf("Digite um horario (horas, minutos e segundos):\n");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    totalhorasseg = horas * 3600;
    totalminutosseg = minutos * 60;
    int fimsegundos = 86400 * segundos;

    fimhoras = 24 - horas;
    fimminutos = 60 - minutos;

    fimdodiasegundos = 86400 - totalhorasseg - totalminutosseg - fimsegundos;
    
    printf("Faltam %d segundos para o fim do dia. Faltam %d:%d:%d para o fim do dia", fimdodiasegundos, fimhoras, fimminutos, segundos);

    return 0;
}