#include <stdio.h>
#include <stdlib.h>

int numerocompras(int numcompras){
	int gastos[10];
	int total=0;
	int mayor=0;
	int i=0;
	if(numcompras>10){
		printf("El numero de compras excede el maximo permitido \n");
		system("pause");
		return 0;
	}
	for(i=0;i<numcompras;i++){
		printf("Ingrese el gasto de la compra %d:\n",i+1);
		scanf("%d",&gastos[i]);
		total=total+gastos[i];
		if(gastos[i]>mayor){
			mayor=gastos[i];
		}
	}
	printf("La mayor compra fue: %d\n",mayor);
	printf("El monto total de las compras fue: %d\n",total);
}
int main(){
	int numcompras;
	printf("Ingrese el numero de compras (10 como maximo): ");
	scanf("%d",&numcompras);
	
	numerocompras(numcompras);
	
	system("pause");
	return 0;
}
