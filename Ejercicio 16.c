#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sueldos(char*nombre1,char*nombre2,char*nombre3){
	int fecha1, fecha2, fecha3;
	float sueldo1, sueldo2, sueldo3;
	int antiguo;
	
	printf("Ingrese el nombre del primer empleado: ");
	scanf("%s", nombre1);
	printf("Ingrese la fecha de ingreso del primer empleado: ");
	scanf("%d", &fecha1);
	printf("Ingrese el sueldo del primer empleado: ");
	scanf("%f", &sueldo1);
	
	printf("Ingrese el nombre del segundo empleado: ");
	scanf("%s", nombre2);
	printf("Ingrese la fecha de ingreso del segundo empleado: ");
	scanf("%d", &fecha2);
	printf("Ingrese el sueldo del segundo empleado: ");
	scanf("%f", &sueldo2);
	
	printf("Ingrese el nombre del tercer empleado: ");
	scanf("%s", nombre3);
	printf("Ingrese la fecha de ingreso del tercer empleado: ");
	scanf("%d", &fecha3);
	printf("Ingrese el sueldo del tercer empleado: ");
	scanf("%f", &sueldo3);
	
	antiguo = fecha1;
	if (fecha2 > antiguo)
		antiguo = fecha2;
	if (fecha3 > antiguo)
		antiguo = fecha3;
	
	printf("\nEmpleado más antiguo:\n");
	
	if (fecha1 == antiguo)
		printf("Nombre: %s\nSueldo: %.2f\n", nombre1, sueldo1);
	if (fecha2 == antiguo)
		printf("Nombre: %s\nSueldo: %.2f\n", nombre2, sueldo2);
	if (fecha3 == antiguo)
		printf("Nombre: %s\nSueldo: %.2f\n", nombre3, sueldo3);
	
}
int main() {
	char nombre1[50], nombre2[50], nombre3[50];
	
	sueldos(nombre1,nombre2,nombre3);
	
	
	system("pause");
	return 0;
}
