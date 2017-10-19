/*programa que devueve la parte fraccionaria de cualquier numero introduccido por el usuario*/
/*septiembre 19 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>
double fraccion(float fNumero);


int main()
{
	float fNumero;
	printf("Ingrese numero \n");
	scanf("%f",&fNumero);
	printf("%d",fraccion(fNumero));
	
	return 0;
}
double fraccion(float fNumero)
{
	float parteDecimal;
	int parteEntera;
	parteEntera=fNumero/1;
	parteDecimal=fNumero-parteEntera;
	if(parteDecimal!=0)
	{
		return printf("La parte fraccionaria del numero es %f",parteDecimal);
	}else{
		printf("la parte fraccionaria del numero es:");
		
	}
}


