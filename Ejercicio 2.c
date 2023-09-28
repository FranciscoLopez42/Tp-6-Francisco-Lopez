#include <stdio.h>
#include <stdlib.h>

void numeros(int*nums){
	int mayor=0;
	int posmayor=-1;
	int i=0;
	for(i=0;i<7;i++){
		do{
			printf("Ingrese un numero entero y positivo para el elemento %d: \n",i+1);
			scanf("%d",&nums[i]);
		}while(nums[i]<=0);
		if(nums[i]>mayor){
			mayor=nums[i];
			posmayor=i;
		}
	}
	printf("\nContenido del vector\n");
	for(i=0;i<7;i++){
		printf("%d\n",nums[i]);
	}
	printf("El numero mayor es %d y se encuentra en el elemento %d\n",mayor,posmayor+1);
}
int main(){
	int nums[7];
	
	numeros(nums);
	
	system("pause");
	return 0;
}
