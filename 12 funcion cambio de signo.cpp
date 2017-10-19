/*Programa que cambia los signos de los numeros de un vector*/	
/*septiembre 24 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>
void ingresarDatos();
void cambioSignos(int numeros[]);
void mostrarNumeros(int numeros[]);
int numeros[5];
int main()
{
	ingresarDatos();
	cambioSignos(numeros);
	mostrarNumeros(numeros);
	
	return 0;
}
void ingresarDatos()
{
	printf("Ingrese numeros \n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&numeros[i]);
	}
	
}
void cambioSignos(int numeros[])
{
	for(int i=0;i<5;i++)
	{
		numeros[i]=numeros[i]*-1;
	}
}
void mostrarNumeros(int numeros[])
{
	printf("mostrando numeros con signo cambiado \n");
	for(int i=0;i<5;i++)
		printf("%d \n",numeros[i]);
}
