#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertirTexto(char*texto){
	while (*texto){
		if (*texto>='a'&&*texto<='z'){
			*texto=*texto-('a'-'A');
		}
		else if (*texto>='A'&&*texto<='Z'){
			*texto=*texto+('a'-'A');
		}
		texto++;
	}
}
	int main(){
		char texto[100];
		printf("Ingrese un texto (menos de 100 caracteres): ");
		fgets(texto,sizeof(texto),stdin);
		invertirTexto(texto);
		printf("Su texto invertido es: %s\n",texto);
		system("pause");
		return 0;
	}
