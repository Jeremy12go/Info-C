#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>
#include <string.h>

typedef struct {
    char *seudonimo;
    char *fecha;
    bool vivo;//vivo o muerto
}Persona;

typedef struct {
    char *titulo;
    char clasificacion;
    char *genero;
    char *fecha_estreno;
    Persona *Direcctor;
}Pelicula;

Pelicula Ingresar_datos(char *titulo, char clasificacion, char *genero, char *fecha_estreno,char *seudonimo){

    Pelicula *arreglo=malloc(sizeof (Pelicula));
    Persona *algo=malloc(sizeof (Persona));

    arreglo->titulo= titulo;
    arreglo->clasificacion=clasificacion;
    arreglo->genero=genero;
    arreglo->fecha_estreno=fecha_estreno;

    algo->seudonimo=seudonimo;
    arreglo->Direcctor=algo;
    return *arreglo;
};

void Imprimir(Pelicula arreglo[]){

        printf("Nombre:%s\n", arreglo->titulo);
        printf("Clasificion:%c\n", arreglo->clasificacion);
        printf("Genero:%s\n", arreglo->genero);
        printf("Fecha de estreno:%s\n", arreglo->fecha_estreno);
        printf("Seudonimo:%s\n", arreglo->Direcctor->seudonimo);
}

int main() {
    Pelicula datos[10];

    datos[0] = Ingresar_datos("La cosa",'A',"TERROR","20-12-1999","ElweaMaximo");

    Imprimir(datos);
    return 0;

}
