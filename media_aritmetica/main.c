#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1,n2,media;
    printf("Insira dois numeros para encontar a media aritmetica entre eles: \n");
    scanf("%f %f",&n1,&n2);

    media=(n1+n2)/2;

    printf("A media entre os numeros e: %.2f",media);

    return 0;
}
