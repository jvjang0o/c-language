
#include <stdio.h>

int main(void)
{
	float valor1=0,valor2=0;
	/** mostra a mensagem*/
	printf("informe os dois valores ");
	/** le os valores do teclado*/
	scanf("%f %f",&valor1,&valor2);	
	/** realiza as operaçoes pedidas */
	printf ( "valores informados:%f %f \n",valor1 ,valor2);//mostra os valores informados
	printf("soma : %f \n",valor1+valor2);//mostra a soma
	printf("subtraçao : %f \n",valor1-valor2);//mostra a subtraçao
	printf("diviao : %f \n",valor1/valor2);//mostra a divisao
	printf("multiplicacao : %f \n",valor1*valor2);//mostra a multiplicação
	printf("resto da divisao : %i  \n",(int)valor1%(int)valor2);//mostra  resto da divisao e transforma o valor em inteiro para mostra-lo
	return 0;
}
