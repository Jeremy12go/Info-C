#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
/*Construya una función que, dado un arreglo de números aleatorios entre 1 y 20, un número aleatorio A entre 1 y 20,
y un número de entrada C entre 2 y 40, aplique búsqueda binaria para encontrar un número B tal que A+B=C. Imprima
los números con el formato “A + B = C” (ej., 3 + 6 = 9), o “No hay un número que cumpla la ecuación”,
dependiendo del resultado.*/
void RellenarArreglo(int largo, int arreglo[largo]){
    for(int i=0;i<largo;i++){
        arreglo[i] = rand() % (20-1+1) + 1;
    }
}

void OrdenarArreglo(int largo, int arreglo[largo]) {
    for(int j=0; j<largo-1;j++){
        for(int i=0; i<largo-1-j;i++){
            int guardar;
            if(arreglo[i]>arreglo[i+1]){
                guardar=arreglo[i];
                arreglo[i]=arreglo[i+1];
                arreglo[i+1]=guardar;
            }
        }
    }
}

void BuscarValor(int largo, int arreglo[],int c, int a) {
    bool condicion = true;
    int max = largo-1;
    int min = 0;
    int puntoMedio = (max - min)/2;

    while (condicion) {
        if (c == (arreglo[min] + a)) {
            condicion = false;
            printf("%d + %d = %d\n", a, arreglo[min],c );
            break;
        } else if (c == (arreglo[max] + a)) {
            condicion = false;
            printf("%d + %d = %d\n", a, arreglo[max],c );
            break;
        } else if (c == (arreglo[puntoMedio] + a)) {
            condicion = false;
            printf("%d + %d = %d\n", a, arreglo[puntoMedio],c);
            break;
        }else if(min==puntoMedio || max==puntoMedio){
            printf("No hay un número que cumpla la ecuación");
            condicion = false;
        }else {
            if(c < (arreglo[puntoMedio]-a)) {
                max = puntoMedio;
                puntoMedio=((max - min) / 2) + min;
            }else if (c > (arreglo[puntoMedio]-a)) {
                min = puntoMedio;
                puntoMedio = ((max - min) / 2) + min;
            }else if ((max - min) <=1) {
                condicion = false;
            }
        }
    }
}

int main() {
    srand (time(NULL));

    int arreglo[255];
    int a=rand() % (20-1+1) + 1;
    int c;

    printf("Ingresar un numero a buscar: ");
    scanf("%d",&c);

    RellenarArreglo(255,arreglo);
    OrdenarArreglo(255,arreglo);
    BuscarValor(255,arreglo,c,a);

    return 0;
}