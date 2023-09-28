#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vocales(char*texto){
	int contva=0,contve=0,contvi=0,contvo=0,contvu=0,i=0;
	
	printf("Ingrese un texto (menos de 50 caracteres): ");
	gets(texto);
	while(texto[i]){
		if(texto[i]=='a')
			contva=contva+1;
		if(texto[i]=='e')
			contve=contve+1;
		if(texto[i]=='i')
			contvi=contvi+1;
		if(texto[i]=='o')
			contvo=contvo+1;
		if(texto[i]=='u')
			contvu=contvu+1;
		
		i++;
	}
	printf("La cantidad de la vocal a es: %d \n",contva);
	printf("La cantidad de la vocal a es: %d \n",contve);
	printf("La cantidad de la vocal a es: %d \n",contvi);
	printf("La cantidad de la vocal a es: %d \n",contvo);
	printf("La cantidad de la vocal a es: %d \n",contvu);
}
int main() {
	char texto[50];
	
	vocales(texto);

	system("pause");
	return 0;
}
