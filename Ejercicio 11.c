#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cadenainvertida(char*cadena){
	char i,j,longi;
	char longitud;
	char temporal;
	printf("Introduce un texto (menos de 50 caracteres): ");
	gets(cadena);
	longitud=strlen(cadena);
	j=longitud-1;
	for (i=0; i<longitud/2; i++)
	{
		temporal=cadena[i];
		cadena[i]=cadena[j];
		cadena[j]=temporal;
		j--;
	}
	printf("Resultado: %s\n", cadena);
}
int main(){
	char cadena[50];
	
	cadenainvertida(cadena);
	
	system("pause");
	return 0;
}
