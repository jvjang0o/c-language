#include<stdio.h>

int main (void){
	int valor1=0,valor2=0,valor3=0,valor4=0,valor5=0;
	printf("informe os cinco valores a serem comparados");
	scanf("%d %d %d %d %d",&valor1,&valor2,&valor3,&valor4,&valor5);
	if ((valor1>valor2)&&(valor1>valor3)&&(valor1>valor4)&&(valor1>valor5)){
		if((valor2<valor3)&&(valor2<valor4)&&(valor2<valor5)){
			printf("O Menor é %d  : \n",valor2);//mostra valor2
		}
		if((valor3<valor2)&&(valor3<valor4)&&(valor3<valor5)){
			printf("O Menor é %d  : \n",valor3);//mostra valor3
		}
		if((valor4<valor2)&&(valor4<valor3)&&(valor4<valor5)){
			printf("O Menor é %d  : \n",valor4);//mostra valor4
		}
		if((valor5<valor2)&&(valor5<valor3)&&(valor5<valor4)){
			printf("O Menor é %d  : \n",valor5);//mostra valor5
		}
		printf("O Maior é %d  : \n",valor1);//mostra valor5
	}
	if ((valor2>valor1)&&(valor2>valor3)&&(valor2>valor4)&&(valor2>valor5)){
		if((valor1<valor3)&&(valor1<valor4)&&(valor1<valor5)){
			printf("O Menor é %d  : \n",valor1);//mostra valor1
		}
		if((valor3<valor1)&&(valor3<valor4)&&(valor3<valor5)){
			printf("O Menor é %d  : \n",valor3);//mostra valor3
		}
		if((valor4<valor1)&&(valor4<valor3)&&(valor4<valor5)){
			printf("O Menor é %d  : \n",valor4);//mostra valor4
		}
		if((valor5<valor1)&&(valor5<valor3)&&(valor5<valor4)){
			printf("O Menor é %d  : \n",valor5);//mostra valor5
		}
		printf("O Maior é %d  : \n",valor2);//mostra valor2
	}
	if ((valor3>valor1)&&(valor3>valor2)&&(valor3>valor4)&&(valor3>valor5)){
		if((valor2<valor1)&&(valor2<valor4)&&(valor2<valor5)){
			printf("O Menor é %d  : \n",valor1);//mostra valor2
		}
		if((valor1<valor2)&&(valor1<valor4)&&(valor1<valor5)){
			printf("O Menor é %d  : \n",valor3);//mostra valor3
		}
		if((valor4<valor2)&&(valor4<valor1)&&(valor4<valor5)){
			printf("O Menor é %d  : \n",valor4);//mostra valor4
		}
		if((valor5<valor2)&&(valor5<valor1)&&(valor5<valor4)){
			printf("O Menor é %d  : \n",valor5);//mostra valor5
		}
		printf("O Maior é %d  : \n",valor3);//mostra valor3
	}
	if ((valor4>valor2)&&(valor4>valor3)&&(valor4>valor1)&&(valor4>valor5)){
		if((valor2<valor3)&&(valor2<valor1)&&(valor2<valor5)){
			printf("O Menor é %d  : \n",valor2);//mostra valor2
		}
		if((valor3<valor2)&&(valor3<valor1)&&(valor3<valor5)){
			printf("O Menor é %d  : \n",valor3);//mostra valor3
		}
		if((valor1<valor2)&&(valor1<valor3)&&(valor1<valor5)){
			printf("O Menor é %d  : \n",valor1);//mostra valor1
		}
		if((valor5<valor2)&&(valor5<valor3)&&(valor5<valor1)){
			printf("O Menor é %d  : \n",valor5);//mostra valor5
		}
		printf("O Maior é %d  : \n",valor4);//mostra valor4
	}
	if ((valor5>valor2)&&(valor5>valor3)&&(valor5>valor4)&&(valor5>valor1)){
		if((valor2<valor3)&&(valor2<valor4)&&(valor2<valor1)){
			printf("O Menor é %d  : \n",valor2);//mostra valor2
		}
		if((valor3<valor2)&&(valor3<valor4)&&(valor3<valor1)){
			printf("O Menor é %d  : \n",valor3);//mostra valo3
		}
		if((valor4<valor2)&&(valor4<valor3)&&(valor4<valor1)){
			printf("O Menor é %d  : \n",valor4);//mostra valo4
		}
		if((valor1<valor2)&&(valor1<valor3)&&(valor1<valor4)){
			printf("O Menor é %d  : \n",valor1);//mostra valo1
		}
		printf("O Maior é %d  : \n",valor5);//mostra valor5
	}
return 0;
}
