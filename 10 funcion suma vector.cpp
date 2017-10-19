/*Programa que suma los numeros de un vector*/	
/*septiembre 24 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>

int sumaNumeros(int numeros[5]);

int main()
{   int numeros[5];
printf("la suma es %d ",sumaNumeros(numeros));

return 0;
}
int sumaNumeros(int numeros[5])
{
	
	int i;
	int suma=0;
	printf("Ingrese numeros \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&numeros[i]);
	}
	for(i=0;i<5;i++)
	{
		suma=suma+numeros[i];
	}
	return suma;
}



