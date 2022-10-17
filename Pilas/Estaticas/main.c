#include <stdio.h>
#include <malloc.h>

//Pila estatica



//Funciones de manejo




//Estructuras
typedef struct {
    int valor;
    int posicion;
}Elemento;

typedef struct{
    int contador;
    int tope;
    Elemento  *datos;
}Pila;





int main() {
    Pila *pila01=malloc(sizeof(Pila));


    return 0;
}
