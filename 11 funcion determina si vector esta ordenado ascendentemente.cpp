/*Programa que muestra si un vector esta ordenado ascendentemente*/	
/*septiembre 24 de 2017*/
/*Realizado por: Jair Ram�rez*/
#include <stdio.h>
void comparar(int numeros[5]);

int main()
{
	int numeros[5];		
	comparar(numeros);
	return 0;
}
void comparar(int numeros[5])
{
	printf("Ingrese numeros \n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&numeros[i]);
	}
	int contador=0;
	for(int i=0;i<5;i++)
	{
		contador=contador+1;
		if(numeros[contador]< numeros[i])
		{
			break;
		}
	}
	if(contador==5)
	{
		printf("El vector esta ordenado ascendentemente \n");
	}
	else{
		printf("El vector no esta ordenado ascendentemente \n");
	}
	
}


