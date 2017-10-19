#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu();
int crearVector();
void llenarVector(int [], int);
bool esPrimo(int);
void imprimirVector(int [], int);
void ordenarVector(int [], int);

int main(){
	menu();
	return 0;
}

void menu(){
	int vector[100];
	int longitud;
	int opcion;
	do{
		printf("MENU\n\n");
		printf("1. Crear Vector\n");
		printf("2. Llenar Vector \n");
		printf("3. Mostrar Vector\n");
		printf("4. Ordenar Vector\n");
		printf("0. Salir\n\n");
		printf("Ingrese su opcion: ");
		scanf("%d", &opcion);
		switch(opcion){
			case 0:
				exit(0);
				break;
			case 1:
				longitud = crearVector();
				break;
			case 2:
				llenarVector(vector, longitud);
				break;
			case 3:
				imprimirVector(vector, longitud);
				break;
			case 4:
				ordenarVector(vector, longitud);
				break;
			default:
				printf("Opcion Invalida\n");
		}
	}while(opcion != 0);
}

int crearVector(){
	int longitud;
	printf("Ingrese la longitud del vector: ");
	scanf("%d", &longitud);
	return longitud;
}

void llenarVector(int vector[], int longitud){
	int aleatorio, cont = 0;
	srand(time(NULL));
	while(cont != longitud){
		aleatorio = (rand() % (10000));
		if(esPrimo(aleatorio)){
			vector[cont] = aleatorio;
			cont += 1;
		}
	}
}

bool esPrimo(int aleatorio){
	int cont, primo = 0;
	for(cont = 1; cont <= aleatorio; cont++){
		if(aleatorio % cont == 0){
			primo += 1;
		}
		if(primo > 2){
			break;
		}
	}
	return (primo == 2) ? true : false;
}

void imprimirVector(int vector[], int longitud){
	int cont;
	for(cont = 0; cont < longitud; cont++){
		printf("%d ", vector[cont]);
	}
}

void ordenarVector(int vector[], int longitud){
	int x, y, aux;
	for(x = 0; x < (longitud - 1); x++){
		for(y = x + 1; y < longitud; y++){
			if(vector[x] > vector[y]){
				aux = vector[x];
				vector[x] = vector[y];
				vector[y] = aux;
			}
		}
	}
}
