/*Programa que toma un valor total de dias desde el 1/1/2000 y muestra la fecha actual */	
/*septiembre 24 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>
void calcularAnios(int valor,int &a,int &m,int &d);
int main()
{
	int totalDias;
	int anios=1;
	int meses=2;
	int dias=3;
	
	printf("Ingres valor en dias \n");
	scanf("%d",&totalDias);
	calcularAnios(totalDias,anios,meses,dias);
	printf("La fecha es año %d ,  mes %d,dia %d",anios,meses,dias);
	
	return 0;
}
void calcularAnios(int valor,int &a,int &m,int &d)
{
	a=valor/365+2000;
	valor%=365;
	m=valor/30+1;
	valor%=30;
	d=valor/1+1;
	
}


