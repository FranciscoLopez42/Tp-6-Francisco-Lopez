#include <stdio.h>
#include <stdlib.h>

void numeros(int num){
	int nums[20];
	int pares[20];
	int impares[20];
	int resultado=0;
	int i=0,j=0,p=0,imp=0;
	printf("Ingrese 20 numeros enteros (ingrese el 0 para salir de la operacion): \n");
	do{
		printf("Numero %d: ",i+1);
		scanf("%d",&num);
		if(num!=0){
			nums[i]=num;
			resultado=nums[i]%2;
			if(resultado==0){
				pares[p]=num;
				p++;
			}else{
				impares[imp]=num;
				imp++;
			}
			i++;
		}
	} while(num!=0 && i<20);
	printf("Numeros pares ingresados \n");
	for(i=0;i<p;i++){
		printf("%d ",pares[i]);
	}
	printf("\nNumeros impares ingresados \n");
	for(j=0;j<imp;j++){
		printf("%d ",impares[j]);
	}
}
int main(){
	int num;
	
	numeros(num);
	
	system("pause");
	return 0;
}
