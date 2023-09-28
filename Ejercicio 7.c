#include <stdio.h>
#include <stdlib.h>

void tcorredores(int*tiempos){
	int i,primerPuesto,segundoPuesto,ultimoPuesto;
	float tiempoPromedio=0;
	printf("Ingrese los tiempos de los 10 corredores:\n");
	for (i=0;i<10;i++) {
		printf("Corredor %d: ",i+1);
		scanf("%d",&tiempos[i]);
	}
	for (i=0;i<10;i++) {
		tiempoPromedio=tiempoPromedio+tiempos[i];
	}
	tiempoPromedio/=10;
	primerPuesto=segundoPuesto=ultimoPuesto=tiempos[0];
	for (i=1;i<10;i++) {
		if (tiempos[i]<primerPuesto) {
			segundoPuesto=primerPuesto;
			primerPuesto=tiempos[i];
		} else if (tiempos[i]<segundoPuesto) {
			segundoPuesto = tiempos[i];
		}
		
		if (tiempos[i]>ultimoPuesto) {
			ultimoPuesto=tiempos[i];
		}
	}
	printf("Primer puesto: %d\n",primerPuesto);
	printf("Segundo puesto: %d\n",segundoPuesto);
	printf("Ultimo puesto: %d\n",ultimoPuesto);
	printf("Tiempo promedio: %.2f\n",tiempoPromedio);
}
	
int main() {
	int tiempos[10];
	
	tcorredores(tiempos);
	
	system("pause");
	return 0;
}
