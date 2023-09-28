#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void promedio(int nota,char*apellido){
	int alu,mate,i=0,may='a'-'A';
	float acu,promAlu,promCur;	
	for (alu=1;alu<4;alu++){
		printf("Ingrese el apellido del alumno: ");
		scanf("%s",apellido);
		if (apellido[i]>='a' && apellido[i]<='z'){
			apellido[i]=apellido[i]-may;
			printf("Su apellido es: %s. \n",apellido);
		}
		for (mate=1;mate<6;mate++){
			printf("Ingrese nota nro:%d\n",mate);
			scanf("%d",&nota);
			acu=acu+nota;
		}
		promAlu=acu/5;
		printf("El promedio del alumno es:%f\n",promAlu);
		promCur=promAlu+promCur;
		acu=0;
	}
	printf("El promedio de notas es:%f",promCur/5);
}
int main() {
	int nota;
	char apellido[20];
	
	promedio(nota,apellido);
	system("pause");
	return 0;
}
