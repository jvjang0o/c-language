#include<stdio.h>
int main(void){
	int variavel1=1,variavel2=1;
	printf("ambas começão com o valor = 1");
	printf("multiplicação de 1X1 com --X : %d \n",1*(--variavel1));
	printf("multiplicação de 1X1 com X-- : %d \n",1*(variavel2--));
	printf("valor final da primeira variavel %d e valor final da segunda variavel %d\n",variavel1,variavel2);

return 0;
}
