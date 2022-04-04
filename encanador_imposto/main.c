#include <stdio.h>
#include <stdlib.h>

int main(){
    float dias,valorbruto,valorliquido;

    printf("Informe o numero de dias que o encanador ira ser contratado: \n");
    scanf("%f",&dias);

    valorbruto=20*dias;
    valorliquido=0.92*valorbruto;

    printf("O valor bruto e: %.2f \n",valorbruto);
    printf("O valor liquido, apos o desconto de 8 por cento do imposto de renda, e: %.2f",valorliquido);
    return 0;
}
