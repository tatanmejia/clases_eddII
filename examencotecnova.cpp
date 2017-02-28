/*
 *  Programa: Examen Cotecnova
 *  Autor: Carlos Londoño
 *  Fecha: 17 de Febrero 2017
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void menu(char *, int *);
void realizar_examen(char *, int *);
int validacion(int *);
void calificar_examen();
void repetir_examen();
void anular_examen();
void salir();

int main(){
	char nombre[30];
	int estado = 0; //0 => verdadero y 1 => falso
	char *pnombre = nombre;
	int *pestado = &estado;
	printf("Bienvenido a Examenes Cotecnova \n");
	printf("Por favor ingrese su nombre para continuar \n");
	scanf("%s", nombre);
	menu(pnombre, pestado);
	return 0;
}

void menu(char *pnombre, int *pestado){
	int opcion;
	printf("nombre %s\n", pnombre);
	printf("***** MENU *****\n");
	printf("\n");
	printf("1. Realizar Examen \n");
	printf("2. Calificar Examen \n");
	printf("3. Repetir Examen \n");
	printf("0. Salir \n");
	printf("\n");
	printf("***** FIN MENU *****\n");
	printf("Marque el numero de la opcion que desea ejecutar \n");
	printf("Opcion: ");
	scanf("%d", &opcion);
	printf("\n");
	printf("valor ingresado: %d \n", opcion);
	printf("Haz seleccionado: ");
	switch(opcion){
		case 1: printf("1. Realizar Examen\n");
			realizar_examen(pnombre, pestado);
			break;
		case 2: printf("2. Calificar Examen\n");
			calificar_examen();
			break;
		case 3: printf("3. Repetir Examen\n");
			repetir_examen();
			break;
		case 0: printf("0. Salir\n");
			salir();
			break;
		default: printf("Una opcion invalida, por favor intentelo de nuevo.\n");

	}getch();
	system("cls");
	menu(pnombre, pestado);

}
void realizar_examen(char *pnombre, int *pestado){
	int estado;
	printf("***** REALIZAR EXAMEN *****\n");
	estado = validacion(pestado);
	if(estado == 0){
		*pestado = 1;
		printf("Examen realizado con exito \n");

	}else{
		printf("***** ERROR *****\n");

		printf("El examen ya ha sido realizado, no se permite volverlo a presentar, por favor vaya al menu y seleccione calificar examen \n");
	}
	printf("\n");

}
int validacion(int *pestado){
	return *pestado;
}
void calificar_examen(int *pestado){
    int verificar;
    verificar=validacion(pestado);
	printf("***** CALIFICAR EXAMEN *****\n");
	if(verificar == 1)
        {   printf("Examen calificado con exito \n");
            printf("\nCalificacion: 10 de 10 \n");
        }else{  printf("***** ERROR *****\n");
                printf("No se pueden mostrar resultados.\n");
             }
	printf("\n");
}
void repetir_examen(){
	printf("***** REPETIR EXAMEN *****\n");
	printf("\n");
}
void anular_examen(){
	printf("***** ANULAR EXAMEN *****\n");
	printf("\n");
}
void salir(){
	printf("***** SALIR *****\n");
	printf("\n");
	exit(0);
}
