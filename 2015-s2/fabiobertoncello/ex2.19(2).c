#include <stdio.h>

int main(void)
{
	int valor1=0,valor2=0,valor3=0;//iniciando os variaveis 
	printf("Informe os tres valores inteiros diferentes : ");
	scanf("%d %d %d",&valor1,&valor2,&valor3);//recebendo os tres valores a serem comparados entre si
	if((valor1!=valor2)&&(valor2!=valor3)&&(valor3!=valor1)){ //teste(1) se os valores sao inguais 
		/*se os valores sao diferentes entre eles as operacoes de soma media e produto sao realizadas */
		printf("A soma é %d  : \n",valor3+valor2+valor1);
		printf("A media é %d  : \n",(valor3+valor2+valor1)/3);
		printf("O produto é %d  : \n",valor3*valor2*valor1);
		if ((valor1>valor2)&&(valor1>valor3)){//teste(2) do valor1 entre os valores 2 e 3
			if(valor2>valor3){//teste(3) se o valor2 é maior que o valor3 se verdadeiro o valor3 é o menor
				printf("O Menor é %d  : \n",valor3);//mostra valor3
				printf("O Maior é %d  : \n",valor1);//mostra valor1
			}
			else{//caso o teste(3) seja falso o menor valor é o valor2
				printf("O Menor é %d  : \n",valor2);
				printf("O Maior é %d  : \n",valor1);
			}
		}
		else{//caso o teste(2) seja falso é feito um teste para verificar se o valor2 é maior que os valores 1 e 3
			if((valor2>valor3)&&(valor2>valor1)){//teste(4) do valor2 entre os valores 1 e 3
				if(valor3>valor1){//teste(5) se o valor2 é maior que o valor3 se verdadeiro o valor3 é o menor
					printf("O Menor é %d  : \n",valor1);//mostra valor1
					printf("O Maior é %d  : \n",valor2);//mostra valor2
				}
				else{//caso o teste(5) seja falso o menor valor é o valor3
					printf("O Menor é %d  : \n",valor3);//mostra valor3
					printf("O Maior é %d  : \n",valor2);//mostra valor2
				}
			}
			else{//caso o teste(4) seja falso o valor2 é menor do que o valor1 e/ou o valor3 
				if(valor2>valor1){//teste(6) se o valor2 é maior que o valor1 
					printf("O Menor é %d  : \n",valor1);//mostra valor1
					printf("O Maior é %d  : \n",valor3);//mostra valor3
				}
				else{//caso o teste(6) seja falso o valor2 é menor que o valor1
					printf("O Menor é %d  : \n",valor2);//mostra valor2
					printf("O Maior é %d  : \n",valor3);//mostra valor3
				}
			}
		}
	}
	else{//caso o teste(1) seja falso nada é feito
		printf("um desses numeros sao iguais : \n");//mostra que dois o mais valores sao iguais
	
	}
return 0;
}
