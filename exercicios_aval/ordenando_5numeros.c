/*
Escrever um programa que solicite 5 números 
e apresente eles em ordem crescente.
*/

#include <stdio.h>
int main(){
    int n1, n2, n3, n4, n5, temp;

    printf("Digite um número 1: ");
    scanf("%d",&n1);
    printf("%d ", n1);
    printf("Digite um número 2: ");
    scanf("%d",&n2);
    if(n1 > n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
     printf("%d, %d ", n1, n2);
    printf("Digite um número 3: ");
    scanf("%d",&n3);
    if(n1 > n3){
        temp = n3;
        n3 = n2;
        n2 = n1;
        n1 = temp;
    }else{
        if(n2 > n3){
            temp = n3;
            n3 = n2;
            n2 = temp;
        }
    }
    printf("%d, %d, %d ", n1, n2, n3);
    printf("Digite um número 4: ");
    scanf("%d",&n4);
    if(n1 > n4){
        temp = n4;
        n4 = n3;
        n3 = n2;
        n2 = n1;
        n1 = temp;
    }else{
        if(n2 > n4){
            temp = n4;
            n4 = n3;
            n3 = n2;
            n2 = temp;
        }else{
            if(n3 > n4){
                temp = n4;
                n3 = n4;
                n4 = temp;
            }
        }   
    }
    printf("%d, %d, %d, %d", n1, n2, n3, n4);
    printf("Digite um número 5: ");
    scanf("%d",&n5);
    if(n1 > n5){
        temp = n5;
        n5 = n4;
        n4 = n3;
        n3 = n2;
        n2 = n1;
        n1 = temp;
    }else{
        if(n2 > n5){
            temp = n5;
            n5 = n4;
            n4 = n3;
            n3 = n2;
            n2 = temp;
        }else{
            if(n3 > n5){
                temp = n5;
                n5 = n4;
                n4 = n3;
                n3 = temp;
            }else{
                if(n4 > n5){
                    temp = n5;
                    n5 = n4;
                    n4 = temp;
                }
            }
        }   
    }
    printf("%d, %d, %d, %d, %d ", n1, n2, n3, n4, n5);
    return 0;
}