#include <stdio.h>
#include <stdlib.h>

void orden(int*vector){
	int i, j, temp;
	printf("Ingrese 7 valores enteros positivos:\n");
	for (i=0;i<7;i++) {
		scanf("%d", &vector[i]);
	}
	for (i=0;i<7-1;i++) {
		for (j=0;j<7-i-1;j++) {
			if (vector[j]>vector[j+1]) {
				temp=vector[j];
				vector[j]=vector[j+1];
				vector[j+1]=temp;
			}
		}
	}
	printf("Vector ordenado de menor a mayor:\n");
	for (i=0;i<7;i++) {
		printf("%d ", vector[i]);
	}
}
int main() {
	int vector[7];

	orden(vector);
	
	system("pause");
	return 0;
}
