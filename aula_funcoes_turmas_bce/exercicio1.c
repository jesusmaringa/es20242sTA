#include <stdio.h>
#include <math.h>
double soma(double n1, double n2);
double sub(double n1, double n2);
double div(double n1, double n2);
double mult(double n1, double n2);
double media(double n1, double n2);
double porcentagem(double n1,double n2);
int main(){
	double valor1,valor2; // valor3
	char op;
	printf("Escolha a operacao:\n+ adicao\n- subtracao\n/ divisao\n* multiplicacao\nm media\np porcentagem\n");
	
	scanf("%c",&op);
		
	printf("Digite o primeiro numero: ");
	scanf("%lf",&valor1);
	printf("Digite o segundo numero: ");
	scanf("%lf",&valor2);
	
	if(op == '+') printf("Soma = %.2f\n",soma(valor1,valor2));
	else if(op == '-') printf("Sub = %.2f\n", sub(valor1,valor2));
	else if(op == '/') printf("Div = %.2f\n", mult(valor1,valor2));
	else if(op == '*') printf("Mult = %.2f\n", mult(valor1,valor2));
	else if(op == 'm') printf("Media = %.2f\n", media(valor1,valor2));
	else if(op == '%') printf("Media = %.2f\n", porcentagem(valor1,valor2));
	else printf("Operacao %c invalida",op); 
	return 0;
}

double porcentagem(double n1, double n2){
	return div(mult(n1,n2),100);
}
double media(double n1, double n2){
	return div( soma(n1,n1),2 );
}
double mult(double n1, double n2){
	return n1 * n2;
}
double div(double n1, double n2){
	return n1 / n2;
}
double sub(double n1, double n2){
	return n1 - n2;
}
double soma(double n1, double n2){
	return n1 + n2;
}
