#include<stdio.h>

int main(void){
	float salario=0.0;
	int horas_trabalhadas=0;
	const int primeiras_horas=40;
	printf("informe as horas trabalhadas: (-1 para terminar)\n");
	scanf("%d",&horas_trabalhadas);
		if((horas_trabalhadas!=-1)&&(horas_trabalhadas<=40)){
			printf("digite o salario por hora do funcionario: \n");
			scanf("%f",&salario);
			printf("O valor do salario é: %.2f\n\n",horas_trabalhadas*salario);
		}
		else{
			if(horas_trabalhadas!=-1){
				printf("digite o salario por hora do funcionario : \n");
				scanf("%f",&salario);
				printf("O valor do salario é: %.2f\n\n",((horas_trabalhadas-primeiras_horas)*salario*0.5)+(horas_trabalhadas*salario));
			}
		}
	while (horas_trabalhadas!=-1){
	printf("informe as horas trabalhadas: (-1 para terminar)\n");
	scanf("%d",&horas_trabalhadas);
		if((horas_trabalhadas!=-1)&&(horas_trabalhadas<=40)){
			printf("digite o salario por hora do funcionario : \n");
			scanf("%f",&salario);
			printf("O valor do salario é: %.2f\n\n",horas_trabalhadas*salario);
		}
		else{
			if(horas_trabalhadas!=-1){
				printf("digite o salario por hora do funcionario : \n");
				scanf("%f",&salario);
				printf("O valor do salario é: %.2f\n\n",((horas_trabalhadas-primeiras_horas)*salario*0.5)+(horas_trabalhadas*salario));
			}
		}
	}
return 0;
}
