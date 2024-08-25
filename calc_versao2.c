#include <stdio.h>
#include <math.h> // calculos matemáticos
#include <locale.h> //
// Para compilar no arduino gcc -o calc exercicio.c -lm 
int menu_calculara();
double soma(double n1, double n2);
double sub(double n1, double n2);
double div(double n1, double n2);
double mult(double n1, double n2);
double media(double n1, double n2);
double porcentagem(double n1, double n2);
void eq2s(double a, double b, double c);

int main(){
	setlocale(LC_ALL,NULL);// Localização corrente (SO);
	return menu_calculara();
}
int resolve(char op, double v1, double v2){
    if(op == '+') printf("%.2lf + %.2lf = %.2lf",v1,v2,soma(v1,v2));
    else if(op == '-') printf("%.2lf - %.2lf = %.2lf",v1,v2,sub(v1,v2));
    else if(op == '/') printf("%.2lf / %.2lf = %.2lf",v1,v2,div(v1,v2));
	else if(op == '*') printf("%.2lf * %.2lf = %.2lf",v1,v2,mult(v1,v2));
	else if(op == 'm') printf("(%.2lf + %.2lf)/2 = %.2lf",v1,v2,media(v1,v2));
	else if(op == 'p') printf("(%.2lf * %.2lf)/100 = %.2lf",v1,v2,porcentagem(v1,v2));
}
int menu_calculara(){
	double valor1,valor2,valor3;
	char op;
do{
	do{
		printf("Escolhe a operação:\n");
		printf("+ adição\n");
		printf("- subtração\n");
		printf("/ divisao\n");
		printf("* multiplição\n");
		printf("m média\n");
		printf("p porcentagem\n");
		printf("s Equação 2 grau\n");
		scanf(" %c",&op);
	}while (op != '+' && op != '-' && op != '/' && op != '*' && op != 'm' && op != 'p' && op != 's');
		
	if(op != 's'){
		printf("Digite o primeiro número: ");
		scanf("%lf",&valor1);
		printf("Digite o segundo número: ");
		scanf("%lf",&valor2);
		resolve(op,valor1,valor2);
	}else{
		printf("Digite o valor de a: ");
		scanf("%lf",&valor1);
		printf("Digite o valor de b: ");
		scanf("%lf",&valor2);
		printf("Digite o valor de c: ");
		scanf("%lf",&valor3);
		eq2s(valor1,valor2,valor3);
	}
	printf("\n\nDigite: q (sair) ou c (continuar): ");
	scanf(" %c",&op);
	
	}while(op != 'q');
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
