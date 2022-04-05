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
    // Para encontrar "totalcoelho", aplica-se a Regra de Cramer, o que resulta na expressão:

    totalcoelho=(totalpe-2*totalcabeca)/2;

    // Para encontrar "totalpe", aplica-se a Regra de Cramer, o que resulta na expressão:

    totalpato=(4*totalcabeca-totalpe)/2;

    total=fabs(totalcoelho)+fabs(totalpato);

    // Para que os números possam ser considerados "válidos", isto é, refletirem uma situação real
    // (em que coelhos têm 1 cabeça e 4 patas e que patos têm 1 cabeça e 2 patas),
    // o número total de cabeças ("totalcabeca") deve ser equivalente ao número total de animais ("total"),
    // além de que o número total de patas ("totalpe") deve ser par.
    //
    // Tais condições podem ser expressas por condicionais if/else if/else:

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
