#include <stdio.h>
#include <stdlib.h>

int main(){
    float lado1,lado2,ladomaior;

    printf("Informe os lados do triangulo em ordem crescente:\n");
    scanf("%f %f %f",&lado1,&lado2,&ladomaior);

    // Testando se o triângulo é possível

    if(ladomaior<lado1+lado2){
        printf("O triangulo e valido.\n");

        if((lado1!=lado2)&&(lado1!=ladomaior)&&(lado2!=ladomaior)){
            printf("O triangulo tem todos os lados diferentes. Logo, ele e escaleno.\n");
            return 0;
        }

        else if(((lado1==lado2)&&(lado1!=ladomaior))||((lado1==ladomaior)&&(lado1!=lado2))||((lado2==ladomaior)&&(lado2!=lado1))){
            printf("O triangulo tem dois lados iguais e um diferente. Logo, ele e isosceles.\n");
            return 0;
        }

        else (lado1==lado2==ladomaior);{
            printf("O triangulo tem todos os lados iguais. Logo, ele e equilatero.\n");
            return 0;
        }

    }

    else{
        printf("O triangulo nao e valido.\n");
        return 0;
    }

    return 0;
}
