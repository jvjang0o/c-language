#include <stdio.h>

int main(void)
{
	float raio;
	printf("Informe o valor do raio : ");
	scanf("%f",&raio);
	printf("o diametro é %f a circunferencia é  %f e a area é %f \n", 2*raio, raio*3.14159 , 3.14159*raio*raio );
	
return 0;
}
