/*
Escrever um programa que leia 5 números e apresente a
média entre eles. (Use apenas três variáveis).
*/
#include <stdio.h>
double verifica_maior(double n1, double n2){
    return n2 > n1 ? n2 : n1;
}
int main(){
    double num, maior;
    printf("Digite o primeiro numero: ");
    scanf("%lf",&maior);
    printf("Digite o segundo numero: ");
    scanf("%lf",&num);
    maior = verifica_maior(num,maior);
    printf("Digite o terceiro numero: ");
    scanf("%lf",&num);
    maior = verifica_maior(num,maior);
    printf("Digite o quarto numero: ");
    scanf("%lf",&num);
    maior = verifica_maior(num,maior);
    printf("Digite o quinto numero: ");
    scanf("%lf",&num);
    printf("A média é: %.2f ",verifica_maior(num,maior));
    return 0;
}
