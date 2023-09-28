#include <stdio.h>
#include <stdlib.h>

void orden(int*vector){
	int positivos[8];
	int negativos[8];
	int i, j, temp;
	int num_positivos=0;
	int num_negativos=0;
	printf("Ingrese 8 números enteros distintos de cero:\n");
	for (i=0;i<8;i++) {
		scanf("%d", &vector[i]);
		if (vector[i]>0) {
			positivos[num_positivos]=vector[i];
			num_positivos++;
		} else if(vector[i]<0){
			negativos[num_negativos]=vector[i];
			num_negativos++;
		}
	}
	printf("Vector ingresado:\n");
	for (i=0;i<8;i++) {
		printf("%d ", vector[i]);
	}
	printf("\n");
	for (i=0;i<num_positivos-1;i++) {
		for (j=0;j<num_positivos-i-1;j++) {
			if (positivos[j]<positivos[j+1]) {
			temp=positivos[j];
			positivos[j]=positivos[j+1];
			positivos[j+1]=temp;
			}
		}
	}
	for (i=0;i<num_negativos-1;i++) {
		for (j=0;j<num_negativos-i-1;j++) {
			if (negativos[j]>negativos[j+1]) {
			temp=negativos[j];
			negativos[j]=negativos[j+1];
			negativos[j+1]=temp;
			}
		}
	}
	printf("Números positivos ordenados en forma decreciente:\n");
	for (i=0;i<num_positivos;i++) {
		printf("%d ", positivos[i]);
	}
	printf("\n");
	printf("Números negativos ordenados en forma creciente:\n");
	for (i=0;i<num_negativos;i++) {
		printf("%d ", negativos[i]);
	}
	printf("\n");
}

int main() {
	int vector[8];
	
	orden(vector);
	
	system("pause");
	return 0;
}
