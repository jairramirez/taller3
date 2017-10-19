#include <stdio.h>

void mayor(int matriz[2][3]);

int main() 
{
	int matriz[2][3];	
	mayor( matriz);
	return 0;
}
void mayor(int matriz[2][3])
{
	int i,j;
	int reciente;
	int numFila;
	int mes;
	int dias;
	printf("ingrese fechas \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matriz[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d ",matriz[i][j]);
		}
		printf("  \n");
	}
	reciente=matriz[1][2];
	mes=matriz[1][1];
	dias=matriz[1][0];
	if(matriz[0][2]==reciente)
	{
		if(matriz[0][1]==mes)
		{
			if(matriz[0][0]>dias)
			{
				numFila=0;
			}
			else
			{
				numFila=1;
			}
		}
		if(matriz[0][1]>mes)
		{
			numFila=0;	
		}
		else
		{
			numFila=1;
		}
	}
	
	if(matriz[0][2]>reciente)
	{
		reciente=matriz[0][2];
		numFila=0;
	}
	else{
		numFila=1;
	}
	printf("la fecha mas reciente es: \n");
	for(j=0;j<3;j++){
		printf("%d  ",matriz[numFila][j]);
	}
	
}
