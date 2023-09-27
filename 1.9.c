#include<stdio.h>
int main(){
    //Determine o numero total de segundos desde que o dia começou
    int horas, minutos, segundos;
    int segu_horas;
    int segu_minutos;
    int total_segundos;


    printf("Digite: hora, minutos e segundos\n");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    segu_horas = horas * 3600;
    segu_minutos = minutos * 60;
    segundos = segundos;

    total_segundos = segu_horas + segu_minutos + segundos;

printf("O total de segundos dessa hora eh %d", total_segundos);
    return 0;
}