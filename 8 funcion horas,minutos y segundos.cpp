/*Programa que toma un valor en segundos y lo covierte a horas, minutos y segundos */	
/*septiembre 24 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>
void tiempo(int valor,int &h,int &m,int &s);


int main()
{
	int totalSegundos;
	int horas=1;
	int minutos=2;
	int segundos=3;
	
	printf("Ingres valor en segundos \n");
	scanf("%d",&totalSegundos);
	tiempo(totalSegundos,horas,minutos,segundos);
	printf("El tiempo en  %d horas,  %d minutos, %d segundos",horas,minutos,segundos);
	
	return 0;
}
void tiempo(int valor,int &h,int &m,int &s)
{
	h=valor/3600;
	valor%=3600;
	m=valor/60;
	valor%=60;
	s=valor/1;
	
}






