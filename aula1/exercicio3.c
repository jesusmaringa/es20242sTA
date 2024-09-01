#include <stdio.h>

int main(){
    float n1,n2,n3,n4,resultado;
    char escolha;
    printf("Escolha a média:\nA - Aritimetica\nP - Ponderada\nH - Harmonica\n");
    scanf("%c",&escolha);
    //printf("Escolha a média: %c",escolha);
    printf("Valor 01: ");
    scanf("%f",&n1);
    printf("Valor 02: ");
    scanf("%f",&n2);
    printf("Valor 03: ");
    scanf("%f",&n3);
    printf("Valor 04: ");
    scanf("%f",&n4);
    if(escolha == 'A'){
        resultado = (n1 + n2 + n3 + n4)/4;
    }
    if(escolha == 'P'){
        resultado = (2*n1 + 3*n2 + 5*n3 + 10*n4)/20;
    }
    if(escolha == 'H'){
        resultado = 4/((1/n1) + (1/n2) + (1/n3) + (1/n4));
    }
    
    printf("Média %c (%f - %f - %f - %f) = %f", escolha,n1,n2,n3,n4,resultado);

    
    return 0;
}