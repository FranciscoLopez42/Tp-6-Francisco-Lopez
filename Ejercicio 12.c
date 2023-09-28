#include <stdio.h>
#include <stdlib.h>

int palindromo(char texto[]){
	int izquierda=0;
	int derecha=0;
	while(texto[derecha]!='\0'){
		derecha++;
	}
	derecha--;
	while(derecha>izquierda){
		if(texto[izquierda]!=texto[derecha]){
			return 0;
		}
		izquierda++;
		derecha--;
	}
	return 1;
}

int main(){
	char texto[100];
	printf("Ingrese un texto (menos de 100 caracteres): ");
	gets(texto);
	if(palindromo(texto)){
		printf("Es un palindromo \n");
	}else{
		printf("No es un palindromo \n");
	}
	
	system("pause");
	return 0;
}
