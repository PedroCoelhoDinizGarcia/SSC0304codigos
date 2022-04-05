#include <stdio.h>
#include <stdlib.h>

int main(){
    float cabecacoelho,cabecapato,totalcabeca;
    float pecoelho,pepato,totalpe;
    float totalcoelho,totalpato,total;

    printf("Informe o total de cabecas e o total de pes: \n");
    scanf("%f %f",&totalcabeca,&totalpe);

    /* totalcabeca=cabecacoelho+cabecapato=totalcoelho+totalpato */
    /* totalpe=pecoelho+pepato=4*totalcoelho+2*totalpato */

    // Encontra-se o determinante D do sistema, o qual resulta em 2
    // Para encontrar "totalcoelho", aplica-se a Regra de Cramer, o que resulta na express�o:

    totalcoelho=(totalpe-2*totalcabeca)/2;

    // Para encontrar "totalpe", aplica-se a Regra de Cramer, o que resulta na express�o:

    totalpato=(4*totalcabeca-totalpe)/2;

    total=fabs(totalcoelho)+fabs(totalpato);

    // Para que os n�meros possam ser considerados "v�lidos", isto �, refletirem uma situa��o real
    // (em que coelhos t�m 1 cabe�a e 4 patas e que patos t�m 1 cabe�a e 2 patas),
    // o n�mero total de cabe�as ("totalcabeca") deve ser equivalente ao n�mero total de animais ("total"),
    // al�m de que o n�mero total de patas ("totalpe") deve ser par.
    //
    // Tais condi��es podem ser expressas por condicionais if/else if/else:

        if((total==totalcabeca)&&(fmod(totalpe, 2)==0)){
            printf("\nCoelhos: %.2f \n",fabs(totalcoelho));
            printf("Patos: %.2f \n",fabs(totalpato));
            printf("Total de animais na fazenda: %.2f \n",total);

            return 0;
        }

        else{
            printf("\nOs numeros inseridos sao invalidos.\n");

            return 0;
        }

    return 0;
}
