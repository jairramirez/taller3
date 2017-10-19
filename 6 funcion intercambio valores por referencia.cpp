/*Programa que intercambia el valor de dos variables utilizando el paso de parametros*/	
/*septiembre 19 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>
void capturar(int &a,int &b);

int main()

{
	int x,z;
	x=10;
	z=20;
	capturar(x,z);
	printf("los nuevos valores son %d %d",x,z);
	return 0;
}
void capturar(int &a,int &b)
{
	printf("ingrese dos numeros \n");
	scanf("%d %d",&a,&b);
	
}




