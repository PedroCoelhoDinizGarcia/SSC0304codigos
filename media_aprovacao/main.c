#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1,nota2,nota3,media;

    printf("Infome as 3 notas do aluno:\n");
    scanf("%f %f %f",&nota1,&nota2,&nota3);

    media=(nota1+nota2+nota3)/3;

    if(media>=5){
        printf("\nO aluno foi aprovado com uma nota de: %.2f\n",media);
        return 0;
    }

    else{
        printf("\nO aluno foi reprovado (nota %.2f\n)",media);
        return 0;
    }

    return 0;
}
