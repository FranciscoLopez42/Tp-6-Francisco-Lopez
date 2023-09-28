#include <stdio.h>
#include <stdlib.h>

void arreglos(int*arreglo){
	int maximo,minimo;
	int conmax=0,conmin=0;
	int i=0;
	printf("Ingrese 10 valores enteros: \n");
	for(i=0;i<10;i++){
		scanf("%d",&arreglo[i]);
	}
	maximo=arreglo[0];
	minimo=arreglo[0];
	for(i=1;i<10;i++){
		if(arreglo[i]>maximo){
			maximo=arreglo[i];
			conmax=1;
		}else if(arreglo[i]==maximo){
			conmax++;
		}
		if(arreglo[i]<minimo){
			minimo=arreglo[i];
			conmin=1;
		}else if(arreglo[i]==minimo){
			conmin++;
		}
	}
	printf("El valor maximo es %d y se repite %d veces \n",maximo,conmax);
	printf("El valor minimo es %d y se repite %d veces \n",minimo,conmin+1);
}
int main(){
	int arreglo[10];

	arreglos(arreglo);
	
	system("pause");
	return 0;
}
