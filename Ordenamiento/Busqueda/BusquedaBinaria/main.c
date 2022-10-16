#include <stdio.h>
#include <stdbool.h>
void CrearArraglo(int maximo,int minimo, int arreglo[maximo]){
    int largo=(maximo-minimo)+1;
    for(int i=0;i<=largo;i++){
        arreglo[i] = minimo+i;
    }
}
void Imprimir(int largo, int arreglo[]){
    for(int j=0;j<largo;j++){
        printf("%d|",arreglo[j]);
    }
}
void BuscarValor(int largo, int arreglo[]) {
    int valor;
    int ubicacion;
    int iteraciones = 0;
    bool condicion = true;

    printf("\nIngresar valor a buscar: ");
    scanf("%d", &valor);

    int max = largo;
    int min = 0;
    int puntoMedio = (max - min)/2;


    while (condicion) {
        iteraciones += 1;
        if (valor == arreglo[min]) {
            ubicacion = min;
            condicion = false;
            break;
        } else if (valor == arreglo[max]) {
            ubicacion = max;
            condicion = false;
            break;
        }else if (valor == arreglo[puntoMedio]) {
            ubicacion = puntoMedio;
            condicion = false;
            break;
        }else {
            if(valor < arreglo[puntoMedio]) {
                max = puntoMedio;
                puntoMedio=((max - min) / 2)+ min;
            }else if (valor > arreglo[puntoMedio]) {
                min = puntoMedio;
                puntoMedio = ((max - min) / 2) + min;
            }else if ((max - min) <=1) {
                printf("Me pase poh");
                condicion = false;
            }
            printf("Min: %d ; Max: %d\n",min,max);
        }
    }
    ubicacion+=1;
    printf("El valor \"%d\" esta en la posicion: %d\nEncontrado en %d iteraciones", valor, ubicacion, iteraciones);
}


int main() {
    int maximo;
    int minimo;

    printf("Ingresar el valor maximo: ");
    scanf("%d",&maximo);
    getchar();
    printf("\nIngresar el valor minimo: ");
    scanf("%d",&minimo);

    int largo=(maximo-minimo)+1;
    int arreglo[largo];

    CrearArraglo(maximo, minimo ,arreglo);
    Imprimir(largo,arreglo);
    BuscarValor(largo,arreglo);
    return 0;
}

