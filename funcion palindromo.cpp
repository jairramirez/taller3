#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int llenarArreglo(char cadena[100],int &tamanio);
bool verifica(char cadena[100],int tamanio);


int main()
{
	int contador=0;
	char cadena[100];
	
	printf ("ingrese un numero o palabra\n ");
	scanf ("%s",&cadena);
		llenarArreglo(cadena,contador);
		
		if(verifica(cadena,contador))
		{
			printf("es palindromo \n");
		}
		else{
			printf("no es palindromo \n");
		}
		
	return 0;
}
int llenarArreglo(char cadena[100],int &tamanio)
{
    int i;
	
	for (i=0; i<=100; i++){
		
		if (cadena[i]!='\0'){
			
			tamanio++;
		}else{ 
			
			break;
		}
	}

	return tamanio;
}

bool verifica(char cadena[100],int tamanio)
{
	for(int i=0;i<tamanio;i++)
	{
		int ultimo=tamanio-1;
		int inicio=ultimo-i;
	if(	cadena[i]!=cadena[inicio])
	{
		return false;
	}
 }
	
		return true;

	
	
}
