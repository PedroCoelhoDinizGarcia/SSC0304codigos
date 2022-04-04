#include <stdio.h>
#include <stdlib.h>

int main(){
    float investimento1,investimento2,investimento3,premio,k;
    float valor1,valor2,valor3;

    printf("Informe o valor do prêmio: \n");
    scanf("%f",&premio);

    printf("\nInforme os valores investidos pelos respectivos amigos: \n");
    scanf("%f %f %f",&investimento1,&investimento2,&investimento3);

    k=premio/(investimento1+investimento2+investimento3);

    // Sendo k a proporção do prêmio que depende diretamente do investimento de cada um

    valor1=investimento1*k;
    valor2=investimento2*k;
    valor3=investimento3*k;

    printf("\nO valor obtido pelo primeiro amigo e: %.2f \n",valor1);
    printf("O valor obtido pelo segundo amigo e: %.2f \n",valor2);
    printf("O valor obtido pelo terceiro amigo e: %.2f \n",valor3);

    return 0;
}
