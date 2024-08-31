#include <stdio.h>

int main(){
    int d,m,a;
    printf("Digite três números, dia, mês e ano, ex.: \"5 10 2024\": ");
    scanf("%d %d %d",&d, &m, &a);
    if(a < 1900){
        printf("O ano deve ser maior que 1900.");
        return 0;
    }
    if(m < 0 || m > 12){
        printf("O mes deve ser entre 1 e 12.");
        return 0;
    }
    if(d < 1 || m > 31){
        printf("Dia deve ser entre 1 e 31.");
        return 0;
    }
    // 1902 é bissexto (1900 não é.) portanto 1898 foi bissexto.
    d += ((a-1898)/4)-1; // retirando o dia de hoje
    if( ((a % 400 == 0) || ( (a % 4 == 0) && (a % 100 != 0) )) && m < 2) d--;
    //Inspirado na resolução de alunos das turmas.
    switch (m) {
    case 1:
        printf("Dias  %d\n", (a-1900)*365+d);
        break;
    case 2:
        printf("Dias %d\n", (a-1900)*365+31+d);
        break;
    case 3:
        printf("Dias %d\n", (a-1900)*365+31+28+d);
        break;
    case 4:
        printf("Dias %d\n", (a-1900)*365+31+28+31+d);
        break;
    case 5:
        printf("Dias %d\n", (a-1900)*365+31+28+31+30+d);
        break;
    case 6:
        printf("Dias %d\n", (a-1900)*365+31+28+31+30+31+d);
        break;
    case 7:
        printf("Dias %d\n", (a-1900)*365+31+28+31+30+31+30+d);
        break;
    case 8:
        printf("Dias %d\n", (a-1900)*365+31+28+31+30+31+30+31+d);
        break;
    case 9:
        printf("Dias %d\n", (a-1900)*365+31+28+31+30+31+30+31+31+d);
        break;
    case 10:
        printf("Dias %d\n", (a-1900)*365+31+28+31+30+31+30+31+31+30+d);
        break;
    case 11:
        printf("Dias %d\n", (a-1900)*365+31+28+31+30+31+30+31+31+30+31+d);
        break;
    case 12:
        printf("Dias %d\n", (a-1900)*365+31+28+31+30+31+30+31+31+30+31+30+d);
        break;
    }
    return 0;
}