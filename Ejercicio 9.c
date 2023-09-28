#include <stdio.h>
#include <stdlib.h>

void orden(int*vector){
	int i, j, temp;
	printf("Ingrese 8 valores enteros positivos:\n");
	for (i=0;i<8;i++) {
		scanf("%d", &vector[i]);
	}
	printf("Vector ingresado:\n");
	for (i=0; i<8;i++) {
		printf("%d ", vector[i]);
	}
	printf("\n");
	for (i=0;i<8-1;i++) {
		for (j=0;j<8-i-1;j++) {
			if (vector[j]<vector[j+1]) {
				temp=vector[j];
				vector[j]=vector[j+1];
				vector[j+1]=temp;
			}
		}
	}
	printf("Vector ordenado en forma decreciente:\n");
	for (i=0;i<8;i++) {
		printf("%d ", vector[i]);
	}
}
int main() {
	int vector[8];

	orden(vector);
	
	system("pause");
	return 0;
}
