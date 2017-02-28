#include <stdlib.h>
#include <stdio.h>

struct nombre{

    char nom;
    nodo *siguiente;

}*inicio;
int main(){

nodo *uno=(nodo*)malloc(char);
nodo *dos=(nodo*)malloc(char);
nodo *tres=(nodo*)malloc(char);
nodo *cuatro=(nodo*)malloc(char);
nodo *cinco=(nodo*)malloc(NULL);
inicio=uno;
uno->siguiente=dos;
dos->siguiente=tres;
tres->siguiente=cuatro;
cuatro->siguiente=cinco;
cinco->siguiente=NULL;

uno->nom=j;
dos->nom=l;
tres->nom=b;
cuatro->nom=m;

}



printf("%c%c%c%c\n" ,inicio->siguiente->nom->siguiente->nom->siguiente->nom);

return 0;


}
