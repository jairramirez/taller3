#include <stdio.h>
#include<stdlib.h>
/*Merge*/
/*Fecha:16 Octubre 2017*/
/*Elaborado por: jair ramirez*/
void Mezclar(int vector1[],int n1,int vector2[],int n2,int vector3[]);

void Mezcla(int vector[],int n);

void mostrarVector(int vector[],int n);

int main()
{	
	
	int vector[100],i;
	int tam,aleatorio;
	printf("Ingrese tamaño del vector:\n");	
	scanf("%d",&tam);
	for(i=0;i<tam;i++){
		aleatorio = (rand()%999998)-999999;
		vector[i]=aleatorio;
		printf("%d\n",vector[i]);		
	}	
	Mezcla(vector,tam);
	mostrarVector(vector,tam);
	return 0;
}

void Mezclar(int vector1[],int n1,int vector2[],int n2,int vector3[])
{
	int x1=0;
	int x2=0;
	int x3=0;
	
	while(x1<n1 && x2<n2)
	{
		if(vector1[x1]<vector2[x2])
		{
			vector3[x3]=vector1[x1];
			x1++;
		}else{
			vector3[x3]=vector2[x2];
			x2++;
		}
		x3++;
	}
	while(x1<n1)
	{
		vector3[x3]=vector1[x1];
		x1++;
		x3++;
	}
	while(x2<n2)
	{
		vector3[x3]=vector2[x2];
		x2++;
		x3++;
	}	
}

void Mezcla(int vector[],int n)
{
	int *vector1,*vector2,n1,n2,x,y;
	if(n>1)
	{
		if(n%2==0)
		{
			n1=n2=(int)n/2;
		}else{
			n1=(int)n/2;
			n2=n1+1;
		}
		vector1=(int*)malloc(sizeof(int)*n1);
		vector2=(int*)malloc(sizeof(int)*n2);
		for(x=0;x<n1;x++)
		{
			vector1[x]=vector[x];
		}
		for(y=0;y<n2;y++)
		{
			vector2[y]=vector[x];
		}		
		Mezcla(vector1,n1);
		Mezcla(vector2,n2);
		Mezclar(vector1,n1,vector2,n2,vector);
		free(vector1);
		free(vector2);
	}
}

void mostrarVector(int vector[],int n)
{
	printf("\n Mostrando Vector Ordenado:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",vector[i]);
	}
}
