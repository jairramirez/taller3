/*Programa que determina el numero menor de una fila en una matriz*/	
/*septiembre 26 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>
void menorFila(int matriz[3][3]);


int main()
{
	int matriz[3][3];
	menorFila(matriz);
	
	return 0;
}
void menorFila(int matriz[3][3])
{
	int i,j;
	int menor;
	int numeroFila;
	printf("ingrese elementos matriz \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("mostranado matriz \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",matriz[i][j]);
		}
		printf("\n");
	}
	printf("ingrese numero de fila \n");
	scanf("%d",&numeroFila);
	int numFila=numeroFila-1;
	menor=matriz[numFila][0];
	
	for(j=0;j<3;j++)
	{
		
		if(matriz[numFila][j]<menor)
		{
			menor=matriz[numFila][j];	
		}
	}
	printf("el numero menor es %d",menor);
}


