#include <stdio.h>
#include <stdlib.h>

void numeros(int*nums){
	int i=0;
	for(i=0;i<6;i++){
		printf("Ingrese el elemento: ");
		scanf("%d",&nums[i]);
	}
	for(i=0;i<6;i++){
		printf("%d\n",nums[i]);
	}
}
int main(){
	int nums[6];
	
	numeros(nums);
	
	system("pause");
	return 0;
}
