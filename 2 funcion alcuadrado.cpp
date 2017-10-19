/*Programa que calcula el cuadrado de un numero flotante*/
/*Septiembre 21 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>

float al_cuadrado(float fBase);
	
int main() 
{ 
	float fBase;	
	
	printf("Ingrese base \n");
	scanf("%f",&fBase);
	printf("El cuadrado es %f",al_cuadrado(fBase));
	return 0;
}
float al_cuadrado(float fBase)
	
{  
	float i;
	float fPotencia=1;
	for(i=1;i<=2;i++)
		fPotencia*=fBase;
	return fPotencia;
}




