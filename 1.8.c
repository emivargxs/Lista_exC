#include<stdio.h>

int main(){

    int horas, minutos, segundos;
    int  minutos_horas, minutos_segundos, segundos_minutos;
    int  tempo_fim_do_dia;
    int tempohoras, tempominutos, temposegundos;

    printf("Digite um Horario (horas, minutos, segundos):\n");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    //Valor das horas em segundos
    minutos_horas = horas * 60; 
    minutos_segundos =  (minutos_horas * 3600) / 60;
    
    //Valor dos minutos em segundos
    segundos_minutos = 60 * minutos;

    //Tempo que falta para o dia acabar em segundos
    tempo_fim_do_dia = 86400 - (minutos_segundos + segundos_minutos + segundos) ;

    tempohoras = 24 - horas;
    tempominutos = 1440 - minutos;
    temposegundos= 86400 - segundos;

    printf("O Tempo que falta para o dia acabar em segundos eh: %d\n", tempo_fim_do_dia);
    printf("O tempo que falta para o fim do dia %d horas,%d minutos, %d segundos", tempohoras, tempominutos, temposegundos);


    return 0;
}