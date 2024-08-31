#include <stdio.h>

int main(){
    int d,m,a;
    printf("Digite três números, dia, mês e ano, ex.: \"5 10 2024\": ");
    scanf("%d %n %a",&d, &m, &a);
    if(a < 1900){
        printf("O ano deve ser maior que 1900.");
        return 0;
    }
    if(m < 0 || m > 12){
        printf("O mes deve ser entre 1 e 12.");
        return 0;
    }
    if(d <= 1 || m >= 31){
        printf("Dia deve ser entre 1 e 31.");
        return 0;
    }
    printf("Dias %d", (a-1900)*365+ (m-1)*30 +d);
    return 0;
}