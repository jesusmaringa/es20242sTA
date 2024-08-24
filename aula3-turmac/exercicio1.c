#include <stdio.h> // entradas e saidas
double soma(double n1, double n2);
double sub(double n1, double n2);
double div(double n1, double n2);
double mult(double n1, double n2);
int main(){
  double valor1, valor2;
  char operacao;
  printf("Escolha uma operacao.\n+ adicao\n- subracao\n/ divisao\n * multiplicacao\n");
  scanf("%c",&operacao);
  printf("Digite o numero 1: ");
  scanf("%lf",&valor1);
  printf("Digite o numero 2: ");
  scanf("%lf",&valor2);
  if(operacao == '+'){
  	  printf("Resultado da Soma = %f",soma(valor1,valor2));
  }else if(operacao == '-'){
  	  printf("Resultado da Subtavso = %f",sub(valor1,valor2));
  }else if(operacao == '/'){
  	  printf("Resultado da Divisao = %f",div(valor1,valor2));
  }else if(operacao == '*'){
	  printf("Resultado da Multiplicao = %f",mult(valor1,valor2));
  }else{
  	  printf("Operacao %c invalida.",operacao);
  }
  /*
  switch(operacao){
  	case '+':
  		printf("Resultado da Soma = %f",soma(valor1,valor2));
  		break;
  	case '-':
  		printf("Resultado da Subtavso = %f",sub(valor1,valor2));
  		break;
  	case '/':
  		printf("Resultado da Divisao = %f",div(valor1,valor2));
  		break;
  	case '*':
  		printf("Resultado da Multiplicao = %f",mult(valor1,valor2));
  		break;
  	default:
  		printf("Operacao %c invalida.",operacao);
  	
  }
  */
  return 0;	
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

