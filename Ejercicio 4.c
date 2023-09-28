#include <stdio.h>
#include <stdlib.h>

void numeros(int*nums){
	int num1,num2,contador=0,i=0;
	for(i=0;i<8;i++){
		scanf("%d",&nums[i]);
	}
	printf("Ingrese los numeros adicionales: \n");
	scanf("%d %d",&num1, &num2);
	for(i=0;i<8;i++){
		if(nums[i]==num1 || nums[i]==num2){
			printf("El numero %d se encuentra en la posicion %d\n",nums[i],i+1);
			contador++;
		}
	}
	if(contador>0){
		printf("El numero %d se repite %d veces en la secuencia. \n",num1,contador);
	}else{
		printf("Los numeros ingresados no se repiten en la secuencia. \n");
	}
}
int main(){
	int nums[8];
	printf("Ingrese los 8 numeros: \n");
	
	numeros(nums);
	
	system("pause");
	return 0;
}
