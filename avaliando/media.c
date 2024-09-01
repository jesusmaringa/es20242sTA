/*
Escrever um programa que leia 5 números e apresente a
média entre eles. (Use apenas três variáveis).
*/
#include <stdio.h>
int main(){
    double num, soma;
    printf("Digite o primeiro numero: ");
    scanf("%lf",&soma);
    printf("Digite o segundo numero: ");
    scanf("%lf",&num);
    soma += num;
    printf("Digite o terceiro numero: ");
    scanf("%lf",&num);
    soma += num;
    printf("Digite o quarto numero: ");
    scanf("%lf",&num);
    soma += num;
    printf("Digite o quinto numero: ");
    scanf("%lf",&num);
    soma += num;
    printf("A média é: %.2f ",soma/5);
    return 0;
}
