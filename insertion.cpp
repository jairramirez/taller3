#include <stdio.h>
/*fecha 16 octubre 2017*/
/*insertion*/
/*realizado por jair ramirez*/

void Insercion(int vector[],int longitud);

int vector[100],longitud;

int main() {
	Insercion(vector,longitud);
	return 0;
}
void Insercion(int vector[],int longitud){
	int i,a,indice;
	printf("Ingrese longitud \n");
	scanf("%d",&longitud);
	
	printf("Ingrese los elementos del vector \n");
	for(i=0;i<longitud;i++){
		scanf("%d",&vector[i]);
	}
	printf("Elementos ordenados \n");
	for(i=1;i<longitud;i++){
		indice=vector[i];
		a=i-1;
		while(a>=0&&vector[a]>indice){
			vector[a + 1]=vector[a];
			a--;
		}
		vector[a+1]=indice;
	}
	for(i=0;i<longitud;i++){
		printf("%d\n",vector[i]);
	}
}
