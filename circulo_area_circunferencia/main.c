#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float raio,circunferencia,area;

    printf("Informe o raio: \n");
    scanf("%f",&raio);

    circunferencia=2*M_PI*raio;
    area=M_PI*raio*raio;

    printf("Circunferencia: %.2f \n",circunferencia);
    printf("Area: %.2f",area);

    return 0;
}
