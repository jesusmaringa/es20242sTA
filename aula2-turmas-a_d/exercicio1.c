#include <stdio.h>
#include <math.h>
// Para compilar no arduino gcc -o calc exercicio.c -lm 
double soma(double n1, double n2);
double sub(double n1, double n2);
double div(double n1, double n2);
double mult(double n1, double n2);
double media(double n1, double n2);
double porcentagem(double n1, double n2);
void eq2s(double a, double b, double c);

int main(){
	double valor1,valor2,valor3;
	char op;
	printf("Escolhe a operacao:\n");
	printf("+ adicao\n");
	printf("- subtracao\n");
	printf("/ divisao\n");
	printf("* multiplicao\n");
	printf("m media\n");
	printf("p porcentagem\n");
	printf("s Equacao 2 grau\n");
	
	scanf("%c",&op);
	
	if(op != 's'){
		printf("Digite o primeiro numero: ");
		scanf("%lf",&valor1);
		printf("Digite o segundo numero: ");
		scanf("%lf",&valor2);
	}else{
		printf("Digite o valor de a: ");
		scanf("%lf",&valor1);
		printf("Digite o valor de b: ");
		scanf("%lf",&valor2);
		printf("Digite o valor de c: ");
		scanf("%lf",&valor3);
	}
	
	if(op == '+') printf("Soma = %.2f",soma(valor1,valor2));
	else if(op == '-') printf("Sub = %.2f\n",sub(valor1,valor2));
	else if(op == '/') printf("Div = %.2f\n",div(valor1,valor2));
	else if(op == '*') printf("Mult = %.2f\n",mult(valor1,valor2));
	else if(op == 'm') printf("Media = %.2f\n",media(valor1,valor2));
	else if(op == 'p') printf("Porcentagem = %.2f\n",porcentagem(valor1,valor2));
	else if(op == 's') eq2s(valor1,valor2,valor3);
	else printf("Operacao %c invalida!",op);

	return 0;
}
void eq2s(double a, double b, double c){

	double delta = sub( mult(b,b) , mult(mult(4,a),c) );
	
	if(delta < 0){
		printf("Não existe raiz real.\n");
	}else if(delta == 0){
		double x1 = div(-b,mult(2,a));
		printf("x1 = x2 = %.2f\n",x1);  
	}else{
		double x1 = div(soma(-b,sqrt(delta)), mult(2,a));
		double x2 = div(sub(-b,sqrt(delta)), mult(2,a));
		printf("x1 = %.2f e x2 = %.2f\n",x1,x2);
	}
}
double porcentagem(double n1, double n2){
	return  div(mult(n1,n2),100);
}
double media(double n1, double n2){
	return  div(soma(n1,n2),2);
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
