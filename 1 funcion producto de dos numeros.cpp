/*programa que tiene una funcion que recibe dos numeros y muestra su producto*/
/*septiembre 19 de 2017*/
/*Realizadopor : Jair Ramírez*/
#include <stdio.h>

float fMult(float a,float b);

int main()
{
	float a,b;
	printf("ingrese dos numeros \n");
	scanf("%f",&a);
	scanf("%f",&b);
	fMult(a,b);
	
	return 0;
}
float fMult(float a,float b)
{
	float fProducto=a*b;
	printf("El producto es %.0f",fProducto);
}

