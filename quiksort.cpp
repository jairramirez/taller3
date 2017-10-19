#include <stdio.h>

/*Fecha:14 Octubre 2017*/
/*quicksort*/
/*Elaborado por: jair ramirez*/

void qs(int vector[],int limite_izq,int limite_der); 

void Quicksort(int vector[],int n);

void Mostrar_Vector(int vector[],int tam);

int main()
{
	int tam;
	
	printf("Ingrese tamaño del vector:\n");
	scanf("%d",&tam);
	int vector[100];
	
	printf("Ingrese elementos del vector:\n");	
	for (int i=0;i<tam;i++)
	{
		scanf("%d",&vector[i]);
	}
	
	Quicksort(vector,tam);	
	Mostrar_Vector(vector,tam);
	return 0;
}

void qs(int vector[],int limite_izq,int limite_der)
{
	int izq,der,temporal,pivote;
	
	
	izq=limite_izq;
	der = limite_der;
	pivote = vector[(izq+der)/2];

	do{
	    while(vector[izq]<pivote && izq<limite_der)izq++;
		
			while(pivote<vector[der] && der > limite_izq)der--;
			
			if(izq <=der)
			{
				temporal= vector[izq];
				vector[izq]=vector[der];
				vector[der]=temporal;
				izq++;
				der--;
			}
	}while(izq<=der);
	
		if(limite_izq<der)
		{ 
			qs(vector,limite_izq,der);
		}
		if(limite_der>izq)
		{
			qs(vector,izq,limite_der);
		}
	}

void Quicksort(int vector[],int n)
{
	qs(vector,0,n-1);
}

void Mostrar_Vector(int vector[],int tam)
{
	printf("Mostrando Vector Ordenado:\n");
	
	for(int i=0;i<tam;i++)
	{
		printf("%d\n",vector[i]);
	}
}


