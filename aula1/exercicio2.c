#include <stdio.h>

void main(){
    int maior,menor,valor;
    printf("Primeiro número: ");
    scanf("%d",&valor);
    maior = valor;
    menor = valor;

    printf("Segundo número: ");
    scanf("%d",&valor);
    if(valor > maior){
        maior = valor;
    }
    if(valor < menor){
        menor = valor;
    }

    printf("Terceiro número: ");
    scanf("%d",&valor);
    if(valor > maior){
        maior = valor;
    }
    if(valor < menor){
        menor = valor;
    }

    printf("Quarto número: ");
    scanf("%d",&valor);
    if(valor > maior){
        maior = valor;
    }
    if(valor < menor){
        menor = valor;
    }

    printf("Quinto número: ");
    scanf("%d",&valor);
    if(valor > maior){
        maior = valor;
    }
    if(valor < menor){
        menor = valor;
    }
    printf("Maior = %d e Menor = %d",maior,menor);
}