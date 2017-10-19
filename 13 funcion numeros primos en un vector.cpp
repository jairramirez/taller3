/*Programa que imprime los numeros impares de un vector*/	
/*septiembre 26 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>
void primos(int numeros[100],int tamanio);

int main()
{
	int numeros[100];
	int tamanio;
	primos(numeros,tamanio);
	
	
	return 0;
}
void primos(int numeros[100],int tamanio)
{
	int i;
	printf("ingrese tamaño vector \n");
	scanf("%d",&tamanio);
	printf("ingrese numeros vector \n");
	for(i=0;i<tamanio;i++)
	{
		scanf("%d",&numeros[i]);
	}
	int contador=0;
	
	for(i=0;i<tamanio;i++)
	{
		if(numeros[i]%2==1)
		{
			contador=contador+1;
			printf("los numeros impares del vector son: %d \n",numeros[i]);
		}
	}
	if(contador==0)
	{
		printf("no hay numeros impares en el vector \n");
	}
	
}
