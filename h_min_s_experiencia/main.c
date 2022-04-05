#include <stdio.h>
#include <stdlib.h>

int main(){
    // Qualquer vari�vel terminada em "tes" indica aquela vari�vel com o tempo expresso somente em segundos
    int iniciohoras,iniciominutos,iniciosegundos,iniciotes;
    int duracaohoras,duracaominutos,duracaosegundos,duracaotes;
    int terminohoras,terminominutos,terminosegundos,terminotes;

    printf("Insira o horario de inicio com horas, minutos e segundos:\n");
    scanf("%d %d %d",&iniciohoras,&iniciominutos,&iniciosegundos);

    iniciotes=iniciosegundos+60*iniciominutos+3600*iniciohoras;

    // Resolvi possibilitar a inser��o do tempo de dura��o do experimento em horas, minutos e segundos para explorar a convers�o em C.

    printf("\nInsira a duracao do experimento em horas, minutos e segundos:\n");
    scanf("%d %d %d",&duracaohoras,&duracaominutos,&duracaosegundos);

    duracaotes=duracaosegundos+60*duracaominutos+3600*duracaohoras;

    terminotes=iniciotes+duracaotes;

    terminohoras=terminotes/3600;
    terminosegundos=terminotes%3600;

    terminominutos=terminosegundos/60;
    terminosegundos=terminosegundos%60;

    printf("\nO experimento comeca as %d:%d:%d",iniciohoras,iniciominutos,iniciosegundos);
    printf("\nO experimento tem duracao de %d:%d:%d",duracaohoras,duracaominutos,duracaosegundos);
    printf("\nO experimento termina as %d:%d:%d:\n",terminohoras,terminominutos,terminosegundos);
    return 0;
}
