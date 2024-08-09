#include <stdio.h>

void main(){
    char nome[30];
    int idade;
   
    printf("Digite seu nome: ");
    scanf("%s",&nome);
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    
    printf("Alô %s! Falta(m)  %d anos para chegar aos 100.  \n\a",nome, (100 - idade));
}