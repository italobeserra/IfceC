#include <stdio.h>

int main(){

int h, m, s, t;

printf("Vamos te solicitar três informações: Horas, minutos e segundos. Após você nos informar faremos o cálculo e converteremos todo esse tempo para segundos.");
getchar();

//horas
printf("Me diga a quantidade de horas:  ");
scanf("%d", &h);

//minutos
printf("Me diga a quantidade de minutos:  ");
scanf("%d", &m);

//segundos
printf("Me diga a quantidade de segundos:  ");
scanf("%d", &s);

//calculo
t = ( h * 3600 ) + ( m * 60 ) + ( s * 1 );
printf("O total de segundos vale:  %d", t);

return 0;
}