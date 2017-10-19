/*Programa que toma un valor en dolares y covierte el valor en numero menor de billetes equivalente  */	
/*septiembre 24 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>
void cambio(int valor,int &c100,int &c50,int &c20,int &c10,int &c5,int &c1);


int main()
{
	int v;
	int cien=1;
	int cincuenta=2;
	int veinte=3;
	int diez=4;
	int cinco=5;
	int uno=6;
	printf("Ingres valor dolares \n");
	scanf("%d",&v);
	cambio(v,cien,cincuenta,veinte,diez,cinco,uno);
	printf("El valor de cambio es %d de cien,  %d de cincuenta, %d de veinte, %d diez, %d de cinco, %d de uno ",cien,cincuenta,veinte,diez,cinco,uno);
	
	return 0;
}
void cambio(int valor,int &c100,int &c50,int &c20,int &c10,int &c5,int &c1)
{
	c100=valor/100;
	valor%=100;
	c50=valor/50;
	valor%=50;
	c20=valor/20;
	valor%=20;
	c10=valor/10;
	valor%=10;
	c5=valor/5;
	valor%=5;
	c1=valor/1;
	
	
}

