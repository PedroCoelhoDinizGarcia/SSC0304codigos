#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario,salarionovo;

    printf("Informe o salario do funcionario:\n");
    scanf("%f",&salario);

    if(salario<=500){
        salarionovo=(1.2)*salario;
        printf("\nO novo salario do funcionario e: %.2f",salarionovo);
        return 0;
    }

    else{
        salarionovo=(1.1)*salario;
        printf("\nO novo salario do funcionario e: %.2f",salarionovo);
        return 0;
    }

    return 0;
}
