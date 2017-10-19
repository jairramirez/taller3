/*programa que calcula la potencia de un numero positivo e imprime su potencia  */
/*septiembre 19 de 2017*/
/*Realizadopor : Jair Ramírez*/
#include <stdio.h>
int fun_po(int n,int p);

int main()
{
	int n,p,potencia;
	printf("ingrese base y potencia \n");
	scanf("%d %d",&n,&p);
	
	
	printf("La potencia es %d",fun_po(n,p));
	
	return 0;
}
int fun_po(int n,int p)
{
	int i,potencia=1;
	for(i=1;i<=p;i++)
	{
		potencia=potencia*n;
	}
	return potencia;
}



