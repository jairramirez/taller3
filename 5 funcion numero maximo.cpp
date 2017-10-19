/*Programa que devuelve el valor maximo de tres argumentos que se trasmiten de una funcion cuando sea llamada*/
/*septiembre 19 de 2017*/
/*Realizadopor : Jair Ramírez*/
#include <stdio.h>

int dMaximo(int a,int b,int c);

int main()
{
	int a,b,c;
	int dMaxi;
	printf("ingrese numeros \n");
	scanf("%d %d %d",&a,&b,&c);
	printf("El valor maximo es %d ",dMaximo(a,b,c));
	return 0;
}
int dMaximo(int a,int b,int c)
{
	int dMaxi;
	int i;
	
	if(a>b && a>c)
	{
		dMaxi=a;
	}else{
		if(b>a && b>c)
		{
			dMaxi=b;
		}else{
			if(c>a && c>b)
			{
				dMaxi=c;
			}
		}
		
		
	}
	return dMaxi;
}


