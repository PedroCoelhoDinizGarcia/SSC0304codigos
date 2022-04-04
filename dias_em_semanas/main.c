#include <stdio.h>
#include <stdlib.h>

int main(){
    int dias,semanas;

    printf("Insira o numero de dias: \n");
    scanf("%d",&dias);

    semanas=(dias/7);

    printf("Semanas: %d",semanas);
    return 0;
}
// Qual é a diferença entre os termos "float" e "int" e entre "%d" e "%f"?
