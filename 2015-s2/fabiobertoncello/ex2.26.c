#include<stdio.h>
int main(void){
	int valor1=0,valor2=0;
	printf("informe os dois valores: \n");
	scanf("%d %d",&valor1,&valor2);
	if((valor1%valor2)==0){
		printf("o valor %d é multiplo do %d e a multiplicaçao é %d \n",valor1,valor2,valor1*valor2);
	}
	
return 0;
}
