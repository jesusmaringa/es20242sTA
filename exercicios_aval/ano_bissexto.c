/*
    Solicite o nome de uma pessoa e o ano de nascimento 
    dela e apresente como resultado, o nome da pessoa e 
    se o seu ano de nascimento foi bissexto ou não.
*/

#include <stdio.h>
int main(){
   char nome[50];
   int d, m, a;
   printf("Digite seu nome: ");
   // Não se usa & antes da variável.
   scanf("%s",nome);
   printf("Qual da data do seu nascimento d m a (dia mes ano)?\n");
   scanf("%d %d %d",&d,&m,&a);
   if( (a % 400 == 0) || ( (a % 4 == 0) && (a % 100 != 0) ) )
        printf("%s, você nasceu em %d/%d/%d, um ano bissexto.",nome,d,m,a);
    else
        printf("%c, você nasceu em %d/%d/%d, este ano nao foi.",nome,d,m,a);
    return 0;
}