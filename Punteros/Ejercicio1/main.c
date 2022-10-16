#include <stdio.h>
#include <stdlib.h> //libreria para el malloc

/*Ingresar por teclado un entero que represente el tamaño del puntero, siendo de forma
dinamica y cargar e imprimir sus datos.*/


void asignarValor(int largo, int *punto){

    for(int i=0;i<largo;i++){
        printf("Ingresar un valor: \n");
        scanf("%d",&punto[i]);
    }
}

void Imprimir(int largo, int *punto){
    printf("Valores | ");
    for(int i=0;i<largo;i++){
        printf("%d ",punto[i]);
    }
    printf("|");
}

int main() {
    int *punto;
    int largo;

    printf("Ingresar el largo: ");
    scanf("%d",&largo);
    punto= malloc(largo*sizeof(int));//cantidad de elementos * bits de tipo de elemento

    asignarValor(largo,punto);
    Imprimir(largo,punto);

    free(punto);//libera el espacio de memoria (utilizado cuando no se usara mas el puntero)

    return 0;
}
