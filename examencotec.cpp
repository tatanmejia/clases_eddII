#include <stdio.h>

char nombre[30];
bool estado;

void menu();
void realizar_examen();
bool validar();
int main(){

    menu();
    return 0;
}
void menu(){
    int opcion;
    printf("Bienvenidos a Examenes Cotecnova\n");
    printf("Seleccione una opcion\n");
    printf("1. Realizar Examen\n");
    printf("2. Ver Resultado\n");
    printf("3. Repetir Examen\n");
    printf("0. Salir\n");
    scanf("%d", &opcion);
    switch(opcion){
        case 1: printf("Has seleccionado 1 => Realizar Examen\n");
            realizar_examen();
            break;
        case 2: printf("Has seleccionado 2 => Ver Resultados\n");
            break;
        case 3: printf("Has seleccionado 3 => Repetir Examen\n");
            break;
        case 0: printf("Has seleccionado 0 => Salir\n");
            break;
        default: printf("No es una opción válida, intentalo de nuevo\n");

    }
}
void realizar_examen(){

    printf("Realizar Examen \n");
    if((validar() == true)){
        printf("El usuario ya hizo el examen, solo tenia un intento \n");
    }else{
        printf("Haz realizado el examen \n");
    }
    menu();
}
bool validar(){
    return true;
}
