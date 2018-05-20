#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	struct Alumno{
		char nombre[20];
		int edad;
		float promedio;
	};

	struct Alumno fi[2];

	/* Manejará el indice del arreglo de fi[] */
	int indice = 0;

	/* Se encargara de indicarnos que tipo de dato leemos 0.- String, 1.- Int, 2.- Float */
	int dato = 0;

	/* Creamos una variable temporal para leer el archivo con fscanf*/
	char temporal[0];

	FILE *datos;

	/* Abrimos el archivo */
	datos = fopen("datos.txt", "r");


	/* Preguntamos si existe el archivo*/
	if(datos == NULL){
		printf("No existe el archivo\n");
		return 0;
	}


	/* Empezamos a leer el archivo en caso de que exista */
	while(indice < 2){
		fscanf(datos, "%s[^\n]",  fi[indice].nombre);
		printf("%c",fgetc(datos));

		fscanf(datos, "%d",  &fi[indice].edad);
		printf("%c",fgetc(datos));

		fscanf(datos, "%f",  &fi[indice].promedio);
		printf("%c",fgetc(datos));

		// fgetc(datos);
		// printf("%s", temporal);
		// if(dato == 0){
		// 	strcpy(fi[indice].nombre, temporal);
		// 	printf("%s\n", fi[indice].nombre);
		// }
		// else if(dato == 1){
		// 	fi[indice].edad = atoi(temporal);
		// }
		// else{
		// 	fi[indice].promedio = atof(temporal);
		// }
		indice = indice + 1;
		printf("%d\n", indice);

	}

	fclose(datos);

	printf("%s\n", fi[0].nombre);
	printf("%d\n", fi[0].edad);
	printf("%f\n", fi[0].promedio);

	printf("%s\n", fi[1].nombre);
	printf("%d\n", fi[1].edad);
	printf("%f\n", fi[1].promedio);

	printf("\n\n");
	return 0;
}

