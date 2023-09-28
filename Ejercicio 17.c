#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  

void edades(char*persona){
	int dia,dia1,dia2,dia3,mes,mes1,mes2,mes3,anio,anio1,anio2,anio3,edad,edad1,edad2,edad3,i,a,b,em1,em2,em3,dm1,dm2,dm3; 
	char resp[2]; 
	char nom1[20]; 
	char nom2[20]; 
	char nom3[20]; 
	char nomau[20]; 
	for ( i = 0; i < 3; i++) { 
		printf("Ingrese el nombre de la persona %d: ", i + 1); 
		scanf("%s", persona); 
		printf("Ingrese el día de nacimiento: "); 
		scanf("%d", &dia); 
		printf("Ingrese el mes de nacimiento: "); 
		scanf("%d", &mes); 
		printf("Ingrese el año de nacimiento: "); 
		scanf("%d", &anio);
		if (mes == 2) { 
			if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) { 
				while (dia < 1 || dia > 29) { 
					printf("Día inválido para febrero en un año bisiesto. Ingrese nuevamente.\n"); 
					printf("Ingrese el día de nacimiento: "); 
					scanf("%d", &dia); 
				} 
			} else { 
				while (dia < 1 || dia > 28) { 
					printf("Día inválido para febrero. Ingrese nuevamente.\n"); 
					printf("Ingrese el día de nacimiento: "); 
					scanf("%d", &dia); 
				} 
			} 
		} 
		while (anio > 2023 || anio< 0 || mes < 1 || mes > 12 || dia < 1 || dia > 31) { 
			printf("Fecha inválida. Ingrese nuevamente.\n");
			printf("Ingrese el día de nacimiento: "); 
			scanf("%d", &dia);
			printf("Ingrese el mes de nacimiento: "); 
			scanf("%d", &mes);
			printf("Ingrese el año de nacimiento: "); 
			scanf("%d", &anio);
		}
		edad=2023-anio; 
		if (i==0) { 
			strcpy(nom1, persona);
			edad1=edad;
			em1=6-mes;
			dm1=29-dia;
			anio1=anio;
			mes1=mes;
			dia1=dia;
		} 
		else { 
			if (i==1){
				strcpy(nom2, persona);
				edad2=edad; 
				em2=6-mes; 
				dm2=29-dia; 
				anio2=anio; 
				mes2=mes; 
				dia2=dia; 
			} 
			else { 
				strcpy(nom3, persona); 
				edad3=edad; 
				em3=6-mes; 
				dm3=29-dia; 
				anio3=anio; 
				mes3=mes;
				dia3=dia;
			} 
		}
	} 
	a=1;
	while(a!=0){ 
		printf("Ingrese si quiere vambiar el las fechas Si o No: ");
		scanf("%s",&resp);
		if ((strcmp(resp,"Si")==0)||(strcmp(resp,"si")==0)){	
			while (b!=0) { 
				printf("Ingrese nombre:"); 
				scanf("%s",&nomau); 
				if (strcmp(nomau,nom1)==0){ 
					printf("Ingrese el día de nacimiento: ");
					scanf("%d", &dia); 
					printf("Ingrese el mes de nacimiento: "); 
					scanf("%d", &mes); 
					printf("Ingrese el año de nacimiento: "); 
					scanf("%d", &anio); 
					while (anio > 2023 || anio<0 ||mes < 1 || mes > 12 || dia < 1 || dia > 31) { 
						printf("Fecha inválida. Ingrese nuevamente.\n"); 
						printf("Ingrese el día de nacimiento: "); 
						scanf("%d", &dia); 
						printf("Ingrese el mes de nacimiento: "); 
						scanf("%d", &mes); 
						printf("Ingrese el año de nacimiento: "); 
						scanf("%d", &anio); 
						if (mes == 2) { 
							if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) { 
								while (dia < 1 || dia > 29) { 
									printf("Día inválido para febrero en un año bisiesto. Ingrese nuevamente.\n"); 
									printf("Ingrese el día de nacimiento: "); 
									scanf("%d", &dia); 
								} 
							} else { 
								while (dia < 1 || dia > 28) { 
									printf("Día inválido para febrero. Ingrese nuevamente.\n"); 
									printf("Ingrese el día de nacimiento: "); 
									scanf("%d", &dia); 
								} 
							} 
						} 
					} 
					edad=2023-anio;
					em1=6-mes; 
					dm1=29-dia; 
					edad1=edad; 
					anio1=anio; 
					mes1=mes; 
					dia1=dia; 
					b=0; 
				}else{ 
					if (strcmp(nomau,nom2)==0) { 
						printf("Ingrese el día de nacimiento: "); 
						scanf("%d", &dia); 
						printf("Ingrese el mes de nacimiento: "); 
						scanf("%d", &mes); 
						printf("Ingrese el año de nacimiento: ");
						scanf("%d", &anio); 
						while (anio > 2023 || anio<0 ||mes < 1 || mes > 12 || dia < 1 || dia > 31) 
						{							printf("Fecha inválida. Ingrese nuevamente.\n"); 
						printf("Ingrese el día de nacimiento: "); 
						scanf("%d", &dia); 
						printf("Ingrese el mes de nacimiento: ");
						scanf("%d", &mes);							printf("Ingrese el año de nacimiento: ");
						scanf("%d", &anio);
						if (mes == 2) {
							if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
								while (dia < 1 || dia > 29) {
									printf("Día inválido para febrero en un año bisiesto. Ingrese nuevamente.\n");
									printf("Ingrese el día de nacimiento: ");
									scanf("%d", &dia);
								}
							} else { 
								while (dia < 1 || dia > 28){ 
									printf("Día inválido para febrero. Ingrese nuevamente.\n"); 
									printf("Ingrese el día de nacimiento: ");
									scanf("%d", &dia);
								} 
							} 
						} 
						} 
						edad=2023-anio;
						em2=6-mes;
						dm2=29-dia;
						edad2=edad;
						anio2=anio;
						mes2=mes;
						dia2=dia;
						b=0;
					} else{
						if (strcmp(nomau,nom3)==0) { 
							printf("Ingrese el día de nacimiento: ");
							scanf("%d", &dia); 
							printf("Ingrese el mes de nacimiento: "); 
							scanf("%d", &mes); 
							printf("Ingrese el año de nacimiento: ");
							scanf("%d", &anio);
							while (anio > 2023 || anio<0 ||mes < 1 || mes > 12 || dia < 1 || dia > 31) {
								printf("Fecha inválida. Ingrese nuevamente.\n");
								printf("Ingrese el día de nacimiento: ");
								scanf("%d", &dia);
								printf("Ingrese el mes de nacimiento: ");
								scanf("%d", &mes);
								printf("Ingrese el año de nacimiento: ");
								scanf("%d", &anio);
								if (mes == 2) {
									if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
										while (dia < 1 || dia > 29) {
											printf("Día inválido para febrero en un año bisiesto. Ingrese nuevamente.\n");
											printf("Ingrese el día de nacimiento: ");
											scanf("%d", &dia);
										}
									} else {
										while (dia < 1 || dia > 28) {
											printf("Día inválido para febrero. Ingrese nuevamente.\n");
											printf("Ingrese el día de nacimiento: "); 
											scanf("%d", &dia);
										}
									}
								}
							}
							edad=2023-anio;
							em3=6-mes;
							dm3=29-dia;
							edad3=edad;
							anio3=anio;
							mes3=mes;
							dia3=dia;
							b=0;
						}	
					} 
				}	
			} 
			b=1;
		}
		else  									 {	 
			if ((strcmp(resp,"No")==0)||(strcmp(resp,"no")==0)) { 
				a=0; 
			} 
			else{ 
				printf("Respuesta incorrecta"); 
				a=1;
			} 			
		} 		
	}	 
	if ((edad1 > edad2 && edad1 > edad3) || (edad1 == edad2 && em1 > em2) || (edad1 == edad2 && em1 == em2 && dm1 > dm2) || (edad1 == edad3 && em1 > em3) || (edad1 == edad3 && em1 == em3 && dm1 > dm3)){
		printf("Primero: %s\n", nom1);
		if (edad2 > edad3 || (edad2 == edad3 && em2 > em3) || (edad2 == edad3 && em2 == em3 && dm2 > dm3)){
			printf("Segundo: %s\n", nom2);
			printf("Tercero: %s\n", nom3);
		}
		else{
			printf("Segundo: %s\n", nom3);
			printf("Tercero: %s\n", nom2);
		}
	}
	else{
		if ((edad2 > edad1 && edad2 > edad3) || (edad2 == edad3 && em2 > em3) || (edad2 == edad3 && em2 == em3 && dm2 > dm3)){
			printf("Primero: %s\n", nom2);
			
			if (edad1 > edad3 || (edad1 == edad3 && em1 > em3) || (edad1 == edad3 && em1 == em3 && dm1 > dm3)){
				printf("Segundo: %s\n", nom1);
				printf("Tercero: %s\n", nom3);
			}
			else{
				printf("Segundo: %s\n", nom3);
				printf("Tercero: %s\n", nom1);
			}
		}
		else{
			printf("Primero: %s\n", nom3);
			if (edad1 > edad2 || (edad1 == edad2 && em1 > em2) || (edad1 == edad2 && em1 == em2 && dm1 > dm2)){
				printf("Segundo: %s\n", nom1);
				printf("Tercero: %s\n", nom2);
			}
			else{
				printf("Segundo: %s\n", nom2);
				printf("Tercero: %s\n", nom1);
			}
		}
	}
}
int main(){ 
	char persona [20]; 
	
	edades(persona);
	
	system("pause");
	return 0;
}
