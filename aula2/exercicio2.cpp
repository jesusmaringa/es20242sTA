#include <stdio.h>
int divisivel(int valor, int divisor){
	if(valor % divisor == 0) return 1;
	else return 0;
}
int main(){
    int x,y;
	printf("Digite dois numeros para verificar se e divisor.\n");
	scanf("%d%d",&x,&y);
	if(divisivel(x,y)){
		printf("%d divisivel %d",x,y);
	}else{
		printf("%d nao e divisivel %d",x,y);
	}	
	
	return 0;
}

