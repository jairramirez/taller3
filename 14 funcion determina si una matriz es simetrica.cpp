/*Programa que determina si una matriz es simetrica o no*/	
/*septiembre 26 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>
void matrizSimetrica(int matriz[3][3]);

int main()
{
	int matriz[3][3];
	matrizSimetrica( matriz);
	
	return 0;
}
void matrizSimetrica(int matriz[3][3])
{
	int i,j;
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
	int contador=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(matriz[i][j]==matriz[j][i])
			{
				contador=contador+1;
			}
		}
	}
	if(contador==9)
	{
		printf("La matriz es simetrica \n");
	}else{
		printf("La matriz no es simetrica \n");
	}
}
