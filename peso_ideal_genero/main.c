#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float altura,pesohomem,pesomulher;
    char genero;

    printf("Informe a sua altura em metros\n");
    scanf("%f",&altura);

    printf("\nInforme o seu genero(H/M):\n");
    scanf("%s",&genero);

    // Como eu posso configurar esse tipo de formulário para possibilitar a inserção de "Homem/Mulher" em vez de "H/M"?

    if(genero=='H'){
        pesohomem=(72.7*altura)-58;
        printf("\nO seu peso ideal e: %.2f",pesohomem);
        return 0;
    }

    else if(genero=='M'){
        pesomulher=(62.1*altura)-44.7;
        printf("\nO seu peso ideal e: %.2f",pesomulher);
        return 0;
    }

    return 0;
}
