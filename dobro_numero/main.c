#include <stdio.h>
#include <stdlib.h>

int main(){
    // Qual é a diferença entre "int main (){"
    float numero,dobro;

    printf("Insira um numero: \n");
    scanf("%f",&numero);

    dobro=numero*2;
    // Como funcionam os parâmetros %f, &, %.2f, %.3f, %lf, %.2lf
    printf("O seu dobro e: %.2f \n",dobro);
    return 0;
}
