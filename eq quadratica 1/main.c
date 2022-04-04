#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c;
    float delta,raiz1,raiz2;

    printf("Informe os coeficientes a, b e c, respectivamente, da equacao: \n");
    scanf("%f %f %f",&a,&b,&c);

    delta=(b*b)-(4*a*c);

    // O valor de delta será avaliado pelos comandos if, else if e else, os quais testarão o seu valor e darão prosseguimento ao código dependendo do que foi obtido.
    if (delta<0){
        printf("Nao existem raizes reais que satisfacam a equacao. \n");
        return 0;
    }

   else if(delta==0){
        printf("Existe apenas uma raiz real. \n");

        raiz1=-b/(2*a);

        printf("A raiz da equacao e: %.2f",raiz1);
        return 0;
    }

    else{
        printf("As raizes sao numeros reais: \n");

        raiz1=-b/(2*a)+sqrt(delta)/(2*a);
        raiz2=-b/(2*a)-sqrt(delta)/(2*a);

        printf("As raizes da equacao sao: %.2f %.2f",raiz1,raiz2);
        // Como é que eu faço pra colocar: ("As raízes da equação são:"(raiz1)"e"(raiz2))
        return 0;
    }

    return 0;
}
